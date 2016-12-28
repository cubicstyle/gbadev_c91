//ターゲット
//"first target"
#define TARGET_TOP_BG0 0x1 
#define TARGET_TOP_BG1 0x2
#define TARGET_TOP_BG2 0x4
#define TARGET_TOP_BG3 0x8
#define TARGET_TOP_OBJ 0x10
#define TARGET_TOP_BD 0x20
//2nd target
#define TARGET_LOW_BG0 0x0100 
#define TARGET_LOW_BG1 0x0200
#define TARGET_LOW_BG2 0x0400
#define TARGET_LOW_BG3 0x0800
#define TARGET_LOW_OBJ 0x1000
#define TARGET_LOW_BD 0x2000
#define BLEND_NEG 0x40

// ブレンドモード
#define BLEND_MODE_OFF (0<<6)
#define BLEND_MODE_ALPHA (1<<6)
#define BLEND_MODE_LIGHT (2<<6)
#define BLEND_MODE_DARK (3<<6)

//all blends 0->14
#define BLEND_LOW(n) ( (n) * 0x1 ) //dark pixels get through
#define BLEND_HIGH(n) ( (n) * 0x100 ) //lighter pixels get through
#define BLEND_LEVEL(n) ( BLEND_LOW(n) | BLEND_HIGH(n) ) //closest to semi-transparent levels
#define BLEND_BALANCE(n) (BLEND_LOW(n) | BLEND_HIGH(16-n))
/*
TARGET_TOP_* gets blended, and affects all TARGET_LOW_*
TARGET_*_BGX is a BG, 
TARGET_*_OBJ are the sprites, 
TARGET_*_BD is the background you cant edit underneath everytihng else

usage
	REG_BLDMOD = TARGET_TOP_BG1 | TARGET_LOW_BG2 | TARGET_LOW_BG1 | TARGET_LOW_BG3 | TARGET_LOW_OBJ | BLEND_NEG;
	REG_COLEV = BLEND_LEVEL(8);
*/


