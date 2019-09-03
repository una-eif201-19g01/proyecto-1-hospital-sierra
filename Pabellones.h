#ifndef _PABELLONES_H
#define _PABELLONES_H
#include"Paciente.h"
#include"Camas.h"
class Camas;
class Pabellones{
protected:
string sector;
char genero;
Camas * camas[20];

private:

public:
	Pabellones();
	Pabellones(char,char);
	char getSectorPabellon();
	char getGeneroPabellon();
	void setGeneroPabellon(char&);
	void setSectorPabellon(char&);
	void ingresarPaciente(Paciente*);
	void liberarCama(int);

};
#endif
