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

using namespace std;

//Strutura per le dimensioni del schermo
struct dimensioni {
	int w;
	int h;
};

//strutura per coordinate 
struct coordinate {
	int x;
	int y;
};

//strutura per creare palle
struct palla {
	coordinate coordinata;
	string colore;
	double raggio;
	bool piena;
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

//funzione che prende come parametro una variabile di tipo
//palla e la disegna secondo le sue carateristiche
void pallina(palla& p) {
	int r = 0, g = 0, b = 0;

	if (p.colore == "red")
		r = 255;
	else if (p.colore == "green")
		g = 255;
	else if (p.colore == "blue")
		b = 255;


	if (p.piena)
		al_draw_filled_circle(p.coordinata.x, p.coordinata.y, p.raggio, al_map_rgb(r, g, b));
	else
		al_draw_circle(p.coordinata.x, p.coordinata.y, p.raggio, al_map_rgb(r, g, b), 2);
	return;
}