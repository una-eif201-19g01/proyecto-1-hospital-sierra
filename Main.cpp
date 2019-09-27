#include <iostream>
#include "Pabellon.h"
#include "Especialidad.h"
#include "Doctor.h"
#include "Cama.h"

using namespace std;

void menu(Pabellon pab[10],Doctor doc[20],Especialidad esp[10],Paciente p1);

int main() {
	Paciente paciente1;
	Cama* cama = NULL;
	Doctor doctores[20];
	Pabellon pabellones[10];
	Especialidad especialidades[10];
	especialidades[0].setEspecialidad("o");
	for(int pab10=0;pab10<10;pab10++){
		pabellones[pab10]->liberarCama(pab10);
	}
	menu(pabellones,doctores,especialidades,paciente1);
	
	return 0;
}

void menu(Pabellon pab[10],Doctor doc[20],Especialidad esp[10],Paciente p1){
	int respuesta, op1, op2, op3, op4,op5,op6,op7, doc1, cont, esp1, tam;
	string esp2,doc2,doc3,cedula,nombre,apellido,direccion,patologia,tipoCirugia,prioridad,fechaCirugia,genero;
	char sector1, genero1;
	bool rs1;
	
	cout<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"   * Bienvenido al sistema del hospital Esperanza,  *"<<endl;
	cout<<"   *  por favor ingrese los datos necesarios.  *"<<endl;
	cout<<"-----------------------------------------------------------------------"<<endl;
	cout<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"   * Bienvenido al sistema para ingresar Especialidades *  "<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	for(int es1=0;es1<10;es1++){
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"   * Ingrese el nombre de la especialidad:  "<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cin>>esp2;
		Especialidad* espN = new Especialidad(esp2);
		esp[es1]=espN;
	}
	cout<<endl
		cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"   * Bienvenido al sistema para ingresar doctores *  "<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	for(int do2=1;do2<20;do2++){
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"   * Ingrese el nombre del doctor:  "<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cin>>doc3;
		cout<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"   * Las especialidades disponibles son:  "<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cont=1;
		cout<<endl;
		for(int es1=0;es1<10;es1++){
			cout<<endl;
			cout<<cont<<"   * "<<esp[es1].imprimeEspecialidad()<<endl;
			cout<<endl;
			cont++;
		}
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"   * Ingrese el numero de la especialidad:  "<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cin>>op4;
		cout<<endl;
		Doctor* docN = new Doctor("doc3", esp[op4 - 1], 200);
		doc[do2]=docN;
	}
	cout<<endl;
	cout<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"   * Bienvenido al sistema para ingresar los pabellones *  "<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<endl;
	for(int pab2=0;pab2<10;pab2++){
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"   * Ingrese el sector del pabellon:  "<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cin>>sector1;
		cout<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cout<<"   * Ingrese el genero designado en el pabellon:  "<<endl;
		cout<<"------------------------------------------------------------------------"<<endl;
		cin>>genero1;
		cout<<endl;
		tam = 20;
		Pabellon* pabN = new Pabellon(sector1, genero1, tam);
		pab[pab2]= pabN ;
	}
	
	do {
		cout<<"----------------------------------------------------------------------------------------"<<endl;
		cout<<"   * Bienvenido al sistema del hospital Esperanza, a cual sistema desea entrar?: *"<<endl;
		cout<<"----------------------------------------------------------------------------------------"<<endl;
		cout<<"   * 1. Pacientes "<<endl;
		cout<<"   * 2. Doctores "<<endl;
		cout<<"   * 3. Mostrar pabellones"<<endl;
		cout<<"   * 4. Camas"<<endl;
		cout<<"   * 5. Mostrar especialidades"<<endl;
		cout<<"   * 6. Salir del sistema"<<endl;
		cout<<"-----------------------------------------------------------------------------------------"<<endl;
		cout<<"   * Ingrese su seleccion: "<<endl;
		cout<<"-----------------------------------------------------------------------------------------"<<endl;
		cin>>respuesta;
		cout<<endl;
		
		switch (respuesta){
		case 1:
			do{
				cout<<"------------------------------------------------------------------------"<<endl;
				cout<<"   * Bienvenido al sistema de pacientes, que desea hacer? *  "<<endl;
				cout<<"------------------------------------------------------------------------"<<endl;
				cout<<"   * 1. Internar un paciente"<<endl;
				cout<<"   * 2. Dar de alta a un paciente"<<endl;	
				cout<<"   * 3. Cambiar el doctor de un paciente"<<endl;
				cout<<"   * 4. Cambiar la cama del paciente"<<endl;
				cout<<"   * 5. Informe del paciente"<<endl;
				cout<<"   * 6. Volver al sistema principal"<<endl;
				cout<<"------------------------------------------------------------------------"<<endl;
				cin>>op6;
				switch (op6){
				case 1:
					cout<<"------------------------------------------------------------------------"<<endl;
					cout<<"   * En cual especialidad va a ingresar el paciente?:  "<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;
					cont=1;
					for(int es=0;es<10;es++){
						cout<<"  * ["<<cont<<"]"<<esp[es].getEspecialidad()<<endl;
						
					}
					cout<<"------------------------------------------------------------------------"<<endl;
					cout<<"   * Digite el numero:  "<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;
					cin>>esp1;
					cont=1;
					for(int fil=0;fil<10;fil++){
						if(esp[esp1-1].getEspecialidad()==esp[fil].getEspecialidad())
							rs1=true;
					}
					if(rs1==true){
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
						cont=1;
						for(int doc1=0;doc1<20;doc1++){
							if(doc[doc1].getEspecialidad()==esp1){
								cout<<"   * "<<cont<<"."<<doc[doc1].getNombre()<<endl;
							}
							cont++;
						}
						cout<<"------------------------------------------------------------------------"<<endl;
						cout<<"   * Digite el numero del doctor a escoger:  "<<endl;
						cout<<"------------------------------------------------------------------------"<<endl;
						cin>>op1;
						Paciente p1(cedula,genero,nombre,apellido,direccion,patologia,tipoCirugia,1,prioridad,fechaCirugia, &doc[op1-1]);
						for(int pab1=0;pab1<10;pab1++){
							string str1, str2;
							str1 = p1.getGenero();
							str2 = pab[pab1].getGeneroPabellon();
							if(str1==str2)
								pab[pab1].ingresarPaciente(&p1);
							pab1=10;			
						}	
					}
					break;
				case 2:
                                     for(int cont=0;cont<10;cont++){
                                        for(int cont2=0;cont2<20;cont2++){
                                            if(pab[cont].getPacienteCama(cont2)==p1){
                                                pab[cont].liberarCama(cont2);
                                            }
                                        }
                                    }
                                    for (int cont = 0; cont <= 20; cont++) {
						if (doc[cont].getNombre() == p1.getDoctor())
							doc[cont].eliminarPaciente(&p1);
                                    }
                                    p1.setEstado(0);
                                    p1.setCama()= NULL;
                                    p1.setDoctor()= NULL;
					break;
				case 3: {
					for (int cont = 0; cont <= 20; cont++) {
						if (doc[cont].getNombre() == p1.getDoctor())
							doc[cont].eliminarPaciente(&p1);
					}
					cout << "------------------------------------------------------------------------" << endl;
					cout << "   * Los doctores disponibles son:  " << endl;
					cout << "------------------------------------------------------------------------" << endl;
					cont = 1;
					for (int doc1 = 0; doc1 < 20; doc1++) {
						if (doc[doc1].getEspecialidad() == esp1) {
							cout << "   * " << cont << "." << doc[doc1].getNombre() << endl;
						}
						cont++;
					}
					cout << "------------------------------------------------------------------------" << endl;
					cout << "   * Digite el numero del doctor a escoger:  " << endl;
					cout << "------------------------------------------------------------------------" << endl;
					cin >> op1;
					doc[op1].ingresarPaciente(&p1);
					p1.setDoctor(doc[op1]);
					}
					
					
					break;
				case 4:{
					for(int cont=0;cont<10;cont++){
                                        	for(int cont2=0;cont2<20;cont2++){
                                            		if(pab[cont].getPacienteCama(cont2)==p1){
                                                		pab[cont].liberarCama(cont2);
                                            		}
                                        	}
                                    	}
                                    	for(int cont=0;cont<10;cont++){
                                        	if(pab[cont].getGeneroPabellon()==p1.getGenero()){
                                            		if(pab[cont].getCantidad()<20){
                                                		pab[cont].ingresarPaciente[&p1];
                                                		p1.setCama(pab[cont].getCama(pab[cont].getCantidad()));
                                            		}
                                        	}
                                    	}
					}
						
					break;
				case 5:
					cout << "Datos del Paciente: \n" << p1.imprimePaciente();
						
					break;
				default:
					cout<<"-----------------------------------------------------------------------------"<<endl;
					cout<<" * Ingreso un numero que no corresponde a ninguna de las opciones posibles,"<<endl;
					cout<<"   Vuelva a intentarlo"<<endl;
					cout<<"-----------------------------------------------------------------------------"<<endl;
					cout<<endl;
					break;
				}
			} while(op6 !=6);
		case 2:
			do{
				cout<<"------------------------------------------------------------------------"<<endl;
				cout<<"   * Bienvenido al sistema de Doctores, que desea hacer?:  *"<<endl;
				cout<<"------------------------------------------------------------------------"<<endl;
				cout<<"   * 1.Eliminar un Doctor"<<endl;
				cout<<"   * 2.Mostrar Doctores"<<endl;
				cout<<"   * 3.Volver al Sistema principal"<<endl;
				cout<<"------------------------------------------------------------------------"<<endl;
				cin>>op5;
				switch (op5){
				case 1:
					cout<<"------------------------------------------------------------------------"<<endl;
					cout<<"   * Los doctores actuales son:  "<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;
					cont=1;
					for(int do1=0;do1<20;do1++){
						cout<<cont<<"   * "<<doc[do1].imprimeDoctor()<<endl;
						cout<<endl;
						cont++;
					}
					cout<<"------------------------------------------------------------------------"<<endl;
					cout<<"   * Escriba el numero del doctor a cambiar:  "<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;
					cin>>doc1;
					cout<<"------------------------------------------------------------------------"<<endl;
					cout<<"   * Escriba el nombre del nuevo doctor:  "<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;
					cin>>doc2;
					cout<<"------------------------------------------------------------------------"<<endl;
					cout<<"   * Las especialidades disponibles son:  "<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;
					cont=1;
					for(int es1=0;es1<10;es1++){
						cout<<cont<<"   * "<<esp[es1].imprimeEspecialidad()<<endl;
						cout<<endl;
						cont++;
					}
					cout<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;
					cout<<"   * Ingrese el numero de la especialidad:  "<<endl;
					cout<<"------------------------------------------------------------------------"<<endl;
					cin>>op3;
					doc[doc1-1].setNombre(doc2);
					doc[doc1-1].setEspecialidad(&esp[op3]);
					break;
				case 2:
					cout<<"   * Los Doctores son: "<<endl;
					cout<<endl;
					for(int doc4=0;doc4<20;doc4++){
						cout<<doc[doc4].imprimeDoctor();
					}
					cout<<endl;
					break;
				default:
					cout<<"-----------------------------------------------------------------------------"<<endl;
					cout<<" * Ingreso un numero que no corresponde a ninguna de las opciones posibles,"<<endl;
					cout<<"   Vuelva a intentarlo"<<endl;
					cout<<"-----------------------------------------------------------------------------"<<endl;
					cout<<endl;
					break;
				}
			} while(op5 !=3);
					
		case 3:
			cout<<"   * Los pabellones son: "<<endl;
			cout<<endl;
			for(int pab3=0;pab3<10;pab3++){
				cout<<pab[pab3].imprimePabellon();
			}
			cout<<endl;
			break;
			
		case 4:
				
			break;
		case 5:
			cout<<"   * Las especialidades son: "<<endl;
			cout<<endl;
			for(int esp3=0;esp3<10;esp3++){
				cout<<esp[esp3].imprimeEspecialidad();
			}
			cout<<endl;
			break;
		default:
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<" * Ingreso un numero que no corresponde a ninguna de las opciones posibles,"<<endl;
			cout<<"   Vuelva a intentarlo"<<endl;
			cout<<"-----------------------------------------------------------------------------"<<endl;
			cout<<endl;
			break;
		}
	} while (respuesta != 6);
}
