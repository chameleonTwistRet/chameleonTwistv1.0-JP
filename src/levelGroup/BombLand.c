#include "common.h"

extern unsigned char Global_metalPlate_i4_PNG[];
extern unsigned char Global_steelPlate_i4_PNG[];
extern unsigned char Global_fraMEd_ia4_PNG[];
extern unsigned char Global_ballGround_i4_PNG[];
extern unsigned char Global_hexCombFade_i8_PNG[];
extern unsigned char Global_hexComb_i4_PNG[];
extern unsigned char Global_metalPlates_i4_PNG[];
extern unsigned char Global_factoryPlates_i4_PNG[];
extern unsigned char Global_cube_i4_PNG[];
extern unsigned char Global_brokenCube_i4_PNG[];
extern unsigned char Global_brownBrickWall_ci4_PAL[];
extern unsigned char Global_brownBrickWall_ci4_PNG[];
extern unsigned char Global_gravel_i4_PNG[];
extern unsigned char Global_squares_i4_PNG[];
extern unsigned char Global_strip2_i4_PNG[];

extern Gfx Global_fallbackCube_Gfx[];
extern CollisionData Global_fallbackCube_ColH;
extern Gfx Global_exitShadowSouth_Gfx[];
extern CollisionData Global_exitShadowSouth_ColH;
extern Gfx Global_exitShadowNorth_Gfx[];
extern CollisionData Global_exitShadowNorth_ColH;
extern Gfx Global_exitShadowEast_Gfx[];
extern CollisionData Global_exitShadowEast_ColH;
extern Gfx Global_exitShadowWest_Gfx[];
extern CollisionData Global_exitShadowWest_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern CollisionData Global_ALBLExit_ColH;
extern Gfx Global_unk3_Gfx[];
extern CollisionData Global_unk3_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern CollisionData Global_BossBridge_ColH;
extern Gfx Global_ALPole_Gfx[];
extern CollisionData Global_ALPole_ColH;
extern Gfx Global_ALBLDoor_Gfx[];
extern CollisionData Global_ALBLDoor_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern CollisionData Global_ALSpinDoor_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern CollisionData Global_BLLavaFloor_ColH;
extern Gfx Global_BLLava_Gfx[];
extern CollisionData Global_BLLava_ColH;
extern Gfx Global_BLLava2_Gfx[];
extern CollisionData Global_BLLava2_ColH;
extern Gfx Global_BLLava3_Gfx[];
extern CollisionData Global_BLLava3_ColH;
extern Gfx Global_BLLava4_Gfx[];
extern CollisionData Global_BLLava4_ColH;
extern Gfx Global_BLLava5_Gfx[];
extern CollisionData Global_BLLava5_ColH;
extern Gfx Global_BLLava6_Gfx[];
extern CollisionData Global_BLLava6_ColH;
extern Gfx Global_BLLava7_Gfx[];
extern CollisionData Global_BLLava7_ColH;
extern Gfx Global_BLLava8_Gfx[];
extern CollisionData Global_BLLava8_ColH;
extern Gfx Global_BLDestructableTop_Gfx[];
extern CollisionData Global_BLDestructableTop_ColH;
extern Gfx Global_BLMetalBridge_Gfx[];
extern CollisionData Global_BLMetalBridge_ColH;
extern Gfx Global_KLExit_Gfx[];
extern CollisionData Global_KLExit_ColH;
extern Gfx Global_KLDoor_Gfx[];
extern CollisionData Global_KLDoor_ColH;
extern Gfx Global_DCExit_Gfx[];
extern CollisionData Global_DCExit_ColH;
extern Gfx Global_TallExitShadow1_Gfx[];
extern CollisionData Global_TallExitShadow1_ColH;
extern Gfx Global_TallExitShadow2_Gfx[];
extern CollisionData Global_TallExitShadow2_ColH;
extern Gfx Global_GCExit1_Gfx[];
extern CollisionData Global_GCExit1_ColH;
extern Gfx Global_GCExit2_Gfx[];
extern CollisionData Global_GCExit2_ColH;
extern Gfx Global_trainingRoomLight_Gfx[];
extern CollisionData Global_trainingRoomLight_ColH;
extern Gfx Global_JLCaveExit1_Gfx[];
extern CollisionData Global_JLCaveExit1_ColH;
extern Gfx Global_JLCaveExit2_Gfx[];
extern CollisionData Global_JLCaveExit2_ColH;
extern Gfx Global_JLCaveExit3_Gfx[];
extern CollisionData Global_JLCaveExit3_ColH;
extern Gfx Global_JLCaveExit4_Gfx[];
extern CollisionData Global_JLCaveExit4_ColH;
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern CollisionData Global_JLOutsideEntrance_ColH;
extern Gfx Global_JLFxCamPillar_Gfx[];
extern CollisionData Global_JLFxCamPillar_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern CollisionData Global_JLCaveDoor_ColH;
extern Gfx BombLand_exit1_Gfx[];
extern CollisionData BombLand_exit1_ColH;
extern Gfx BombLand_exit2_Gfx[];
extern CollisionData BombLand_exit2_ColH;
extern Gfx BombLand_exit3_Gfx[];
extern CollisionData BombLand_exit3_ColH;
extern Gfx BombLand_exit4_Gfx[];
extern CollisionData BombLand_exit4_ColH;
extern Gfx BombLand_room0_Gfx[];
extern CollisionData BombLand_room0_ColH;
extern Gfx BombLand_room1_Gfx[];
extern CollisionData BombLand_room1_ColH;
extern Gfx BombLand_room2_Gfx[];
extern CollisionData BombLand_room2_ColH;
extern Gfx BombLand_room3_Gfx[];
extern CollisionData BombLand_room3_ColH;
extern Gfx BombLand_room4_Gfx[];
extern CollisionData BombLand_room4_ColH;
extern Gfx BombLand_room5_Gfx[];
extern CollisionData BombLand_room5_ColH;
extern Gfx BombLand_room6_Gfx[];
extern CollisionData BombLand_room6_ColH;
extern Gfx BombLand_room7_Gfx[];
extern CollisionData BombLand_room7_ColH;
extern Gfx BombLand_room8_Gfx[];
extern CollisionData BombLand_room8_ColH;
extern Gfx BombLand_room9_Gfx[];
extern CollisionData BombLand_room9_ColH;
extern Gfx BombLand_room10_Gfx[];
extern CollisionData BombLand_room10_ColH;
extern Gfx BombLand_room11_Gfx[];
extern CollisionData BombLand_room11_ColH;
extern Gfx BombLand_room12_Gfx[];
extern CollisionData BombLand_room12_ColH;
extern Gfx BombLand_room13_Gfx[];
extern CollisionData BombLand_room13_ColH;
extern Gfx BombLand_room15Floor_Gfx[];
extern CollisionData BombLand_room15Floor_ColH;
extern Gfx BombLand_room15_Gfx[];
extern CollisionData BombLand_room15_ColH;
extern Gfx BombLand_room0Pipe_Gfx[];
extern CollisionData BombLand_room0Pipe_ColH;
extern Gfx BombLand_room1Floor_Gfx[];
extern CollisionData BombLand_room1Floor_ColH;
extern Gfx BombLand_block_Gfx[];
extern CollisionData BombLand_block_ColH;
extern Gfx BombLand_breakableBlockSides_Gfx[];
extern CollisionData BombLand_breakableBlockSides_ColH;
extern Gfx BombLand_room3Start_Gfx[];
extern CollisionData BombLand_room3Start_ColH;
extern Gfx BombLand_room3End_Gfx[];
extern CollisionData BombLand_room3End_ColH;
extern Gfx BombLand_block2Maybe_Gfx[];
extern CollisionData BombLand_block2Maybe_ColH;
extern Gfx BombLand_unusedPlatformMaybe_Gfx[];
extern CollisionData BombLand_unusedPlatformMaybe_ColH;
extern Gfx BombLand_wall_Gfx[];
extern CollisionData BombLand_wall_ColH;
extern Gfx BombLand_room4End1_Gfx[];
extern CollisionData BombLand_room4End1_ColH;
extern Gfx BombLand_room4End2_Gfx[];
extern CollisionData BombLand_room4End2_ColH;
extern Gfx BombLand_room4Start_Gfx[];
extern CollisionData BombLand_room4Start_ColH;
extern Gfx BombLand_room5Start_Gfx[];
extern CollisionData BombLand_room5Start_ColH;
extern Gfx BombLand_room5End_Gfx[];
extern CollisionData BombLand_room5End_ColH;
extern Gfx BombLand_breakableBlock_Gfx[];
extern CollisionData BombLand_breakableBlock_ColH;
extern Gfx BombLand_breakableBlockStack_Gfx[];
extern CollisionData BombLand_breakableBlockStack_ColH;
extern Gfx BombLand_room7Start_Gfx[];
extern CollisionData BombLand_room7Start_ColH;
extern Gfx BombLand_room7End_Gfx[];
extern CollisionData BombLand_room7End_ColH;
extern Gfx BombLand_breakableBlockSide1_Gfx[];
extern CollisionData BombLand_breakableBlockSide1_ColH;
extern Gfx BombLand_breakableBlockSide2_Gfx[];
extern CollisionData BombLand_breakableBlockSide2_ColH;
extern Gfx BombLand_breakableBlockSide3_Gfx[];
extern CollisionData BombLand_breakableBlockSide3_ColH;
extern Gfx BombLand_breakableBlockSide4_Gfx[];
extern CollisionData BombLand_breakableBlockSide4_ColH;
extern Gfx BombLand_blockPlatform_Gfx[];
extern CollisionData BombLand_blockPlatform_ColH;
extern Gfx BombLand_breakableBlock2_Gfx[];
extern CollisionData BombLand_breakableBlock2_ColH;
extern Gfx BombLand_room8Start_Gfx[];
extern CollisionData BombLand_room8Start_ColH;
extern Gfx BombLand_room8End_Gfx[];
extern CollisionData BombLand_room8End_ColH;
extern Gfx BombLand_room9End1_Gfx[];
extern CollisionData BombLand_room9End1_ColH;
extern Gfx BombLand_room9End2_Gfx[];
extern CollisionData BombLand_room9End2_ColH;
extern Gfx BombLand_room9Start_Gfx[];
extern CollisionData BombLand_room9Start_ColH;
extern Gfx BombLand_room10Floor_Gfx[];
extern CollisionData BombLand_room10Floor_ColH;
extern Gfx BombLand_room10Platform_Gfx[];
extern CollisionData BombLand_room10Platform_ColH;
extern Gfx BombLand_tallWallWithFloorOnTop_Gfx[];
extern CollisionData BombLand_tallWallWithFloorOnTop_ColH;
extern Gfx BombLand_unkBlock_Gfx[];
extern CollisionData BombLand_unkBlock_ColH;
extern Gfx BombLand_thinBreakableBlockSide1_Gfx[];
extern CollisionData BombLand_thinBreakableBlockSide1_ColH;
extern Gfx BombLand_thinBreakableBlockSide2_Gfx[];
extern CollisionData BombLand_thinBreakableBlockSide2_ColH;
extern Gfx BombLand_thinBreakableBlockSide3_Gfx[];
extern CollisionData BombLand_thinBreakableBlockSide3_ColH;
extern Gfx BombLand_thinBreakableBlockSide4_Gfx[];
extern CollisionData BombLand_thinBreakableBlockSide4_ColH;
extern Gfx BombLand_thinBreakableBlockSide5_Gfx[];
extern CollisionData BombLand_thinBreakableBlockSide5_ColH;
extern Gfx BombLand_unkPlatform_Gfx[];
extern CollisionData BombLand_unkPlatform_ColH;
extern Gfx BombLand_pipe1_Gfx[];
extern CollisionData BombLand_pipe1_ColH;
extern Gfx BombLand_pipe2_Gfx[];
extern CollisionData BombLand_pipe2_ColH;
extern Gfx BombLand_breakableBlockTop_Gfx[];
extern CollisionData BombLand_breakableBlockTop_ColH;
extern Gfx BombLand_blockTop_Gfx[];
extern CollisionData BombLand_blockTop_ColH;
extern Gfx BombLand_breakableBlockAgain_Gfx[];
extern CollisionData BombLand_breakableBlockAgain_ColH;
extern Gfx BombLand_metalBridgeThing_Gfx[];
extern CollisionData BombLand_metalBridgeThing_ColH;
extern Gfx BombLand_longPipe_Gfx[];
extern CollisionData BombLand_longPipe_ColH;
extern Gfx BombLand_XResult_Gfx[];
extern CollisionData BombLand_XResult_ColH;
extern Gfx BombLand_OResult_Gfx[];
extern CollisionData BombLand_OResult_ColH;
extern Gfx BombLand_grenadeShutters_Gfx[];
extern CollisionData BombLand_grenadeShutters_ColH;
extern Gfx BombLand_doorWall_Gfx[];
extern CollisionData BombLand_doorWall_ColH;
extern Gfx BombLand_doorPoles_Gfx[];
extern CollisionData BombLand_doorPoles_ColH;
extern Gfx BombLand_unk72_Gfx[];
extern CollisionData BombLand_unk72_ColH;
extern Gfx Global_pole_Gfx[];
extern CollisionData Global_pole_ColH;

