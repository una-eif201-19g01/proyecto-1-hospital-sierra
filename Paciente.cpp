#include "Paciente.h"

Paciente::Paciente() {}
Paciente::Paciente(string& cedula,string& genero, string& nombre, string& apellido, string& direccion, string& patologia,
	string& tipoCirugia, int estado, string& prioridad, string& fecha, Cama* cama, Doctor* doctor):cedula(cedula),nombre(nombre),apellido(apellido),
direccion(direccion),patologia(patologia),tipoCirugia(tipoCirugia),estado(estado),prioridad(prioridad),cama(cama),fechaCirugia(fecha),doctor(doctor),
genero(genero){}
void Paciente::setCedula(string& cedula) { this->cedula(cedula); }
void Paciente::setGenero(string& genero) { this->genero(genero); }
void Paciente::setNombre(string& nombre) { this->nombre(nombre); }
void Paciente::setApellido(string& apellido) { this->apellido(apellido); }
void Paciente::setDireccion(string& direccion) { this->direccion(direccion); }
void Paciente::setPatologia(string& patologia) { this->patologia(patologia); }
void Paciente::setTipoCirugia(string& tipo) { tipoCirugia(tipo); }
void Paciente::setEstado() { estado=(estado==0)?1:0; }
void Paciente::setPrioridad(string& prioridad) { this->prioridad(prioridad); }
void Paciente::setFechaCirugia(string& fecha) { fechaCirugia(fecha); }
void Paciente::setCama(Cama* cama) { this->cama(cama); }
void Paciente::setDoctor(Doctor* doctor) { this->doctor(doctor); }
string Paciente::getGenero() { return genero; }
string Paciente::getCedula() { return cedula; }
string Paciente::getNombre() { return nombre; }
string Paciente::getApellido() { return apellido; }
string Paciente::getDireccion() { return direccion; }
string Paciente::getPatologia() { return patologia; }
string Paciente::getTipoCirugia() { return tipoCirugia; }
int Paciente::getEstado() { return estado; }
string Paciente::getPrioridad() { return prioridad; }
string Paciente::getFechaCirugia() { return fechaCirugia; }
Cama* Paciente::getCama() { return cama->getNumeroCama; }
Doctor* Paciente::getDoctor() { return doctor->getNombre; }

void Paciente::imprimePaciente() {
	std::string reporte;

}