#ifndef _CAMA_H
#define _CAMA_H
#include"Pabellones.h"
class Pabellones;
class Cama{
private:
	bool estado;//0=libre,1=ocupada
	string numeroCama;
	Paciente* paciente;
	   	 
public:
	Cama();
	Cama(Pabellon*, int );
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