Mtx BombLand_IMtx1 = IDENTITY;

#include "assets/levelGroup/BombLand/pointers.lvp.inc.c"

#include "build/assets/levelGroup/BombLand/rabObjects.inc.c"

#include "assets/levelGroup/BombLand/spriteActors/room0_spr1.sprite.inc.c"

#include "assets/levelGroup/BombLand/spriteActors/room0_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/BombLand/spriteActors/room12_spr1.sprite.inc.c"

#include "assets/levelGroup/BombLand/spriteActors/room12_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room0_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room0_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room0_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room0_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room0_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room0_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room0_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room0_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room0_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room0_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room0_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room1_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act4.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act5.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act6.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act7.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act8.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act9.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act10.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act11.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act12.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act13.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act14.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act15.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act16.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act17.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act18.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_act19.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room1_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room1_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room1_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room1_clct3.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room1_clct4.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room1_clct5.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room1_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj30.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj31.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj32.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj33.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj34.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj35.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj36.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj37.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj38.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj39.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj40.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj41.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj42.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj43.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj44.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj45.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj46.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj47.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj48.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj49.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj50.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj51.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj52.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj53.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_obj54.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room2_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room2_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room2_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room2_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room2_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room2_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room2_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room3_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room3_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room3_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room3_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room3_act4.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room3_act5.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room3_act6.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room3_act7.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room3_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj30.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj31.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj32.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj33.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj34.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj35.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj36.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj37.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj38.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj39.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj40.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj41.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj42.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj43.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj44.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj45.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj46.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj47.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj48.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj49.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj50.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj51.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj52.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj53.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj54.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj55.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj56.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj57.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj58.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj59.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj60.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj61.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj62.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj63.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj64.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj65.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj66.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj67.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj68.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj69.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj70.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj71.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj72.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj73.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj74.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj75.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj76.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj77.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj78.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj79.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj80.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj81.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj82.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj83.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj84.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj85.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj86.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj87.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj88.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj89.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj90.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj91.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj92.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj93.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj94.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj95.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_obj96.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room4_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act4.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act5.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act6.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act7.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act8.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_act9.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room4_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room4_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room4_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room5_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/spriteActors/room5_spr1.sprite.inc.c"

