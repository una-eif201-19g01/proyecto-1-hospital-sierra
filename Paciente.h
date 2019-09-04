#ifndef _PACIENTE_H
#define _PACIENTE_H
#include<iostream>
#include<string>
#include "Doctor.h"
#include"Pabellon.h"
using std::string;
class Paciente{
private:
	string cedula;
	string nombre;
	string apellido;
	string direccion;
	string patologia;
	string tipoCirugia;
	string estado;//0=de alta, 1=internado
	string prioridad;
	string fechaCirugia;
	Cama* cama;
	Doctor * doctor;

public:
	Paciente();
	Paciente(string,string,string,string,string,string,string,string,string,Cama* ,Doctor*);
	void setCedula(string& ) ;
	void setNombre(string&  ) ;
	void setApellido(string& ) ;
	void setDireccion(string& ) ;
	void setPatologia(string&  ) ;
	void setTipoCirugia(string& ) ;
	void setEstado() ;
	void setPrioridad(string& ) ;
	void setFechaCirugia(string& ) ;
	void setCama(Cama * ) ;
	void setDoctor(Doctor * ) ;
	string getCedula() ;
	string getNombre() ;
	string getApellido() ;
	string getDireccion() ;
	string getPatologia() ;
	string getTipoCirugia();
	string getEstado();
	string getPrioridad()  ;
	string getFechaCirugia() ;
	Cama  getCama() ;
	Doctor  getDoctor() ;

};
#endif
