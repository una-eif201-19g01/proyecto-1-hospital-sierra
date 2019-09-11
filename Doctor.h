
#ifndef _DOCTOR_H
#define _DOCTOR_H
#include "Especialidad.h"

class Doctor {
private:
    string nombre;
    Especialidad * especialidad;
public:
    Doctor();
    Doctor(string, Especialidad *);
    void setNombre(string&);
    string getNombre();
    void setEspecialidad(Especialidad *);
	string imprimeDoctor();
	Especialidad getEspecialidad();
};
#endif
