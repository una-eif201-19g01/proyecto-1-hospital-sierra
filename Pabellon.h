#ifndef _PABELLON_H
#define _PABELLON_H
#include"Paciente.h"
#include"Cama.h"
class Cama;
class Pabellon{
private:
string sector;
char genero;
Cama * camas[20];

private:

public:
	Pabellon();
	Pabellon(char,char);
	char getSectorPabellon();
	char getGeneroPabellon();
	void setGeneroPabellon(char&);
	void setSectorPabellon(char&);
	void ingresarPaciente(Paciente*);
	void liberarCama(int);
	std::string imprimePabellon();

};
#endif
