#include "Camas.h"

Camas:: Camas(){}
Camas::Camas( Pabellon* pabellon, int numeroCama){
	paciente = NULL;
	estado = 0;
	numeroCama = to_string(pabellon->getSector()) + to_string(numeroCama);
}
void Camas:: setEstado(bool estado){}
void Camas:: setPaciente(Paciente * paciente){}
void Camas:: setNumeroCama(int numeroCama){
	this->numeroCama = to_string(pabellon->getSector) + to_string(numeroCama);
}
string Camas::getNumeroCama() { return numeroCama; }
Paciente* Camas::getPaciente() { return paciente; }
bool Camas::getEstado() { return estado; }
void Camas::ingresarPaciente(Paciente* paciente) {
	this->paciente(paciente);
	estado = 1;
	this->paciente->setEstado();
}
void Camas::liberarCama() {
	estado = 0;
	paciente->setEstado();
	paciente = NULL;
}