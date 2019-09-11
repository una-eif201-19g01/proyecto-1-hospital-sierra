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



