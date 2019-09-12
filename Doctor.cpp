#include "Doctor.h"

Doctor::Doctor() : nombre(""), especialidad(NULL),tamanno(tamanno){
    
    cantidad = 0;
    Paciente ** listaPaciente = new Paciente *[0];
    for (int fila = 0; fila < tamanno; fila++) {
        Paciente[fila] = NULL;
    }
}

Doctor::Doctor(string nombre, Especialidad * especialidad, int tamanno) : nombre(nombre), especialidad(especialidad), tamanno(tamanno) {
    cantidad = 0;
    Paciente ** listaPaciente = new Paciente *[tamanno];
    for (int fila = 0; fila < tamanno; fila++) {
        Paciente[fila] = NULL;
    }
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

std::string Doctor::getEspecialidad() {
    return especialidad->getEspecialidad;
}

string Doctor::imprimePacientes() {
    string reporte = "Pacientes: \n";
    for (int fila = 0; fila <= cantidad;fila++) {
        reporte += Paciente[fila];
    }
    return reporte;
}

void Doctor::ingresarPaciente(Paciente* paciente){
    listaPaciente[cantidad] = paciente;
    cantidad++;
}

string Doctor::imprimeDoctor() {
    std::string reporte;
    reporte += "Nombre del Doctor: " + getNombre() + "\nEspecialidad: " + std::to_string(getEspecialidad())"\n" + imprimePacientes();
    return reporte;
}
