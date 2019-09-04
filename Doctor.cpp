#include "Doctor.h"

Doctor::Doctor(){}

Doctor::Doctor(string nombre, Especialidad * especialidad): nombre(nombre), especialidad(especialidad) {}
void Doctor::setNombre(string& nombre) {
    this->nombre(nombre);
}

string Doctor::getNombre() {
    return nombre;
}

void Doctor::setEspecialidad(Especialidad * especialidad) {
    this->especialidad(especialidad);
}
