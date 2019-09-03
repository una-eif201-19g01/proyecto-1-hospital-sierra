#ifndef _CAMAS_H
#define _CAMAS_H
#include"Pabellones.h"
class Pabellones;
class Camas{
protected:
	bool estado;//0=libre,1=ocupada
	string numeroCama;
	Paciente* paciente;
	   	 
public:
	Camas();
	Camas(Pabellon*, int );
	void setEstado(bool ) ;
	void setPaciente(Paciente *) ;
	void setNumeroCama(int) ;
	string getNumeroCama();
	Paciente* getPaciente();
	bool getEstado();
	void ingresarPaciente(Paciente*);
	void liberarCama()

};
#endif
