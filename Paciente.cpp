#include "Paciente.h"

Paciente::Paciente() {}
Paciente::Paciente(string cedula, string nombre, string apellido, string direccion, string patologia,
	string tipoCirugia, string estado, string prioridad, string fecha, Camas* cama, Doctores* doctor) {}
void Paciente::setCedula(string cedula){}
void Paciente::setNombre(string nombre){}
void Paciente::setApellido(string apellido){}
void Paciente::setDireccion(string direccion){}
void Paciente::setPatologia(string patologia){}
void Paciente::setTipoCirugia(string tipo){}
void Paciente::setEstado(string estado){}
void Paciente::setPrioridad(string prioridad){}
void Paciente::setFechaCirujia(string Fecha){}
void Paciente::setCama(Camas* cama){}
void Paciente::setDoctor(Doctores* doctor){}
string Paciente::getCedula(){}
string Paciente::getNombre(){}
string Paciente::getApellido(){}
string Paciente::getDireccion(){}
string Paciente::getPatologia(){}
string Paciente::getTipoCirugia(){}
string Paciente::getEstado(){}
string Paciente::getPrioridad(){}
string Paciente::getFechaCirujia(){}
Camas* Paciente::getCama(){}
Doctores* Paciente::getDoctor(){}
