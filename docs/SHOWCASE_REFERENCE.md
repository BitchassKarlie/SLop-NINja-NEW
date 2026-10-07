# Original APK showcase reference

The user supplied an 82.033-second, 1280×720, 30 fps gameplay recording on 2026-10-07. This revision uses that recording as the visual reference. Home, pause and Swag coordinates below are calibrated from settled frames. Dojo coordinates and Sensei/title rectangles are independently recovered from the ARMv7 library. World Y is 320 minus canvas Y.

| Reference | Observation | Change |
| --- | --- | --- |
| ~2 s, home | Planks, four rings, illustrated instruction sign, temporary offline notice | gb_game background; New Game, Dojo, Feint and Quit; original sign and Feint mesh |
| ~4.4 s, Dojo | Large Sensei/title, pineapple/Swag, plum/About, bomb/Back, small upper-right logo | Recovered positions and original assets; About opens credits, with offline achievements accessible there |
| ~6 s, Swag | Vertical list on left; separate description and select pineapple on right | Scrolling list with drag capture, row preview, slice-to-equip; locked items stay locked |
| ~26 / 82 s, modes | Planks behind recovered mode layout | Replace store background with gb_game |
| ~66–74 s, Zen | Gold minute:second clock | Original numeric font, m:ss format, red final-ten-second font |
| ~74.5 s, pause | Large play left/retry right, audio centered above, quit artwork bottom right | Shared drawing/hit rectangles; lighter dimming |
| All settled scenes | Legacy graphics stretch across 16:9 display | Independent X/Y render scales; no letterboxing; explicit window input mapping |

## Calibrated canvas layout

| Element | Position / dimensions in 480×320 canvas |
| --- | --- |
| New Game fruit | center (256,224); ring quad 256 square (art has transparent margins) |
| Dojo fruit | center (94,223); ring 128 square |
| Feint | center (388,151); ring 104 square |
| Home quit bomb | center (422,267); ring 104 square |
| Pause play | rectangle (112,116,128,128) |
| Pause retry | rectangle (240,116,128,128) |
| Pause quit | rectangle (416,252,64,64) |
| Pause music / sound | rectangles (204,2,32,32), (244,2,32,32) |
| Swag list | left 296 units, row origin 35, spacing 80 |
| Swag item icon | rectangle (208,row+12,64,64, including transparent margins) |
| Dojo Sensei / title | rectangles (-68,79,256,256) / (-8,264,128,64), FUN_0003c860 |
| Dojo pineapple / plum / back bomb | centers (222,175) / (385,118) / (425,266), FUN_0003d41c |
| Swag select pineapple | center (386,50) |
| Swag back bomb | center (426,257) |

## Still visibly different

This is not yet 1:1 parity. Remaining visible differences include persistent juice splats, native fruit/material lighting and Euler poses, the background camera/rotation and vignette, thinner varied blade trails, complete scene-entry choreography and new-item badge lifetime. Achievement access is an offline replacement for the original service; its custom UI is not original APK artwork. Native critical chance state, full wave scheduling and projection remain unresolved. No Vita, 3DS, iOS or Android device test was possible.

## Screenshot corrections and motion

The comparison screenshots supplied at 19:37/19:38 exposed incorrect Dojo controls, missing Dojo/mini-title artwork, undersized/static fruit, missing animated bomb fuses and bright unselected catalog icons. These are implementation bugs rather than acceptable parity differences.

- Dojo now uses the recovered Sensei/title rectangles and pineapple/Swag, plum/About and bomb/Back positions. The correct back_icon texture replaces Quit on Dojo, Swag and mode selection. Hidden Dojo audio controls no longer capture slices.
- Models now retain their common exported units: native FUN_00023078 scales XML fruit size by .01. Extent normalization was shrinking pineapples and bombs because their leaves/fuses extended beyond the body. Both halves share the intact fruit's scale.
- Home/Dojo/Swag rings rotate and fruit bob/tumble using simulation time. Swag no longer returns before advancing its animation clock. Angular velocities and full poses are still portable approximations.
- Bomb smoke and directional sparks use the original bomb_smoke emitter's rate, lifetime, velocity, gravity, colors and texture. The fuse tip is transformed with the same mesh pose as the renderer. Particle counts are capped and cosmetic RNG is separate from gameplay.
- Home/Dojo navigation shows original cut-piece meshes during scene exit. The outgoing scene decays by .75 per 60 Hz frame until .001, recovered from FUN_0003d41c; alpha/sliding composition is still a portable approximation. Swag slice-to-equip shows both pineapple halves, then regrows its selection fruit. Locked items neither equip nor cut.
- Catalog dimming now covers complete unselected rows including icons, with the APK scratch divider texture. Drag momentum continues after release and stops at bounds; damping is not claimed to be recovered native behavior.


## Local verification

The platform suite sends mouse and finger events at four display aspects, reads every display corner to catch letterboxing, resizes a live window and verifies its new render/input scales, checks continuous blade rendering and loads all catalog entries. Core tests check home slice actions, pause controls/audio, catalog tap versus drag, preview versus equip and locked items. Motion captures at frames 0/15/30/45 confirm changed ring/fruit/fuse pixels; regression tests cover time-based Swag animation, emitter data, delayed slice navigation, regrowth, scroll momentum and focus reset. The native UI checker also verifies Dojo positions/rectangles, common mesh units and exit decay. The strict-warning Linux build, four suites and core ASan/UBSan run are the available validation; Actions minutes are exhausted.
