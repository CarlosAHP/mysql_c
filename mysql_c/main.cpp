// pr_c_mysql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "Cliente.h"
#include <iostream>
using namespace  std;

int main()
{
	
	string nit,nombres, apellidos, direccion,fecha_nacimiento ;
	int telefono;
	cout << "Ingresar NIT";
	getline(cin, nit);
	cout << "Ingresar Nombres:";
	getline(cin, nombres);
	cout << "Ingresar Apellidos:";
	getline(cin, apellidos);
	cout << "Ingresar Direccion:";
	getline(cin, direccion);
	cout << "Ingresar Telefono:";
	cin>>telefono;
	cin.ignore();
	cout << "Fecha Nacimiento:";
	cin>>fecha_nacimiento;
	
	Cliente c = Cliente(nombres, apellidos, direccion,telefono, fecha_nacimiento,nit);
	
	c.crear();
	c.leer(); 

	system("pause");
	return 0;

}