#include "assets/levelGroup/BombLand/spriteActors/room5_sprSTOP.sprite.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room5_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room5_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room5_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room5_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj30.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj31.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj32.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj33.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj34.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj35.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj36.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj37.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj38.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj39.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj40.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj41.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj42.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj43.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj44.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj45.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj46.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj47.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj48.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj49.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj50.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj51.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj52.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj53.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj54.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_obj55.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room6_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room6_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room6_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room6_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room6_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room7_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room7_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room7_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room7_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj30.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj31.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj32.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj33.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj34.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_obj35.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room8_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room8_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room8_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room8_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room8_act4.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room8_act5.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room8_act6.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room8_act7.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room8_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room8_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room8_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room8_clct3.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room8_clct4.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room8_clct5.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room8_clct6.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room8_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj30.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj31.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj32.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj33.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj34.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj35.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj36.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj37.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj38.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj39.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj40.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj41.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj42.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj43.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj44.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj45.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj46.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj47.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj48.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj49.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj50.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj51.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj52.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj53.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj54.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj55.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj56.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj57.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj58.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj59.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj60.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj61.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj62.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj63.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj64.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj65.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj66.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj67.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj68.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj69.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj70.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj71.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj72.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj73.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj74.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj75.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj76.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj77.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj78.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj79.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj80.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj81.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj82.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj83.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj84.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj85.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj86.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj87.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj88.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj89.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj90.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj91.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj92.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj93.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj94.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj95.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj96.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj97.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj98.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj99.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj100.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_obj101.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room9_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act4.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act5.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act6.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act7.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act8.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_act9.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room9_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room9_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room9_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room10_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/collectables/room10_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room10_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act4.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act5.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act6.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act7.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act8.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act9.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act10.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act11.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act12.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act13.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act14.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act15.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act16.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act17.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act18.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act19.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act20.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act21.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act22.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act23.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act24.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act25.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act26.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act27.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act28.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act29.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act30.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act31.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act32.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act33.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act34.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act35.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act36.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act37.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act38.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_act39.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room10_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj30.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj31.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj32.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj33.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj34.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj35.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj36.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj37.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj38.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj39.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj40.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj41.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj42.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj43.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj44.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj45.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj46.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj47.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj48.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj49.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj50.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj51.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj52.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj53.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj54.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj55.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj56.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj57.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj58.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj59.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_obj60.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room11_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room11_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room11_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room11_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room11_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj30.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj31.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_obj32.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room12_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room12_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room12_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room12_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room12_act4.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room12_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj15.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj16.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj17.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj18.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj19.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj20.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj21.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj22.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj23.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj24.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj25.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj26.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj27.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj28.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj29.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj30.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj31.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj32.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj33.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj34.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj35.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_obj36.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room13_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act2.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act3.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act4.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act5.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act6.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act7.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act8.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act9.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_act10.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room13_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room14_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room14_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room14_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room14_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room14_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj1.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj2.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj3.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj4.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj5.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj6.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj7.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj8.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj9.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj10.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj11.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj12.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj13.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_obj14.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomObjects/room15_objSTOP.roomObj.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room15_act1.roomAct.inc.c"

#include "assets/levelGroup/BombLand/roomActors/room15_actSTOP.roomAct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room3_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room3_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room3_clct3.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room3_clct4.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room3_clct5.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room3_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room6_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room6_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room7_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room7_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room7_clct3.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room7_clct4.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room7_clct5.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room7_clct6.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room7_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room11_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room11_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room11_clct3.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room11_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room12_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room12_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room12_clct3.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room12_clct4.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room12_clct5.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room12_clct6.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room12_clct7.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room12_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room13_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room13_clct2.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room13_clct3.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room13_clct4.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room13_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room15_clct1.clct.inc.c"

#include "assets/levelGroup/BombLand/collectables/room15_clctSTOP.clct.inc.c"

#include "assets/levelGroup/BombLand/spriteLib.sprLib.inc.c"

#include "assets/levelGroup/BombLand/rooms/room0.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room1.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room2.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room3.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room4.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room5.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room6.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room7.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room8.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room9.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room10.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room11.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room12.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room13.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room14.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/room15.rmSet.inc.c"

#include "assets/levelGroup/BombLand/rooms/roomSTOP.rmSet.inc.c"

#include "assets/levelGroup/BombLand/map.lvmM.inc.c"

#include "assets/levelGroup/BombLand/map.lvmH.inc.c"

#include "assets/levelGroup/BombLand/nullOWRoom.rmSet.inc.c"

#include "assets/levelGroup/BombLand/scope.lvlScope.inc.c"

#include "assets/levelGroup/BombLand/header.lvlHdr.inc.c"
s32 alignment_Pad_BL[] = {0, 0, 0};

Mtx BombLand_IMtx2 = IDENTITY;

#include "assets/levelGroup/BombLand/blScope.light.inc.c"

#include "assets/levelGroup/BombLand/exit1/exit1.vtx.inc.c"
Mtx BombLand_IMtx3 = IDENTITY;
unsigned char BombLand_Pad1[] = FILEPAD;
unsigned char BombLand_shutters_ia4_PNG[] = {
#include "build/assets/levelGroup/BombLand/exit1/shutters.ia4.png.inc.c"
};

#include "assets/levelGroup/BombLand/exit1/exit1.gfx.inc.c"

#include "assets/levelGroup/BombLand/exit2/exit2.vtx.inc.c"
Mtx BombLand_IMtx4 = IDENTITY;

#include "assets/levelGroup/BombLand/exit2/exit2.gfx.inc.c"

#include "assets/levelGroup/BombLand/exit3/exit3.vtx.inc.c"
Mtx BombLand_IMtx5 = IDENTITY;

#include "assets/levelGroup/BombLand/exit3/exit3.gfx.inc.c"

#include "assets/levelGroup/BombLand/exit4/exit4.vtx.inc.c"
Mtx BombLand_IMtx6 = IDENTITY;

#include "assets/levelGroup/BombLand/exit4/exit4.gfx.inc.c"

#include "assets/levelGroup/BombLand/room0/room0.vtx.inc.c"
Mtx BombLand_IMtx7 = IDENTITY;
unsigned char BombLand_Pad2[] = FILEPAD;
unsigned char BombLand_warning_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0/warning.ci4.png.inc.c"
};
unsigned char BombLand_Pad3[] = FILEPAD;
unsigned char BombLand_warning_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/room0/warning.ci4.pal.inc.c"
};
unsigned char BombLand_Pad4[] = FILEPAD;
unsigned char BombLand_warnBlock_ci8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0/warnBlock.ci8.png.inc.c"
};
unsigned char BombLand_Pad5[] = FILEPAD;
unsigned char BombLand_warnBlock_ci8_PAL[] = {
#include "build/assets/levelGroup/BombLand/room0/warnBlock.ci8.pal.inc.c"
};
unsigned char BombLand_Pad6[] = FILEPAD;
unsigned char BombLand_holeblock_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0/holeblock.i4.png.inc.c"
};
unsigned char BombLand_Pad7[] = FILEPAD;
unsigned char BombLand_grate_ia4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0/grate.ia4.png.inc.c"
};

