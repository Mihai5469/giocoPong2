#pragma once
#include <string>

using namespace std;

//costanti usate per il input
#define KEY_SEEN     1
#define KEY_RELEASED 2

//Strutura per le dimensioni del schermo
struct dimensioni {
	int w = 460;
	int h = 380;
};

//strutura per coordinate 
struct coordinate {
	int x = 0;
	int y = 0;
};

//strutura per creare palle
struct palla {
	coordinate coordinata;
	string colore = "red";
	double raggio = 10;
	bool piena = false;
};

void initiation();		//Inizializa Allegro5
void installPeri();		//installa periferiche

//funzione che prende come parametro una variabile di tipo
//palla e la disegna secondo le sue carateristiche
void pallina(palla& p);

//funzione che fa muovere la pallina
void muovi_pallina(palla& p, dimensioni d);