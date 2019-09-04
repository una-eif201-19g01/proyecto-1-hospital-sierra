#include <iostream>
#include "Pabellon.h"
#include "Especialidad.h"
#include "Doctor.h"
#include"Cama.h"

using namespace std;

void menu();
void limpiarCamas(Pabellon pab[10]);

int main() {
	
	Doctor doctores[20];
    Pabellon pabellones[10];
	Especialidad especialidades[10];
	
	limpiarCamas(Pabellones);
	menu(pabellones,doctores);
	
	return 0;
}

void limpiarCamas(Pabellon pab[10]){
	for(int fil=0;fil<10;fil++){
		for(int cam=0;cam<10;cam++){
			if(pab[fil]->cama[cam]->paciente->getEstado()==0)
					pab[fil]->cama[cam]->liberarCama();
		}
	}
}

void menu(Pabellon pab[10],Doctor doc[20]) {
	int respuesta,op1;
	int cont=1;
	string esp1,cedula,nombre,apellido,direccion,patologia,tipoCirugia,estado,prioridad,fechaCirugia;
	bool rs1;
	do {
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"   * Bienvenido al sistema del hospital Esperanza *"<<endl;
		cout<<"-----------------------------------------------------------------------"<<endl;
		cout<<"   * 1. Internar un paciente "<<endl;
		cout<<"   * 2. Modificar un paciente "<<endl;
		cout<<"   * 3. Modificar especialidades "<<endl;
		cout<<"   * 4. Modificar doctores "<<endl;
		cout<<"   * 5. Modificar Pabellon"<<endl;
		cout<<"   * 6. Salir del sistema"<<endl;
		cout<<"-----------------------------------------------------------------------"<<endl;
		cout<<"   * Ingrese su seleccion: "<<endl;
		cout<<"-----------------------------------------------------------------------"<<endl;
		cin>>respuesta;
		cout<<endl;
		
		switch (respuesta) {
		case 1:
			if()
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"   * En cual especialidad va a ingresar el paciente?:  "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
			cin>>esp1;
			for(int fil=0;fil<10;fil++){
				if(esp1==especialidades[fil])
					rs1=true;
					esp11=fil;
			}
			if(rs1==true){
				for(int pab1=0;pab1<10;pab1++){
					for(int cam=0;cam<10;cam++){
						if(pab[pab]->cama[cam]->getEstado()==0){
							pab[pab]->cama[cam]->Paciente->setEstado("1");
							pab[pab]->cama[cam]->Paciente->setCama(cama[cam]);
							cout<<"------------------------------------------------------------------------"<<endl;
							cout<<"   * Ingrese los datos del paciente:  "<<endl;
							cout<<"------------------------------------------------------------------------"<<endl;
							cout<<"   * Cedula:"<<endl;
							cin>>cedula,
							cout<<"   * Nombre:"<<endl;
							cin>>nombre;
							cout<<"   * Apellido:"<<endl;
							cin>>apellido,
							cout<<"   * Direccion:"<<endl;
							cin>>direccion,
							cout<<"   * Patologia:"<<endl;
							cin>>patologia,
							cout<<"   * Tipo de cirugia:"<<endl;
							cin>>tipoCirugia,
							cout<<"   * Prioridad:"<<endl;
							cin>>prioridad,
							cout<<"   * Fecha de la cirugia:"<<endl;
							cin>>fechaCirugia;
							pab[pab]->cama[cam]->Paciente->setCedula(cedula);
							pab[pab]->cama[cam]->Paciente->setNombre(nombre);
							pab[pab]->cama[cam]->Paciente->setApellido(apellido);
							pab[pab]->cama[cam]->Paciente->setDireccion(direccion);
							pab[pab]->cama[cam]->Paciente->setPatologia(patologia]);
							pab[pab]->cama[cam]->Paciente->setTipoCirugia(tipoCirugia);
							pab[pab]->cama[cam]->Paciente->setPrioridad(prioridad);
							pab[pab]->cama[cam]->Paciente->setFechaCirugia(fechaCirugia);
							cout<<"------------------------------------------------------------------------"<<endl;
							cout<<"   * Los doctores disponibles son:  "<<endl;
							cout<<"------------------------------------------------------------------------"<<endl;
							for(int doc1=0;doc1<10;doc1++){
								if(cout<<doc[doc1]->getEspecialidad()==esp1){
									cout<<"   * "<<cont<<"."<<doc[doc1]->getNombre()<<endl
								}
								cont++;
							}
							cout<<"------------------------------------------------------------------------"<<endl;
							cout<<"   * Digite el numero del doctor a escojer:  "<<endl;
							cout<<"------------------------------------------------------------------------"<<endl;
							cin>>op1;
							pab[pab]->cama[cam]->Paciente->setDoctor(doc[op1]);
						}
					}
				}
			}
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
			
		case 5:
			
			break;
		default:
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<" * Ingreso un numero que no corresponde a ninguna de las opciones posibles,"<<endl;
			cout<<"   Vuelva a intentarlo"<<endl;
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<endl;
		}
	} while (respuesta != 6);
}