#include "assets/levelGroup/BombLand/room0/room0.gfx.inc.c"

#include "assets/levelGroup/BombLand/room1/room1.vtx.inc.c"
Mtx BombLand_IMtx8 = IDENTITY;
unsigned char BombLand_Pad8[] = FILEPAD;
unsigned char BombLand_wallFade_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room1/wallFade.i8.png.inc.c"
};

#include "assets/levelGroup/BombLand/room1/room1.gfx.inc.c"

#include "assets/levelGroup/BombLand/room2/room2.vtx.inc.c"
Mtx BombLand_IMtx9 = IDENTITY;
unsigned char BombLand_Pad9[] = FILEPAD;
unsigned char BombLand_wall_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room2/wall.i8.png.inc.c"
};
unsigned char BombLand_Pad10[] = FILEPAD;
unsigned char BombLand_cheese_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room2/cheese.ci4.png.inc.c"
};
unsigned char BombLand_Pad11[] = FILEPAD;
unsigned char BombLand_cheese_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/room2/cheese.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombLand/room2/room2.gfx.inc.c"

#include "assets/levelGroup/BombLand/room3/room3.vtx.inc.c"
Mtx BombLand_IMtx10 = IDENTITY;
unsigned char BombLand_Pad12[] = FILEPAD;
unsigned char BombLand_hexcombFade_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room3/hexcombFade.i4.png.inc.c"
};

#include "assets/levelGroup/BombLand/room3/room3.gfx.inc.c"

#include "assets/levelGroup/BombLand/room4/room4.vtx.inc.c"
Mtx BombLand_IMtx11 = IDENTITY;
unsigned char BombLand_Pad13[] = FILEPAD;
unsigned char BombLand_plate_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room4/plate.i8.png.inc.c"
};

#include "assets/levelGroup/BombLand/room4/room4.gfx.inc.c"

#include "assets/levelGroup/BombLand/room5/room5.vtx.inc.c"
Mtx BombLand_IMtx12 = IDENTITY;
unsigned char BombLand_Pad14[] = FILEPAD;
unsigned char BombLand_plateFalloff_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room5/plateFalloff.i4.png.inc.c"
};

#include "assets/levelGroup/BombLand/room5/room5.gfx.inc.c"

#include "assets/levelGroup/BombLand/room6/room6.vtx.inc.c"
Mtx BombLand_IMtx13 = IDENTITY;

#include "assets/levelGroup/BombLand/room6/room6.gfx.inc.c"

#include "assets/levelGroup/BombLand/room7/room7.vtx.inc.c"
Mtx BombLand_IMtx14 = IDENTITY;

#include "assets/levelGroup/BombLand/room7/room7.gfx.inc.c"

#include "assets/levelGroup/BombLand/room8/room8.vtx.inc.c"
Mtx BombLand_IMtx15 = IDENTITY;
unsigned char BombLand_Pad15[] = FILEPAD;
unsigned char BombLand_hexcomb_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room8/hexcomb.i4.png.inc.c"
};

#include "assets/levelGroup/BombLand/room8/room8.gfx.inc.c"

#include "assets/levelGroup/BombLand/room9/room9.vtx.inc.c"
Mtx BombLand_IMtx16 = IDENTITY;

#include "assets/levelGroup/BombLand/room9/room9.gfx.inc.c"

#include "assets/levelGroup/BombLand/room10/room10.vtx.inc.c"
Mtx BombLand_IMtx17 = IDENTITY;

#include "assets/levelGroup/BombLand/room10/room10.gfx.inc.c"

#include "assets/levelGroup/BombLand/room11/room11.vtx.inc.c"
Mtx BombLand_IMtx18 = IDENTITY;

#include "assets/levelGroup/BombLand/room11/room11.gfx.inc.c"

#include "assets/levelGroup/BombLand/room12/room12.vtx.inc.c"
Mtx BombLand_IMtx19 = IDENTITY;

#include "assets/levelGroup/BombLand/room12/room12.gfx.inc.c"

#include "assets/levelGroup/BombLand/room13/room13.vtx.inc.c"
Mtx BombLand_IMtx20 = IDENTITY;

#include "assets/levelGroup/BombLand/room13/room13.gfx.inc.c"

#include "assets/levelGroup/BombLand/room15Floor/room15Floor.vtx.inc.c"
Mtx BombLand_IMtx21 = IDENTITY;
unsigned char BombLand_Pad16[] = FILEPAD;
unsigned char BombLand_plate_fade_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/room15Floor/plate_fade.i8.png.inc.c"
};

#include "assets/levelGroup/BombLand/room15Floor/room15Floor.gfx.inc.c"

#include "assets/levelGroup/BombLand/room15/room15.vtx.inc.c"
Mtx BombLand_IMtx22 = IDENTITY;
unsigned char BombLand_Pad17[] = FILEPAD;
unsigned char BombLand_lego_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room15/lego.i4.png.inc.c"
};

#include "assets/levelGroup/BombLand/room15/room15.gfx.inc.c"

#include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.vtx.inc.c"
Mtx BombLand_IMtx23 = IDENTITY;
unsigned char BombLand_Pad18[] = FILEPAD;
unsigned char BombLand_segment_i4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room0Pipe/segment.i4.png.inc.c"
};

#include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.gfx.inc.c"

#include "assets/levelGroup/BombLand/room1Floor/room1Floor.vtx.inc.c"
Mtx BombLand_IMtx24 = IDENTITY;
unsigned char BombLand_Pad19[] = FILEPAD;
unsigned char BombLand_circle_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room1Floor/circle.ci4.png.inc.c"
};
unsigned char BombLand_Pad20[] = FILEPAD;
unsigned char BombLand_circle_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/room1Floor/circle.ci4.pal.inc.c"
};
unsigned char BombLand_Pad21[] = FILEPAD;
unsigned char BombLand_acid_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/room1Floor/acid.ci4.png.inc.c"
};
unsigned char BombLand_Pad22[] = FILEPAD;
unsigned char BombLand_acid_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/room1Floor/acid.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombLand/room1Floor/room1Floor.gfx.inc.c"

#include "assets/levelGroup/BombLand/block/block.vtx.inc.c"
Mtx BombLand_IMtx25 = IDENTITY;

#include "assets/levelGroup/BombLand/block/block.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.vtx.inc.c"
Mtx BombLand_IMtx26 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.gfx.inc.c"

#include "assets/levelGroup/BombLand/room3Start/room3Start.vtx.inc.c"
Mtx BombLand_IMtx27 = IDENTITY;

#include "assets/levelGroup/BombLand/room3Start/room3Start.gfx.inc.c"

#include "assets/levelGroup/BombLand/room3End/room3End.vtx.inc.c"
Mtx BombLand_IMtx28 = IDENTITY;

#include "assets/levelGroup/BombLand/room3End/room3End.gfx.inc.c"

#include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.vtx.inc.c"
Mtx BombLand_IMtx29 = IDENTITY;

#include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.gfx.inc.c"

#include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.vtx.inc.c"
Mtx BombLand_IMtx30 = IDENTITY;

#include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.gfx.inc.c"

#include "assets/levelGroup/BombLand/wall/wall.vtx.inc.c"
Mtx BombLand_IMtx31 = IDENTITY;

