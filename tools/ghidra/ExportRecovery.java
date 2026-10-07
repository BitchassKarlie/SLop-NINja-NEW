// Export decompiler reference output; this is not recompilable source.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import java.io.*;
public class ExportRecovery extends GhidraScript {
 public void run() throws Exception {
  File root=new File(getScriptArgs()[0]);root.mkdirs();
  DecompInterface di=new DecompInterface();di.openProgram(currentProgram);
  PrintWriter index=new PrintWriter(new File(root,"functions.tsv"));
  index.println("address\tname\tbody_bytes\tdecompiled");
  PrintWriter all=new PrintWriter(new File(root,"decompiled_reference.c"));
  all.println("/* Ghidra pseudocode: NOT original or recompilable C source. */");
  FunctionIterator fs=currentProgram.getFunctionManager().getFunctions(true);
  int count=0,ok=0;
  while(fs.hasNext()&&!monitor.isCancelled()) {
   Function f=fs.next(); if(f.isExternal())continue;
   DecompileResults r=di.decompileFunction(f,30,monitor);
   boolean good=r.decompileCompleted()&&r.getDecompiledFunction()!=null;
   index.println(f.getEntryPoint()+"\t"+f.getName()+"\t"+f.getBody().getNumAddresses()+"\t"+good);
   all.println("\n/* "+f.getEntryPoint()+" "+f.getName()+" */");
   if(good){all.println(r.getDecompiledFunction().getC());ok++;}
   else all.println("/* Failed: "+r.getErrorMessage().replace("*/","* /")+" */");
   count++; if(count%250==0)println("Exported "+count+" functions");
  }
  all.close();index.close();di.dispose();println("RESULT functions="+count+" decompiled="+ok);
 }
}
