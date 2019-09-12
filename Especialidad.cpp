#include "Especialidad.h"
Especialidad::Especialidad() {};
Especialidad::Especialidad(string especial) {
	especialidades = especial;
}

void Especialidad:: setEspecialidad(string espe) {
	especialidades = espe;
}

string Especialidad:: getEspecialidad() {
	return especialidad;
}


std::string Especialidad::imprimeEspecialidad() {
	std::string reporte;
	reporte += "Especialidad:" + getEspecialidad();
	return reporte;
}