#include "assets/levelGroup/BombLand/wall/wall.gfx.inc.c"

#include "assets/levelGroup/BombLand/room4End1/room4End1.vtx.inc.c"
Mtx BombLand_IMtx32 = IDENTITY;

#include "assets/levelGroup/BombLand/room4End1/room4End1.gfx.inc.c"

#include "assets/levelGroup/BombLand/room4End2/room4End2.vtx.inc.c"
Mtx BombLand_IMtx33 = IDENTITY;

#include "assets/levelGroup/BombLand/room4End2/room4End2.gfx.inc.c"

#include "assets/levelGroup/BombLand/room4Start/room4Start.vtx.inc.c"
Mtx BombLand_IMtx34 = IDENTITY;

#include "assets/levelGroup/BombLand/room4Start/room4Start.gfx.inc.c"

#include "assets/levelGroup/BombLand/room5Start/room5Start.vtx.inc.c"
Mtx BombLand_IMtx35 = IDENTITY;

#include "assets/levelGroup/BombLand/room5Start/room5Start.gfx.inc.c"

#include "assets/levelGroup/BombLand/room5End/room5End.vtx.inc.c"
Mtx BombLand_IMtx36 = IDENTITY;

#include "assets/levelGroup/BombLand/room5End/room5End.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.vtx.inc.c"
Mtx BombLand_IMtx37 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.vtx.inc.c"
Mtx BombLand_IMtx38 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.gfx.inc.c"

#include "assets/levelGroup/BombLand/room7Start/room7Start.vtx.inc.c"
Mtx BombLand_IMtx39 = IDENTITY;

#include "assets/levelGroup/BombLand/room7Start/room7Start.gfx.inc.c"

#include "assets/levelGroup/BombLand/room7End/room7End.vtx.inc.c"
Mtx BombLand_IMtx40 = IDENTITY;

#include "assets/levelGroup/BombLand/room7End/room7End.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.vtx.inc.c"
Mtx BombLand_IMtx41 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.vtx.inc.c"
Mtx BombLand_IMtx42 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.vtx.inc.c"
Mtx BombLand_IMtx43 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.vtx.inc.c"
Mtx BombLand_IMtx44 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.gfx.inc.c"

#include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.vtx.inc.c"
Mtx BombLand_IMtx45 = IDENTITY;
unsigned char BombLand_Pad23[] = FILEPAD;
unsigned char BombLand_platebig_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/blockPlatform/platebig.i8.png.inc.c"
};

#include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.vtx.inc.c"
Mtx BombLand_IMtx46 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.gfx.inc.c"

#include "assets/levelGroup/BombLand/room8Start/room8Start.vtx.inc.c"
Mtx BombLand_IMtx47 = IDENTITY;

#include "assets/levelGroup/BombLand/room8Start/room8Start.gfx.inc.c"

#include "assets/levelGroup/BombLand/room8End/room8End.vtx.inc.c"
Mtx BombLand_IMtx48 = IDENTITY;

#include "assets/levelGroup/BombLand/room8End/room8End.gfx.inc.c"

#include "assets/levelGroup/BombLand/room9End1/room9End1.vtx.inc.c"
Mtx BombLand_IMtx49 = IDENTITY;

#include "assets/levelGroup/BombLand/room9End1/room9End1.gfx.inc.c"

#include "assets/levelGroup/BombLand/room9End2/room9End2.vtx.inc.c"
Mtx BombLand_IMtx50 = IDENTITY;

#include "assets/levelGroup/BombLand/room9End2/room9End2.gfx.inc.c"

#include "assets/levelGroup/BombLand/room9Start/room9Start.vtx.inc.c"
Mtx BombLand_IMtx51 = IDENTITY;

#include "assets/levelGroup/BombLand/room9Start/room9Start.gfx.inc.c"

#include "assets/levelGroup/BombLand/room10Floor/room10Floor.vtx.inc.c"
Mtx BombLand_IMtx52 = IDENTITY;

#include "assets/levelGroup/BombLand/room10Floor/room10Floor.gfx.inc.c"

#include "assets/levelGroup/BombLand/room10Platform/room10Platform.vtx.inc.c"
Mtx BombLand_IMtx53 = IDENTITY;

#include "assets/levelGroup/BombLand/room10Platform/room10Platform.gfx.inc.c"

#include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.vtx.inc.c"
Mtx BombLand_IMtx54 = IDENTITY;

#include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.gfx.inc.c"

#include "assets/levelGroup/BombLand/unkBlock/unkBlock.vtx.inc.c"
Mtx BombLand_IMtx55 = IDENTITY;

#include "assets/levelGroup/BombLand/unkBlock/unkBlock.gfx.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.vtx.inc.c"
Mtx BombLand_IMtx56 = IDENTITY;

#include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.gfx.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.vtx.inc.c"
Mtx BombLand_IMtx57 = IDENTITY;

#include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.gfx.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.vtx.inc.c"
Mtx BombLand_IMtx58 = IDENTITY;

#include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.gfx.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.vtx.inc.c"
Mtx BombLand_IMtx59 = IDENTITY;

#include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.gfx.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.vtx.inc.c"
Mtx BombLand_IMtx60 = IDENTITY;

#include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.gfx.inc.c"

#include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.vtx.inc.c"
Mtx BombLand_IMtx61 = IDENTITY;

#include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.gfx.inc.c"

#include "assets/levelGroup/BombLand/pipe1/pipe1.vtx.inc.c"
Mtx BombLand_IMtx62 = IDENTITY;

#include "assets/levelGroup/BombLand/pipe1/pipe1.gfx.inc.c"

#include "assets/levelGroup/BombLand/pipe2/pipe2.vtx.inc.c"
Mtx BombLand_IMtx63 = IDENTITY;

#include "assets/levelGroup/BombLand/pipe2/pipe2.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.vtx.inc.c"
Mtx BombLand_IMtx64 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.gfx.inc.c"

#include "assets/levelGroup/BombLand/blockTop/blockTop.vtx.inc.c"
Mtx BombLand_IMtx65 = IDENTITY;

#include "assets/levelGroup/BombLand/blockTop/blockTop.gfx.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.vtx.inc.c"
Mtx BombLand_IMtx66 = IDENTITY;

#include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.gfx.inc.c"

#include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.vtx.inc.c"
Mtx BombLand_IMtx67 = IDENTITY;
unsigned char BombLand_Pad24[] = FILEPAD;
unsigned char BombLand_apparentlyATexture_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/metalBridgeThing/apparentlyATexture.ci4.png.inc.c"
};
unsigned char BombLand_Pad25[] = FILEPAD;
unsigned char BombLand_apparentlyATexture_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/metalBridgeThing/apparentlyATexture.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.gfx.inc.c"

#include "assets/levelGroup/BombLand/longPipe/longPipe.vtx.inc.c"
Mtx BombLand_IMtx68 = IDENTITY;
unsigned char BombLand_Pad26[] = FILEPAD;
unsigned char BombLand_segment2_i8_PNG[] = {
#include "build/assets/levelGroup/BombLand/longPipe/segment2.i8.png.inc.c"
};

#include "assets/levelGroup/BombLand/longPipe/longPipe.gfx.inc.c"

#include "assets/levelGroup/BombLand/XResult/XResult.vtx.inc.c"
Mtx BombLand_IMtx69 = IDENTITY;
unsigned char BombLand_Pad27[] = FILEPAD;
unsigned char BombLand_x_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/XResult/x.ci4.png.inc.c"
};
unsigned char BombLand_Pad28[] = FILEPAD;
unsigned char BombLand_x_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/XResult/x.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombLand/XResult/XResult.gfx.inc.c"

