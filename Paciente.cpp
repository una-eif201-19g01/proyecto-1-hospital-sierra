#include "Paciente.h"

Paciente::Paciente() {}
Paciente::Paciente(string cedula, string nombre, string apellido, string direccion, string patologia,
	string tipoCirugia, string estado, string prioridad, string fecha, Camas* cama, Doctores* doctor) {}
void Paciente::setCedula(string& cedula) { this->cedula(cedula); }
void Paciente::setNombre(string& nombre) { this->nombre(nombre); }
void Paciente::setApellido(string& apellido) { this->apellido(apellido); }
void Paciente::setDireccion(string& direccion) { this->direccion(apellido); }
void Paciente::setPatologia(string& patologia) { this->patologia(apellido); }
void Paciente::setTipoCirugia(string& tipo) { tipoCirugia(tipo); }
void Paciente::setEstado(string& estado) { this->estado(estado); }
void Paciente::setPrioridad(string& prioridad) { this->prioridad(prioridad); }
void Paciente::setFechaCirujia(string& Fecha) { fechaCirugia(fecha); }
void Paciente::setCama(Camas* cama) { this->cama(cama); }
void Paciente::setDoctor(Doctores* doctor) { this->doctor(doctor); }
string Paciente::getCedula() { return cedula; }
string Paciente::getNombre() { return nombre; }
string Paciente::getApellido() { return apellido; }
string Paciente::getDireccion() { return direccion; }
string Paciente::getPatologia() { return patologia; }
string Paciente::getTipoCirugia() { return tipoCirugia; }
string Paciente::getEstado() { return estado; }
string Paciente::getPrioridad() { return prioridad; }
string Paciente::getFechaCirujia() { return fechaCirugia; }
Camas* Paciente::getCama() { return cama->getNumeroCama; }
Doctores* Paciente::getDoctor() { return doctor->getNombreDoctor; }
