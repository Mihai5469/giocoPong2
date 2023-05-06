// giocoPong2.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <string>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include "og_pong.h"

using namespace std;



int main()
{
	dimensioni d;
	d.w = 800;
	d.h = 600;

	initiation();
	installPeri();

	ALLEGRO_DISPLAY* display = al_create_display(d.w, d.h);


	while (true) {
		al_clear_to_color(al_map_rgb(200, 200, 200));


		al_flip_display();

	}
}
