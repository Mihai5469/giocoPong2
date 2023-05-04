// giocoPong2.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

using namespace std;

struct dimensioni {
	int w;
	int h;
};

void initiation();		//Inizializa Allegro5
void installPeri();		//installa periferiche

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

//Inizializa Allegro5
void initiation() {
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();
	al_init_primitives_addon();
	al_init_acodec_addon();
	return;
}

//installa periferiche
void installPeri() {
	al_install_keyboard();
	al_install_audio();
	return;
}
