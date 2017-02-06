/*
	Implemantacion en C++ y Allego de Megaman codigo original de DeividCoptero.
*/

#include <allegro.h>

int main() {
	allegro_init();
	install_keyboard();
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 300, 0, 0);
	
	BITMAP *buffer = create_bitmap(640, 300);
	clear_to_color(buffer, 0xFFFFFF);
	
	BITMAP *megaman;
	BITMAP *megamann;
	BITMAP *megamancorr1;
	BITMAP *megamancorr2;
	BITMAP *bala;
	BITMAP *megamann2;
	BITMAP *megamancorrp;
	BITMAP *megamancorrk;
	BITMAP *megamancorr5;
	BITMAP *megamancorr6;
	BITMAP *megaman2;
	
	int y = 200;
	int x = 100;
	int xb;
	bool bb = false;
	
	megaman = load_bitmap("meg.bmp", NULL);
	megaman2 = load_bitmap("megv.bmp", NULL);
	megamann = load_bitmap("meg1.bmp", NULL);
	megamann2 = load_bitmap("meg2.bmp", NULL);
	bala = load_bitmap("bala.bmp", NULL);
	megamancorr1 = load_bitmap("megcorr1.bmp", NULL);
	megamancorr2 = load_bitmap("megcorr2.bmp", NULL);
	megamancorrp = load_bitmap("megcorr3.bmp", NULL);
	megamancorrk = load_bitmap("megcorr4.bmp", NULL);
	megamancorr5 = load_bitmap("megcorr5.bmp", NULL);
	megamancorr6 = load_bitmap("megcorr6.bmp", NULL);
	
	blit(buffer, screen, 0,0,0,0,640,300);
	blit(megamann, screen, 0,0,x,y,81,78);
	while(!key[KEY_ESC]){
		blit(buffer, screen, 0,0,0,0,640,300);
		blit(megamann, screen, 0,0,x,y,76,78);
		if(key[KEY_UP]){
			blit(megaman, screen, 0,0,x,y,76,78);
			rest(300);
			bb = true;
			xb = x + 64;
		}
		else if(key[KEY_LEFT]){
			x -= 40;
			blit(buffer, screen, 0,0,0,0,640,300);
			blit(megamancorr6, screen, 0,0,x,y,81,78);
			rest(120);
			
			blit(buffer, screen, 0,0,0,0,640,300);
			x -= 60;
			blit(megamancorrp, screen, 0,0,x,y,81,78);
			rest(100);
			
			blit(buffer, screen, 0,0,0,0,640,300);
			x -= 50;
			blit(megamancorrk, screen, 0,0,x,y,81,78);
			rest(100);
		}
		else if(key[KEY_RIGHT]){
			x += 40;
			blit(buffer, screen, 0,0,0,0,640,300);
			blit(megamancorr5, screen, 0,0,x,y,81,78);
			rest(120);
			
			blit(buffer, screen, 0,0,0,0,640,300);
			x += 60;
			blit(megamancorr2, screen, 0,0,x,y,81,78);
			rest(100);
			
			blit(buffer, screen, 0,0,0,0,640,300);
			x += 50;
			blit(megamancorr1, screen, 0,0,x,y,81,78);
			rest(100);
		}
		if(bb = true){
			blit(bala, screen, 0,0,xb,y+28,14,13);
			xb += 45;
			if(xb > 630)
				bb = false;
		}
		rest(50);
	}
	
	readkey();
	destroy_bitmap(buffer);
	
	return 0;
}
END_OF_MAIN()
