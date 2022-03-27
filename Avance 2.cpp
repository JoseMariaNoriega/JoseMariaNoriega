#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int respuesta,mascitas,h, i=1;
	float Preciounitario[3], Canttratamiento[3], preciounitratamiento[3], Hora[3], total[3];
	char Nombre[100][3], Tratamiento[100][3], Descripcion[300][3];
		do {
		    cout<<"-"<<"\tCitas Dentales"<<"\t-"<<endl;
			cout << "\tElija una opción" << endl;
			cout << "1-Agendar cita" << endl;
			cout << "2-Modificar cita" << endl;
			cout << "3-Eliminar cita" << endl;
			cout << "4-Lista de citas vigentes" << endl;
			cout << "5-Limpiar pantalla" << endl;
			cout << "6-Salir" << endl;
			cin >> respuesta;
			switch (respuesta) {
			case 1:
				if(i<4){
				do {
				cout << "Escriba el nombre del paciente" << endl;
				cin >>Nombre[i];
				cout <<"hora del tratamiento (En formato de 24 hrs)" << endl;
				cin >> Hora[i];
				do{ 
				   h=1;
				if(Hora[i]>24){
				    cout<<"La hora ingresada no es valida, favor de ingresar otra"<<endl;
				    cin>>Hora[i];
				}
				else{
				    h=2;
				}
				}
				while(h!=2);
				
				
				cout << "Escriba el nombre del tratamiento" << endl;
				cin >> Tratamiento[i];
				cout << "Escriba la descripción del tratamiento" << endl;
				cin >> Descripcion[i];
				cout << "Precio unitario del tratamiento" << endl;
				cin >> preciounitratamiento[i];
				cout << "Escriba la cantidad del tratamiento" << endl;
				cin >> Canttratamiento[i];
				cout << "Precio unitario" << endl;
				cin >> Preciounitario[i];
				cout << "El total es:" << endl;
				total[i] = preciounitratamiento[i] + Canttratamiento[i] + Preciounitario[i];
				cout << total[i] << endl;
				i=i+1;
				cout << "¿Desea agendar otra cita?" << endl;
				cout << "1-Si" << endl;
				cout << "2-No" << endl;
				cin >> mascitas;
				if (i > 3) { cout << "Llego al limite de citas que puede registrar" << endl; };
				} while (mascitas != 2 and i < 4);
				}
				else {
					cout << "Llego al limite de citas que puede registrar" << endl;
				}
				break;
			case 2:
				int modificacion;
	
		            cout<<"Ingrese el numero de la cita que desea modificar"<<endl;
		            cin>>h;
		            	do{
		            cout<<"Numero de cita que se va a modificar:"<<"\t"<<h<<endl;
					cout << "¿Que desea modificar?" << endl;
					cout << "1-Nombre del paciente" << endl;
					cout << "2-Hora del tratamiento" << endl;
					cout << "3-Nombre del tratamiento" << endl;
					cout << "4-Descripción del tratamiento" << endl;
					cout << "5-Precio unitario del tratamiento" << endl;
					cout << "6-Cantidad del tratamiento" << endl;
					cout << "7-Precio unitario" << endl;
					cout << "8-No desea modificar nada" << endl;
					cin >> modificacion;
					switch (modificacion){
					    case 1:
						cout << "Escriba el nombre del paciente" << endl;
						cin >> Nombre[h];
						break;
					case 2:
						cout << "hora del tratamiento" << endl;
						cin >> Hora[h];
						do{ 
				   h=1;
				if(Hora[i]>24){
				    cout<<"La hora ingresada no es valida, favor de ingresar otra"<<endl;
				    cin>>Hora[h];
				}
				else{
				    h=2;
				}
				}
				while(h!=2);
						break;
					case 3:
						cout << "Escriba el nombre del tratamiento" << endl;
						cin >> Tratamiento[h];
						break;
					case 4:
						cout << "Escriba la descripción del tratamiento" << endl;
						cin >> Descripcion[h];
						break;
					case 5:
						cout << "Precio unitario del tratamiento" << endl;
						cin >> preciounitratamiento[h];
						break;
					case 6:
						cout << "Escriba la cantidad del tratamiento" << endl;
						cin >> Canttratamiento[h];
						break;
					case 7:
						cout << "Precio unitario" << endl;
						cin >> Preciounitario[h];
						break;
					
		            }
		}
		while(modificacion !=8);
					break;
			case 3:
				break;
			case 4:
				for (int i = 1; i < 4; i++) {
				cout<<"Numero de cita:"<<"\t"<<i<<endl;
				cout <<"Nombre del paciente:"<<"\t"<<Nombre[i] << endl;
				cout <<"Hora del tratamiento:"<<"\t"<< Hora[i] << endl;
				cout <<"Nombre del tratamiento:"<<"\t"<<Tratamiento[i] << endl;
				cout <<"Descripción del tratamiento:"<<"\t"<< Descripcion[i] << endl;
				cout <<"Precio unitario del tratamiento:"<<"\t"<< Preciounitario[i] << endl;
				cout <<"Cantidad del tratamiento:"<<"\t"<< Canttratamiento[i] << endl;
				cout <<"Precio unitario:"<<"\t" <<preciounitratamiento[i] << endl;
				cout <<"Total:"<<"\t"<< total[i] << endl;
				}
				break;
			case 5:
				break;
			}
		}
			while (respuesta != 6);
}