#include "assets/levelGroup/BombLand/OResult/OResult.vtx.inc.c"
Mtx BombLand_IMtx70 = IDENTITY;
unsigned char BombLand_Pad29[] = FILEPAD;
unsigned char BombLand_OResulto_ci4_PNG[] = {
#include "build/assets/levelGroup/BombLand/OResulto.ci4.png.inc.c"
};
unsigned char BombLand_Pad30[] = FILEPAD;
unsigned char BombLand_OResulto_ci4_PAL[] = {
#include "build/assets/levelGroup/BombLand/OResulto.ci4.pal.inc.c"
};

#include "assets/levelGroup/BombLand/OResult/OResult.gfx.inc.c"

#include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.vtx.inc.c"
Mtx BombLand_IMtx71 = IDENTITY;

#include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.gfx.inc.c"

#include "assets/levelGroup/BombLand/doorWall/doorWall.vtx.inc.c"
Mtx BombLand_IMtx72 = IDENTITY;

#include "assets/levelGroup/BombLand/doorWall/doorWall.gfx.inc.c"

#include "assets/levelGroup/BombLand/doorPoles/doorPoles.vtx.inc.c"
Mtx BombLand_IMtx73 = IDENTITY;

#include "assets/levelGroup/BombLand/doorPoles/doorPoles.gfx.inc.c"

#include "assets/levelGroup/BombLand/unk72/unk72.vtx.inc.c"
Mtx BombLand_IMtx74 = IDENTITY;
unsigned char BombLand_Pad31[] = FILEPAD;
unsigned char BombLand_bars_ia4_PNG[] = {
#include "build/assets/levelGroup/BombLand/unk72/bars.ia4.png.inc.c"
};

#include "assets/levelGroup/BombLand/unk72/unk72.gfx.inc.c"

#include "assets/levelGroup/BombLand/exit1/exit1.colV.inc.c"

#include "assets/levelGroup/BombLand/exit1/exit1.colT.inc.c"

#include "assets/levelGroup/BombLand/exit1/exit1.colS.inc.c"

#include "assets/levelGroup/BombLand/exit1/exit1.colH.inc.c"

#include "assets/levelGroup/BombLand/exit2/exit2.colV.inc.c"

#include "assets/levelGroup/BombLand/exit2/exit2.colT.inc.c"

#include "assets/levelGroup/BombLand/exit2/exit2.colS.inc.c"

#include "assets/levelGroup/BombLand/exit2/exit2.colH.inc.c"

#include "assets/levelGroup/BombLand/exit3/exit3.colV.inc.c"

#include "assets/levelGroup/BombLand/exit3/exit3.colT.inc.c"

#include "assets/levelGroup/BombLand/exit3/exit3.colS.inc.c"

#include "assets/levelGroup/BombLand/exit3/exit3.colH.inc.c"

#include "assets/levelGroup/BombLand/exit4/exit4.colV.inc.c"

#include "assets/levelGroup/BombLand/exit4/exit4.colT.inc.c"

#include "assets/levelGroup/BombLand/exit4/exit4.colS.inc.c"

#include "assets/levelGroup/BombLand/exit4/exit4.colH.inc.c"

#include "assets/levelGroup/BombLand/room0/room0.colV.inc.c"

#include "assets/levelGroup/BombLand/room0/room0.colT.inc.c"

#include "assets/levelGroup/BombLand/room0/room0.colS.inc.c"

#include "assets/levelGroup/BombLand/room0/room0.colH.inc.c"

#include "assets/levelGroup/BombLand/room1/room1.colV.inc.c"

#include "assets/levelGroup/BombLand/room1/room1.colT.inc.c"

#include "assets/levelGroup/BombLand/room1/room1.colS.inc.c"

#include "assets/levelGroup/BombLand/room1/room1.colH.inc.c"

#include "assets/levelGroup/BombLand/room2/room2.colV.inc.c"

#include "assets/levelGroup/BombLand/room2/room2.colT.inc.c"

#include "assets/levelGroup/BombLand/room2/room2.colS.inc.c"

#include "assets/levelGroup/BombLand/room2/room2.colH.inc.c"

#include "assets/levelGroup/BombLand/room3/room3.colV.inc.c"

#include "assets/levelGroup/BombLand/room3/room3.colT.inc.c"

#include "assets/levelGroup/BombLand/room3/room3.colS.inc.c"

#include "assets/levelGroup/BombLand/room3/room3.colH.inc.c"

#include "assets/levelGroup/BombLand/room4/room4.colV.inc.c"

#include "assets/levelGroup/BombLand/room4/room4.colT.inc.c"

#include "assets/levelGroup/BombLand/room4/room4.colS.inc.c"

#include "assets/levelGroup/BombLand/room4/room4.colH.inc.c"

#include "assets/levelGroup/BombLand/room5/room5.colV.inc.c"

#include "assets/levelGroup/BombLand/room5/room5.colT.inc.c"

#include "assets/levelGroup/BombLand/room5/room5.colS.inc.c"

#include "assets/levelGroup/BombLand/room5/room5.colH.inc.c"

#include "assets/levelGroup/BombLand/room6/room6.colV.inc.c"

#include "assets/levelGroup/BombLand/room6/room6.colT.inc.c"

#include "assets/levelGroup/BombLand/room6/room6.colS.inc.c"

#include "assets/levelGroup/BombLand/room6/room6.colH.inc.c"

#include "assets/levelGroup/BombLand/room7/room7.colV.inc.c"

#include "assets/levelGroup/BombLand/room7/room7.colT.inc.c"

#include "assets/levelGroup/BombLand/room7/room7.colS.inc.c"

#include "assets/levelGroup/BombLand/room7/room7.colH.inc.c"

#include "assets/levelGroup/BombLand/room8/room8.colV.inc.c"

#include "assets/levelGroup/BombLand/room8/room8.colT.inc.c"

#include "assets/levelGroup/BombLand/room8/room8.colS.inc.c"

#include "assets/levelGroup/BombLand/room8/room8.colH.inc.c"

#include "assets/levelGroup/BombLand/room9/room9.colV.inc.c"

#include "assets/levelGroup/BombLand/room9/room9.colT.inc.c"

#include "assets/levelGroup/BombLand/room9/room9.colS.inc.c"

#include "assets/levelGroup/BombLand/room9/room9.colH.inc.c"

#include "assets/levelGroup/BombLand/room10/room10.colV.inc.c"

#include "assets/levelGroup/BombLand/room10/room10.colT.inc.c"

#include "assets/levelGroup/BombLand/room10/room10.colS.inc.c"

#include "assets/levelGroup/BombLand/room10/room10.colH.inc.c"

#include "assets/levelGroup/BombLand/room11/room11.colV.inc.c"

#include "assets/levelGroup/BombLand/room11/room11.colT.inc.c"

#include "assets/levelGroup/BombLand/room11/room11.colS.inc.c"

#include "assets/levelGroup/BombLand/room11/room11.colH.inc.c"

#include "assets/levelGroup/BombLand/room12/room12.colV.inc.c"

#include "assets/levelGroup/BombLand/room12/room12.colT.inc.c"

#include "assets/levelGroup/BombLand/room12/room12.colS.inc.c"

#include "assets/levelGroup/BombLand/room12/room12.colH.inc.c"

#include "assets/levelGroup/BombLand/room13/room13.colV.inc.c"

