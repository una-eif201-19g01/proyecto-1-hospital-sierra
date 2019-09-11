#include "Especialidad.h"
Especialidad::Especialidad() {};
Especialidad::Especialidad(string especial) {
	especialidades = especial;
}

void Especialidad:: setEspecialidades(string espe) {
	especialidades = espe;
}

string Especialidad:: getEspecialidades() {
	return especialidades;
}


void Especialidad::imprimeEspecialidad() {
	std::string reporte;
	reporte += "Especialidad del Doctor: " + getEspecialidades();
	return reporte;
}

