#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include<stdlib.h>
#include <vector>
using namespace std;

void Alta();
void listas();
void archivos();
void eliminar();
void modificar();

int alta, * numpacientes;
float* Preciounitario, * Canttratamiento, * preciounitratamiento, * Hora, * total;
string* nombre, * Tratamiento, * Descripcion;
int main()
{
	int opc;
	cout << "1.-Alta" << endl << "2.-Ver lista de pacientes" << endl << "3.- limpiar pantalla" << endl << "4.-Modificar" << endl << "5.-Eliminar" << endl << "6.-Salir" << endl;
	cin >> opc;

	switch (opc)
	{
	case 1:
		Alta();
		return main();
		break;

	case 2:
		listas();
		return main();
		break;

	case 3:
		system("cls"); //system("clear");
		return main();
		break;

	case 4:
		modificar();
		return main();
		break;

	case 5:
		eliminar();
		return main();
		break;

	case 6:
		archivos();
		break;
	}
}

void Alta()
{
	cout << "Cuantos pacientes desea dar de alta" << endl;
	cin >> alta;
	numpacientes = new int[alta];
	Preciounitario = new float[alta];
	Canttratamiento = new float[alta];
	preciounitratamiento = new float[alta];
	Hora = new float[alta];
	total = new float[alta];
	nombre = new string[alta];
	Tratamiento = new string[alta];
	Descripcion = new string[alta];
	for (int i = 0; i < alta; i++)
	{
		while (getchar() != '\n');
		numpacientes[i] = i + 1;
		cout << "Ingrese nombre" << endl;
		getline(cin, nombre[i]);
		cout << "Ingrese Tratamiento" << endl;
		getline(cin, Tratamiento[i]);
		cout << "Ingrese descripción" << endl;
		getline(cin, Descripcion[i]);
		cout << "Ingrese hora" << endl;
		cin >> Hora[i];
		cout << "Ingrese precio unitario" << endl;
		cin >> Preciounitario[i];
		cout << "Ingrese cantidad de tratamiento" << endl;
		cin >> Canttratamiento[i];
		cout << "Ingrese precio unitario tratamiento" << endl;
		cin >> preciounitratamiento[i];
		total[i] = preciounitratamiento[i] + Canttratamiento[i] + Preciounitario[i];
		cout << total[i] << endl;
	}
}

void listas()
{
	for (int i = 0; i < alta; i++)
	{
		if (Preciounitario[i] == 0)
		{
			cout << "REGISTRO ELIMINADO" << i + 1 << endl;
		}
		else
		{
			cout << " registro" << i + 1 << endl;
			cout << numpacientes[i] << endl;
			cout << nombre[i] << endl;
			cout << Tratamiento[i] << endl;
			cout << Descripcion[i] << endl;
			cout << Hora[i] << endl;
			cout << Preciounitario[i] << endl;
			cout << Canttratamiento[i] << endl;
			cout << preciounitratamiento[i] << endl;
		}
	}
}

void archivos()
{
	ofstream archivo;
	string nombrearchivo;
	int texto;
	string texto2;

	nombrearchivo = "altaspacientes";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "ERROR NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}

	archivo << "NUMERO DE PACIENTE" << "\t";
	archivo << "NOMBRE" << "\t";
	archivo << "TRATAMIENTO" << "\t";
	archivo << "DESCRIPCION" << "\t";
	archivo << "HORA" << "\t";
	archivo << "PRECIOUNITARIO" << "\n";
	archivo << "CANTIDAD DE TRATAMIENTO" << "\n";
	archivo << "PRECIO UNITARIO TRATAMIENTO" << "\n";

	for (int i = 0; i < alta; i++)
	{
		if (numpacientes[i] == 0)
		{

		}
		else
		{
			texto = numpacientes[i];
			archivo << texto << "\t" << "\t";
			texto2 = nombre[i];
			archivo << texto2 << "\t" << "\t";
			texto2 = Tratamiento[i];
			archivo << texto2 << "\t " << "\t";
			texto2 = Descripcion[i];
			archivo << texto2 << "\t " << "\t";
			texto = Hora[i];
			archivo << texto << "\t " << "\t";
			texto = Preciounitario[i];
			archivo << texto << "\t " << "\t";
			texto = Canttratamiento[i];
			archivo << texto << "\t " << "\t";
			texto = preciounitratamiento[i];
			archivo << texto << "\t " << "\t";
			texto = total[i];
			archivo << texto << "\t " << "\t";
		}
	}
	archivo.close();
}

void eliminar()
{
	int j;
	cout << "ingrese el  numero de paciente a eliminar";
	cin >> j;
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		cout << "Eliminando registro" << j + 1 << endl;

		numpacientes[i] = 0;
		nombre[i] = " ";
		Tratamiento[i] = " ";
		Descripcion[i] = " ";
		Hora[i] = 0;
		Preciounitario[i] = 0;
		Canttratamiento[i] = 0;
		preciounitratamiento[i] = 0;
		total[i] = 0;

	}
}

void modificar()
{
	int j, opcion;
	cout << "ingrese el numero de paciente a modificar";
	cin >> j;
	j = j - 1;
	cout << "ingrese que desea modificar" << endl;
	cout << "1-Nombre" << endl;
	cout << "2-Tratamiento" << endl;
	cout << "3-Descripción" << endl;
	cout << "4-Hora" << endl;
	cout << "5-Precio unitario" << endl;
	cout << "6-Cantidad de tratamiento" << endl;
	cout << "7-Precio unitario de tratamiento" << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese nombre" << endl;
			getline(cin, nombre[i]);
		}
		break;
	case 2:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese tratamiento" << endl;
			getline(cin, Tratamiento[i]);
		}
	case 3:
		for (int i = j; i == j; i++)
		{
			while (getchar() != '\n');
			cout << "Ingrese descripción" << endl;
			getline(cin, Descripcion[i]);
		}
		break;
	case 4:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese Hora" << endl;
			cin >> Hora[i];
		}
	case 5:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese Precio unitario" << endl;
			cin >> Preciounitario[i];
		}
		break;
	case 6:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese la cantidad de tratamiento" << endl;
			cin >> Canttratamiento[i];
		}
		break;
	case 7:
		for (int i = j; i == j; i++)
		{
			cout << "Ingrese Precio unitario de tratamiento" << endl;
			cin >> preciounitratamiento[i];
		}
		break;
	}
	cout << "nuevo total:";
	total[j] = preciounitratamiento[j] + Canttratamiento[j] + Preciounitario[j];
	cout << total[j] << endl;


}