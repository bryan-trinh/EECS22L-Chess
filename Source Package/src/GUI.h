/***********************************************************
*
*Constant.h: show a 8x8 board and move pieces by selecting and move
*
*edit 01/26/19 - Bryan Trinh
*updated version: 01/26/19 EECS22L Winter 2019
*
***********************************************************/

#ifndef _GUI_H
#define _GUI_H

#define BOARD_SIZE 10
#define MAX_MSGLEN  100 
#define SQUARE_SIZE 50  
#define WINDOW_BORDER 12
#define BOARD_BORDER 25
#define BOARD_WIDTH  (10*SQUARE_SIZE)
#define BOARD_HEIGHT (10*SQUARE_SIZE)
#define WINDOW_WIDTH  (BOARD_WIDTH + 5*BOARD_BORDER)		//560
#define WINDOW_HEIGHT (BOARD_HEIGHT + 5*BOARD_BORDER)		//560

enum GRID{
	BLACK = 90,
	WHITE = 91,
	BROWN = 92,
	BROWN_1 = 93, BROWN_2 = 94, BROWN_3 = 95, BROWN_4 = 96, BROWN_5 = 97, BROWN_6 = 98, BROWN_7 = 99, BROWN_8 = 100, 
	BROWN_A = 101, BROWN_B = 102, BROWN_C = 103, BROWN_D = 104, BROWN_E = 105, BROWN_F = 106, BROWN_G = 107, BROWN_H = 108, 
	BROWN_CHECK = 109, BROWN_PROMO = 110, BROWN_PROMOQ = 111, BROWN_PROMOR = 112, BROWN_PROMON = 113, BROWN_PROMOB = 114,
	
	WKINGW = 53, WQUEENW = 54, WROOKW = 55, WKNIGHTW = 56, WBISHOPW = 57, WPAWNW = 58,
	BKINGW = 59, BQUEENW = 60, BROOKW = 61, BKNIGHTW = 62, BBISHOPW = 63, BPAWNW = 64,
	
	WKINGB = 65, WQUEENB = 66, WROOKB = 67, WKNIGHTB = 68, WBISHOPB = 69, WPAWNB = 70,
	BKINGB = 71, BQUEENB = 72, BROOKB = 73, BKNIGHTB = 74, BBISHOPB = 75, BPAWNB = 76
	
};


#endif