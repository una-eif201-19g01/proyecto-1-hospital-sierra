
#ifndef _DOCTOR_H
#define _DOCTOR_H
#include "Especialidad.h"
#include "Paciente.h"
class Doctor {
private:
    string nombre;
    Especialidad * especialidad;
    Paciente** listaPaciente;
    int cantidad;
    int tamannoDoctor;
public:
    Doctor();
    Doctor(string, Especialidad *, int);
    void setNombre(string&);
    string getNombre();
    void setEspecialidad(Especialidad *);
    string imprimeDoctor();
    string imprimePacientes();
    void ingresarPaciente(Paciente* paciente);
    Especialidad getEspecialidad();
};
#endif
