import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import java.io.*;
public class ExportEvidence extends GhidraScript {
 public void run() throws Exception {
  File root=new File(getScriptArgs()[0]);
  PrintWriter calls=new PrintWriter(new File(root,"call_edges.tsv"));calls.println("caller\tcallee\tcall_address");
  FunctionIterator fi=currentProgram.getFunctionManager().getFunctions(true);
  while(fi.hasNext()){
   Function f=fi.next();
   InstructionIterator ins=currentProgram.getListing().getInstructions(f.getBody(),true);
   while(ins.hasNext()){Instruction i=ins.next();for(Reference r:i.getReferencesFrom())if(r.getReferenceType().isCall()){Function cal=currentProgram.getFunctionManager().getFunctionAt(r.getToAddress());calls.println(f.getName()+"\t"+(cal==null?r.getToAddress():cal.getName())+"\t"+i.getAddress());}}
  }calls.close();
  PrintWriter strs=new PrintWriter(new File(root,"strings_and_references.tsv"));strs.println("address\tvalue\treferencing_functions");
  DataIterator ds=currentProgram.getListing().getDefinedData(true);
  while(ds.hasNext()){
   Data d=ds.next();if(!(d.getValue() instanceof String))continue;
   StringBuilder refs=new StringBuilder();ReferenceIterator ri=currentProgram.getReferenceManager().getReferencesTo(d.getAddress());
   while(ri.hasNext()){Reference r=ri.next();Function f=currentProgram.getFunctionManager().getFunctionContaining(r.getFromAddress());refs.append(f==null?r.getFromAddress():f.getName()).append(',');}
   strs.println(d.getAddress()+"\t"+d.getValue().toString().replace("\n","\\n").replace("\t","\\t").replace("\r","\\r")+"\t"+refs);
  }strs.close();
  PrintWriter data=new PrintWriter(new File(root,"defined_data.tsv"));data.println("address\tlabel\tvalue");
  ds=currentProgram.getListing().getDefinedData(true);while(ds.hasNext()){Data d=ds.next();data.println(d.getAddress()+"\t"+d.getLabel()+"\t"+d.getDefaultValueRepresentation());}data.close();
 }
}
