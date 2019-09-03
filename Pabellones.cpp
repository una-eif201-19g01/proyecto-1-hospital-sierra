#include "Pabellones.h"

Pabellones::Pabellones() {}
Pabellones::Pabellones(char sector, char genero):genero(genero),sector(sector) {
	Camas* cama=NULL;
	for (int contador = 0; contador <= camas.size(); contador++) {
		cama = cama->Camas(sector, contador);
		camas[contador] = cama;
	}
	delete cama;
}
char Pabellones::getSectorPabellon() {return sector;}
char Pabellones::getGeneroPabellon() {return genero;}
void Pabellones::setGeneroPabellon(char&) {}
void Pabellones::setSectorPabellon(char&) {}
void Pabellones::ingresarPaciente(Paciente* paciente) {
	for (int contador = 0; contador <= camas.size(); contador++) {
		if(camas[contador]->getPaciente() == NULL) {
		camas[contador]->ingresarPaciente(paciente);
		}
	}
}
void Pabellones::liberarCama(int numero) { camas[numero]->liberarCama(); }