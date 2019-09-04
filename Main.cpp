#include <iostream>
#include "Pabellon.h"
#include "Especialidad.h"
#include "Doctor.h"
#include "Cama.h"

using namespace std;

void menu(Pabellon pab[10],Doctor doc[20],Especialidad esp[10],Paciente p1,Cama *cam);

int main() {
	Paciente paciente1;
	Cama *cama;
	Doctor doctores[20];
    Pabellon pabellones[10];
	Especialidad especialidades[10];
	especialidades[0].setEspecialidad("Neumologia");
	especialidades[0].setEspecialidad("Hematologia");
	especialidades[0].setEspecialidad("Ortopedia");
	especialidades[0].setEspecialidad("Dermatologia");
	especialidades[0].setEspecialidad("Ginecologia");
	especialidades[0].setEspecialidad("Urologia");
	especialidades[0].setEspecialidad("Pediatria");
	especialidades[0].setEspecialidad("Psiquiatria");
	especialidades[0].setEspecialidad("Rehabilitacion");
	especialidades[0].setEspecialidad("Nutriologia");
	
	menu(pabellones,doctores,especialidades,paciente1,*cama);
	
	return 0;
}

void menu(Pabellon pab[10],Doctor doc[20],Especialidad esp[10],Paciente p1,Cama *cam){
	int respuesta,op1,op2,estado;
	int cont=1;
	string esp1,esp2,esp3,doc1,doc2,cedula,nombre,apellido,direccion,patologia,tipoCirugia,prioridad,fechaCirugia,genero;
	bool rs1;
	do {
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"   * Bienvenido al sistema del hospital Esperanza *"<<endl;
		cout<<"-----------------------------------------------------------------------"<<endl;
		cout<<"   * 1. Internar un paciente "<<endl;
		cout<<"   * 2. Ingresar especialidades "<<endl;
		cout<<"   * 3. Modificar doctores "<<endl;
		cout<<"   * 4. Salir del sistema"<<endl;
		cout<<"-----------------------------------------------------------------------"<<endl;
		cout<<"   * Ingrese su seleccion: "<<endl;
		cout<<"-----------------------------------------------------------------------"<<endl;
		cin>>respuesta;
		cout<<endl;
		
		switch (respuesta) {
		case 1:
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"   * En cual especialidad va a ingresar el paciente?:  "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
			for(int es=0;es<10;es++){
				cout<<esp[es]->getEspecialidades()<<endl;
			}
			cout<<"------------------------------------------------------------------------"<<endl;
			cin>>esp1;
			for(int fil=0;fil<10;fil++){
				if(esp1==especialidades[fil])
					rs1=true;
			}
			if(rs1==true){
				for(int pab1=0;pab1<10;pab1++){
					for(int cam1=0;cam1<10;cam1++){
						if(pab[pab]->Cama[cam1]->getEstado()==0){
							cam=cama[cam1];
							cout<<"------------------------------------------------------------------------"<<endl;
							cout<<"   * Ingrese los datos del paciente:  "<<endl;
							cout<<"------------------------------------------------------------------------"<<endl;
							cout<<"   * Cedula:"<<endl;
							cin>>cedula;
							cout<<"   * Nombre:"<<endl;
							cin>>nombre;
							cout<<"   * Apellido:"<<endl;
							cin>>apellido;
							cout<<"   * Genero:"<<endl;
							cin>>genero;
							cout<<"   * Direccion:"<<endl;
							cin>>direccion;
							cout<<"   * Patologia:"<<endl;
							cin>>patologia;
							cout<<"   * Tipo de cirugia:"<<endl;
							cin>>tipoCirugia;
							cout<<"   * Prioridad:"<<endl;
							cin>>prioridad;
							cout<<"   * Fecha de la cirugia:"<<endl;
							cin>>fechaCirugia;
							cout<<"------------------------------------------------------------------------"<<endl;
							cout<<"   * Los doctores disponibles son:  "<<endl;
							cout<<"------------------------------------------------------------------------"<<endl;
							for(int doc1=0;doc1<10;doc1++){
								if(doc[doc1]->getEspecialidad()==esp1){
									cout<<"   * "<<cont<<"."<<doc[doc1]->getNombre()<<endl
								}
								cont++;
							}
							cout<<"------------------------------------------------------------------------"<<endl;
							cout<<"   * Digite el numero del doctor a escojer:  "<<endl;
							cout<<"------------------------------------------------------------------------"<<endl;
							cin>>op1;
							p1.Paciente(cedula,nombre,apellido,direccion,patologia,tipoCirugia,1,prioridad,fechaCirugia,*cam,*doc[op1],genero);
						}
					}
				}
			}
			break;
		case 2:
			for(int es1=0;es1<10;es1++){
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"   * Ingrese el nombre de la especialidad:  "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
			cin>>esp2;
			esp[es1]=esp2;
			}
			
			break;
		case 3:
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"   * Los doctores actuales son:  "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
			for(int doc2=0;doc2<10;doc2++){
				cout<<doc[doc2]<<endl;
				cout<<endl;
			}
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"   * Escriba el nombre del doctor a eliminar:  "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
			cin>>doc1;
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"   * Escriba el nombre del nuevo doctor:  "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
			cin>>doc2;
			cout<<"------------------------------------------------------------------------"<<endl;
			cout<<"   * Escriba la especialidad del nuevo doctor:  "<<endl;
			cout<<"------------------------------------------------------------------------"<<endl;
			cin>>esp3;
			for(doc2=0;doc2<10;doc2++){
				if(doc[doc2]->getNombre()==doc1){
					doc[doc2]->setNombre(doc1);
					doc[doc2]->setEspecialidades(esp3);
				}
			}
			break;
		default:
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<" * Ingreso un numero que no corresponde a ninguna de las opciones posibles,"<<endl;
			cout<<"   Vuelva a intentarlo"<<endl;
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<endl;
		}
	} while (respuesta != 4);
}
