#ifndef _ESPECIALIDAD_H
#define _ESPECIALIDAD_H
#include<iostream>
using std::string;
class Especialidad {
private:
	string especialidad;
public:

	Especialidad();
	Especialidad(string);
        ~Especialidad();
	void setEspecialidad(string);
	string getEspecialidad();
	string imprimeEspecialidad();

};
#endif
