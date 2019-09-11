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
Especialidad* Doctor::getEspecialidad() {
	return especialidad->getEspecialidades;
}

std::string Doctor::imprimeDoctor() {
	std::string reporte;
	reporte += "Nombre del Doctor: " + getNombre() + "\nEspecialidad: " + std::to_string(getEspecialidad());
	return reporte;
}
