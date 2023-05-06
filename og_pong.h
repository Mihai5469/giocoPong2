#pragma once
#include <string>

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
//funzione che prende come parametro una variabile di tipo
//palla e la disegna secondo le sue carateristiche
void pallina(palla& p);