#include "assets/levelGroup/BombLand/room13/room13.colT.inc.c"

#include "assets/levelGroup/BombLand/room13/room13.colS.inc.c"

#include "assets/levelGroup/BombLand/room13/room13.colH.inc.c"

#include "assets/levelGroup/BombLand/room15Floor/room15Floor.colV.inc.c"

#include "assets/levelGroup/BombLand/room15Floor/room15Floor.colT.inc.c"

#include "assets/levelGroup/BombLand/room15Floor/room15Floor.colS.inc.c"

#include "assets/levelGroup/BombLand/room15Floor/room15Floor.colH.inc.c"

#include "assets/levelGroup/BombLand/room15/room15.colV.inc.c"

#include "assets/levelGroup/BombLand/room15/room15.colT.inc.c"

#include "assets/levelGroup/BombLand/room15/room15.colS.inc.c"

#include "assets/levelGroup/BombLand/room15/room15.colH.inc.c"

#include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colV.inc.c"

#include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colT.inc.c"

#include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colS.inc.c"

#include "assets/levelGroup/BombLand/room0Pipe/room0Pipe.colH.inc.c"

#include "assets/levelGroup/BombLand/room1Floor/room1Floor.colV.inc.c"

#include "assets/levelGroup/BombLand/room1Floor/room1Floor.colT.inc.c"

#include "assets/levelGroup/BombLand/room1Floor/room1Floor.colS.inc.c"

#include "assets/levelGroup/BombLand/room1Floor/room1Floor.colH.inc.c"

#include "assets/levelGroup/BombLand/block/block.colV.inc.c"

#include "assets/levelGroup/BombLand/block/block.colT.inc.c"

#include "assets/levelGroup/BombLand/block/block.colS.inc.c"

#include "assets/levelGroup/BombLand/block/block.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSides/breakableBlockSides.colH.inc.c"

#include "assets/levelGroup/BombLand/room3Start/room3Start.colV.inc.c"

#include "assets/levelGroup/BombLand/room3Start/room3Start.colT.inc.c"

#include "assets/levelGroup/BombLand/room3Start/room3Start.colS.inc.c"

#include "assets/levelGroup/BombLand/room3Start/room3Start.colH.inc.c"

#include "assets/levelGroup/BombLand/room3End/room3End.colV.inc.c"

#include "assets/levelGroup/BombLand/room3End/room3End.colT.inc.c"

#include "assets/levelGroup/BombLand/room3End/room3End.colS.inc.c"

#include "assets/levelGroup/BombLand/room3End/room3End.colH.inc.c"

#include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colV.inc.c"

#include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colT.inc.c"

#include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colS.inc.c"

#include "assets/levelGroup/BombLand/block2Maybe/block2Maybe.colH.inc.c"

#include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colV.inc.c"

#include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colT.inc.c"

#include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colS.inc.c"

#include "assets/levelGroup/BombLand/unusedPlatformMaybe/unusedPlatformMaybe.colH.inc.c"

#include "assets/levelGroup/BombLand/wall/wall.colV.inc.c"

#include "assets/levelGroup/BombLand/wall/wall.colT.inc.c"

#include "assets/levelGroup/BombLand/wall/wall.colS.inc.c"

#include "assets/levelGroup/BombLand/wall/wall.colH.inc.c"

#include "assets/levelGroup/BombLand/room4End1/room4End1.colV.inc.c"

#include "assets/levelGroup/BombLand/room4End1/room4End1.colT.inc.c"

#include "assets/levelGroup/BombLand/room4End1/room4End1.colS.inc.c"

#include "assets/levelGroup/BombLand/room4End1/room4End1.colH.inc.c"

#include "assets/levelGroup/BombLand/room4End2/room4End2.colV.inc.c"

#include "assets/levelGroup/BombLand/room4End2/room4End2.colT.inc.c"

#include "assets/levelGroup/BombLand/room4End2/room4End2.colS.inc.c"

#include "assets/levelGroup/BombLand/room4End2/room4End2.colH.inc.c"

#include "assets/levelGroup/BombLand/room4Start/room4Start.colV.inc.c"

#include "assets/levelGroup/BombLand/room4Start/room4Start.colT.inc.c"

#include "assets/levelGroup/BombLand/room4Start/room4Start.colS.inc.c"

#include "assets/levelGroup/BombLand/room4Start/room4Start.colH.inc.c"

#include "assets/levelGroup/BombLand/room5Start/room5Start.colV.inc.c"

#include "assets/levelGroup/BombLand/room5Start/room5Start.colT.inc.c"

#include "assets/levelGroup/BombLand/room5Start/room5Start.colS.inc.c"

#include "assets/levelGroup/BombLand/room5Start/room5Start.colH.inc.c"

#include "assets/levelGroup/BombLand/room5End/room5End.colV.inc.c"

#include "assets/levelGroup/BombLand/room5End/room5End.colT.inc.c"

#include "assets/levelGroup/BombLand/room5End/room5End.colS.inc.c"

#include "assets/levelGroup/BombLand/room5End/room5End.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock/breakableBlock.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockStack/breakableBlockStack.colH.inc.c"

#include "assets/levelGroup/BombLand/room7Start/room7Start.colV.inc.c"

#include "assets/levelGroup/BombLand/room7Start/room7Start.colT.inc.c"

#include "assets/levelGroup/BombLand/room7Start/room7Start.colS.inc.c"

#include "assets/levelGroup/BombLand/room7Start/room7Start.colH.inc.c"

#include "assets/levelGroup/BombLand/room7End/room7End.colV.inc.c"

#include "assets/levelGroup/BombLand/room7End/room7End.colT.inc.c"

#include "assets/levelGroup/BombLand/room7End/room7End.colS.inc.c"

#include "assets/levelGroup/BombLand/room7End/room7End.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide1/breakableBlockSide1.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide2/breakableBlockSide2.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide3/breakableBlockSide3.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockSide4/breakableBlockSide4.colH.inc.c"

#include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colV.inc.c"

#include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colT.inc.c"

#include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colS.inc.c"

#include "assets/levelGroup/BombLand/blockPlatform/blockPlatform.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlock2/breakableBlock2.colH.inc.c"

#include "assets/levelGroup/BombLand/room8Start/room8Start.colV.inc.c"

#include "assets/levelGroup/BombLand/room8Start/room8Start.colT.inc.c"

#include "assets/levelGroup/BombLand/room8Start/room8Start.colS.inc.c"

#include "assets/levelGroup/BombLand/room8Start/room8Start.colH.inc.c"

#include "assets/levelGroup/BombLand/room8End/room8End.colV.inc.c"

#include "assets/levelGroup/BombLand/room8End/room8End.colT.inc.c"

#include "assets/levelGroup/BombLand/room8End/room8End.colS.inc.c"

#include "assets/levelGroup/BombLand/room8End/room8End.colH.inc.c"

#include "assets/levelGroup/BombLand/room9End1/room9End1.colV.inc.c"

#include "assets/levelGroup/BombLand/room9End1/room9End1.colT.inc.c"

#include "assets/levelGroup/BombLand/room9End1/room9End1.colS.inc.c"

#include "assets/levelGroup/BombLand/room9End1/room9End1.colH.inc.c"

#include "assets/levelGroup/BombLand/room9End2/room9End2.colV.inc.c"

#include "assets/levelGroup/BombLand/room9End2/room9End2.colT.inc.c"

#include "assets/levelGroup/BombLand/room9End2/room9End2.colS.inc.c"

