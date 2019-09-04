#include "Doctor.h"

Doctor::Doctor() {

}

Doctor::Doctor(string, Especialidad *) {

}

void Doctor::setNombre(string& nombre) {
    this->nombre(nombre);
}

string Doctor::getNombre() {
    return nombre;
}

void Doctor::setEspecialidad(Especialidad * especialidad) {
    this->especialidad(especialidad);
}
