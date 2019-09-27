#include "Doctor.h"

Doctor::Doctor() : nombre(""), especialidad(NULL), tamannoDoctor(tamannoDoctor) {

	cantidad = 0;
	Paciente** listaPaciente = new Paciente * [0];
	for (int fila = 0; fila < tamannoDoctor; fila++) {
		listaPaciente[fila] = NULL;
	}
}

Doctor::Doctor(string nombre, Especialidad* especialidad, int tamanno) : nombre(nombre), especialidad(especialidad), tamannoDoctor(tamannoDoctor) {
	cantidad = 0;
	Paciente** listaPaciente = new Paciente * [tamannoDoctor];
	for (int fila = 0; fila < tamannoDoctor; fila++) {
		listaPaciente[fila] = NULL;
	}
}

Doctor::~Doctor(){
    delete[] listaPaciente;
    delete especialidad;
}

void Doctor::setNombre(string& nombre) {
	this->nombre=nombre;
}

string Doctor::getNombre() {
	return nombre;
}

void Doctor::setEspecialidad(Especialidad* especialidad) {
	this->especialidad=especialidad;
}

std::string Doctor::getEspecialidad() {
	return especialidad->getEspecialidad();
}

string Doctor::imprimePacientes() {
	string reporte = "Pacientes: \n";
	for (int fila = 0; fila <= cantidad; fila++) {
		reporte += listaPaciente[fila]->getNombre()+listaPaciente[fila]->getApellido();
	}
	return reporte;
}

void Doctor::ingresarPaciente(Paciente* paciente) {
	listaPaciente[cantidad] = paciente;
	cantidad++;
}

string Doctor::imprimeDoctor() {
	std::string reporte;
	reporte += "Nombre del Doctor: " + getNombre() + "\nEspecialidad: " + getEspecialidad()+"\n" + imprimePacientes();
	return reporte;
}
void Doctor::eliminarPaciente(Paciente* paciente){
    if(listaPaciente[cantidad] == paciente){
        listaPaciente[cantidad] = NULL;
    cantidad--;
    }
    else{
        for(int pos = 0; pos < cantidad-1; pos++){
            if(listaPaciente[pos]== paciente){
                for(int pos1 = pos;pos1<cantidad;pos++){
                    listaPaciente[pos1]=listaPaciente[pos1+1];
                }
            }
        }
    listaPaciente[cantidad]=NULL;
    cantidad--;
    }
}