#include "assets/levelGroup/BombLand/room9End2/room9End2.colH.inc.c"

#include "assets/levelGroup/BombLand/room9Start/room9Start.colV.inc.c"

#include "assets/levelGroup/BombLand/room9Start/room9Start.colT.inc.c"

#include "assets/levelGroup/BombLand/room9Start/room9Start.colS.inc.c"

#include "assets/levelGroup/BombLand/room9Start/room9Start.colH.inc.c"

#include "assets/levelGroup/BombLand/room10Floor/room10Floor.colV.inc.c"

#include "assets/levelGroup/BombLand/room10Floor/room10Floor.colT.inc.c"

#include "assets/levelGroup/BombLand/room10Floor/room10Floor.colS.inc.c"

#include "assets/levelGroup/BombLand/room10Floor/room10Floor.colH.inc.c"

#include "assets/levelGroup/BombLand/room10Platform/room10Platform.colV.inc.c"

#include "assets/levelGroup/BombLand/room10Platform/room10Platform.colT.inc.c"

#include "assets/levelGroup/BombLand/room10Platform/room10Platform.colS.inc.c"

#include "assets/levelGroup/BombLand/room10Platform/room10Platform.colH.inc.c"

#include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colV.inc.c"

#include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colT.inc.c"

#include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colS.inc.c"

#include "assets/levelGroup/BombLand/tallWallWithFloorOnTop/tallWallWithFloorOnTop.colH.inc.c"

#include "assets/levelGroup/BombLand/unkBlock/unkBlock.colV.inc.c"

#include "assets/levelGroup/BombLand/unkBlock/unkBlock.colT.inc.c"

#include "assets/levelGroup/BombLand/unkBlock/unkBlock.colS.inc.c"

#include "assets/levelGroup/BombLand/unkBlock/unkBlock.colH.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colV.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colT.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colS.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide1/thinBreakableBlockSide1.colH.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colV.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colT.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colS.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide2/thinBreakableBlockSide2.colH.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colV.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colT.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colS.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide3/thinBreakableBlockSide3.colH.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colV.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colT.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colS.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide4/thinBreakableBlockSide4.colH.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colV.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colT.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colS.inc.c"

#include "assets/levelGroup/BombLand/thinBreakableBlockSide5/thinBreakableBlockSide5.colH.inc.c"

#include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colV.inc.c"

#include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colT.inc.c"

#include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colS.inc.c"

#include "assets/levelGroup/BombLand/unkPlatform/unkPlatform.colH.inc.c"

#include "assets/levelGroup/BombLand/pipe1/pipe1.colV.inc.c"

#include "assets/levelGroup/BombLand/pipe1/pipe1.colT.inc.c"

#include "assets/levelGroup/BombLand/pipe1/pipe1.colS.inc.c"

#include "assets/levelGroup/BombLand/pipe1/pipe1.colH.inc.c"

#include "assets/levelGroup/BombLand/pipe2/pipe2.colV.inc.c"

#include "assets/levelGroup/BombLand/pipe2/pipe2.colT.inc.c"

#include "assets/levelGroup/BombLand/pipe2/pipe2.colS.inc.c"

#include "assets/levelGroup/BombLand/pipe2/pipe2.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockTop/breakableBlockTop.colH.inc.c"

#include "assets/levelGroup/BombLand/blockTop/blockTop.colV.inc.c"

#include "assets/levelGroup/BombLand/blockTop/blockTop.colT.inc.c"

#include "assets/levelGroup/BombLand/blockTop/blockTop.colS.inc.c"

#include "assets/levelGroup/BombLand/blockTop/blockTop.colH.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colV.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colT.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colS.inc.c"

#include "assets/levelGroup/BombLand/breakableBlockAgain/breakableBlockAgain.colH.inc.c"

#include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colV.inc.c"

#include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colT.inc.c"

#include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colS.inc.c"

#include "assets/levelGroup/BombLand/metalBridgeThing/metalBridgeThing.colH.inc.c"

#include "assets/levelGroup/BombLand/longPipe/longPipe.colV.inc.c"

#include "assets/levelGroup/BombLand/longPipe/longPipe.colT.inc.c"

#include "assets/levelGroup/BombLand/longPipe/longPipe.colS.inc.c"

#include "assets/levelGroup/BombLand/longPipe/longPipe.colH.inc.c"

#include "assets/levelGroup/BombLand/XResult/XResult.colV.inc.c"

#include "assets/levelGroup/BombLand/XResult/XResult.colT.inc.c"

#include "assets/levelGroup/BombLand/XResult/XResult.colS.inc.c"

#include "assets/levelGroup/BombLand/XResult/XResult.colH.inc.c"

#include "assets/levelGroup/BombLand/OResult/OResult.colV.inc.c"

#include "assets/levelGroup/BombLand/OResult/OResult.colT.inc.c"

#include "assets/levelGroup/BombLand/OResult/OResult.colS.inc.c"

#include "assets/levelGroup/BombLand/OResult/OResult.colH.inc.c"

#include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colV.inc.c"

#include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colT.inc.c"

#include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colS.inc.c"

#include "assets/levelGroup/BombLand/grenadeShutters/grenadeShutters.colH.inc.c"

#include "assets/levelGroup/BombLand/doorWall/doorWall.colV.inc.c"

#include "assets/levelGroup/BombLand/doorWall/doorWall.colT.inc.c"

#include "assets/levelGroup/BombLand/doorWall/doorWall.colS.inc.c"

#include "assets/levelGroup/BombLand/doorWall/doorWall.colH.inc.c"

#include "assets/levelGroup/BombLand/doorPoles/doorPoles.colV.inc.c"

#include "assets/levelGroup/BombLand/doorPoles/doorPoles.colT.inc.c"

#include "assets/levelGroup/BombLand/doorPoles/doorPoles.colS.inc.c"

#include "assets/levelGroup/BombLand/doorPoles/doorPoles.colH.inc.c"

#include "assets/levelGroup/BombLand/unk72/unk72.colV.inc.c"

#include "assets/levelGroup/BombLand/unk72/unk72.colT.inc.c"

#include "assets/levelGroup/BombLand/unk72/unk72.colS.inc.c"

#include "assets/levelGroup/BombLand/unk72/unk72.colH.inc.c"

#include "assets/levelGroup/BombLand/unkMtx.mtx.inc.c"

#include "assets/levelGroup/BombLand/anim/unk.animH.inc.c"

#include "assets/levelGroup/BombLand/anim/unk.animArr.inc.c"

#include "assets/levelGroup/BombLand/blScope2.light.inc.c"

#include "assets/levelGroup/BombLand/unk73/unk73.vtx.inc.c"
Mtx BombLand_IMtx75 = IDENTITY;
unsigned char BombLand_Pad32[] = FILEPAD;
unsigned char BombLand_cannon_rgba16_PNG[] = {
#include "build/assets/levelGroup/BombLand/unk73/cannon.rgba16.png.inc.c"
};
unsigned char BombLand_Pad33[] = FILEPAD;
unsigned char BombLand_cannonHole_rgba16_PNG[] = {
#include "build/assets/levelGroup/BombLand/unk73/cannonHole.rgba16.png.inc.c"
};

#include "assets/levelGroup/BombLand/unk73/unk73.gfx.inc.c"
Mtx BombLand_IMtx76 = IDENTITY;

#include "assets/levelGroup/BombLand/unk74/unk74.gfx.inc.c"

#include "assets/levelGroup/BombLand/anim/unkPointers.animP.inc.c"
