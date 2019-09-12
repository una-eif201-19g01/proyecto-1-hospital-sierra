#ifndef _ESPECIALIDAD_H
#define _ESPECIALIDAD_H
using std::string;
class Especialidad{
private:
	string especialidades;
public:

	Especialidad();
	Especialidad(string);
	void setEspecialidades(string);
	string getEspecialidades();
	string imprimeEspecialidades();

};
#endif
