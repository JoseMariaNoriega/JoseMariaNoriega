#include <iostream>
#include<math.h>
using namespace std;
int main(){
	int respuesta,mascitas, i=1;
	float Preciounitario[3], Canttratamiento[3], preciounitratamiento[3], Hora[3], total[3];
	char Nombre[100][3], Tratamiento[100][3], Descripci�n[300][3];
		do {
			cout << "Elija una opci�n" << endl<<endl;
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
				cout <<"hora del tratamiento" << endl;
				cin >> Hora[i];
				cout << "Escriba el nombre del tratamiento" << endl;
				cin >> Tratamiento[i];
				cout << "Escriba la descripci�n del tratamiento" << endl;
				cin >> Descripci�n[i];
				cout << "Precio unitario del tratamiento" << endl;
				cin >> preciounitratamiento[i];
				cout << "Escriba la cantidad del tratamiento" << endl;
				cin >> Canttratamiento[i];
				cout << "Precio unitario" << endl;
				cin >> Preciounitario[i];
				cout << "El total es:" << endl;
				total[i] = preciounitratamiento[i] + Canttratamiento[i] + Preciounitario[i];
				cout << total[i] << endl;
				i++;
				cout << "�Desea agendar otra cita?" << endl;
				cout << "1-Si" << endl;
				cout << "2-No" << endl;
				cin >> mascitas;
				if (i > 3) { cout << "Llego al limite de citas que puede registrar" << endl; };
				} while (mascitas != 2, i < 4);
				}
				else {
					cout << "Llego al limite de citas que puede registrar" << endl;
				}
				break;
			case 2:
				for (int i = 1 < 4; i++;) {
				int modificaci�n;
				do {
					cout << "�Que desea modificar?" << endl;
					cout << "1-Nombre del paciente" << endl;
					cout << "2-Hora del tratamiento" << endl;
					cout << "3-Nombre del tratamiento" << endl;
					cout << "4-Descripci�n del tratamiento" << endl;
					cout << "5-Precio unitario del tratamiento" << endl;
					cout << "6-Cantidad del tratamiento" << endl;
					cout << "7-Precio unitario" << endl;
					cout << "8-No desea modificar nada" << endl;
					cin >> modificaci�n;
					switch (modificaci�n) {
					case 1:
						cout << "Escriba el nombre del paciente" << endl;
						cin >> Nombre[i];
						break;
					case 2:
						cout << "hora del tratamiento" << endl;
						cin >> Hora[i];
						break;
					case 3:
						cout << "Escriba el nombre del tratamiento" << endl;
						cin >> Tratamiento[i];
						break;
					case 4:
						cout << "Escriba la descripci�n del tratamiento" << endl;
						cin >> Descripci�n[i];
						break;
					case 5:
						cout << "Precio unitario del tratamiento" << endl;
						cin >> preciounitratamiento[i];
						break;
					case 6:
						cout << "Escriba la cantidad del tratamiento" << endl;
						cin >> Canttratamiento[i];
						break;
					case 7:
						cout << "Precio unitario" << endl;
						cin >> Preciounitario[i];
						break;
					}
					} while (modificaci�n != 8);
				}

					break;
			case 3:
				break;
			case 4:
				for (int i = 1 < 4; i++;) {
				cout << Nombre[i] << endl;
				cout << Hora[i] << endl;
				cout << Tratamiento[i] << endl;
				cout << Descripci�n[i] << endl;
				cout << Preciounitario[i] << endl;
				cout << Canttratamiento[i] << endl;
				cout << preciounitratamiento[i] << endl;
				cout << total[i] << endl;
				}
				break;
			case 5:
				break;
			}
		}
			while (respuesta != 6);
}