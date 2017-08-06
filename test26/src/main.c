#include <genesis.h>

//static void handleInput();



int main()
{
	u16 messageno;
	messageno = 0;
	
	VDP_drawText("Message1", 10, 13);
	
	while(1)
	{
		//VDP_setPaletteColors(0, palette_black, 64);
		//VDP_clearPlan(BPLAN, 1);
		
		VDP_fadeIn(0, 63/*(3 * 16) - 1*/, palette_black, 20, FALSE);
		
		switch(messageno) {
		
		case 0:
		VDP_drawText("Message1", 10, 13);
		break;
		
		case 1:
		VDP_drawText("Message2", 10, 13);
		break;
		
		case 2:
		VDP_drawText("Message3", 10, 13);
		break;
		
		case 3:
		VDP_drawText("Message4", 10, 13);
		break;
		
		case 4:
		VDP_drawText("Message5", 10, 13);
		break;
		
		case 5:
		VDP_drawText("Message6", 10, 13);
		break;
		
		case 6:
		VDP_drawText("Message7", 10, 13);
		break;
		
		default:
		messageno = 0;
		break;
		
		}
		waitTick(TICKPERSECOND * 3.0);
		VDP_fadeOutAll(20, 0);
		waitTick(TICKPERSECOND * 3.0);
		messageno = messageno + 1;
		
		
		//read input
		//move sprite
		//update score
		//draw current screen (logo, start screen, settings, game, gameover, credits...)

		//wait for screen refresh
		VDP_waitVSync();
	}
	return (0);
}
