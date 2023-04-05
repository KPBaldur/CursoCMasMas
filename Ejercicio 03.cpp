/*3. Realice un programa que lea la entrada estandar los siguientes datos
de una peronsa:

	Edad: dato de tipo entero.
	Sexo: dato de tipo Caracter.
	Altura en metros: dato de tipo real.
	
	Tras leer los datos, el programa debe mostrarlos en la salida estandar
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	
	cout<<"Hola bienvenido, porfavor ingresa tus datos: ";
	cout<<"Ingresa tu edad: "; cin>>edad;
	cout<<"Ahora ingresa tu sexo: "; cin>>sexo;
	cout<<"Y por ultimo tu estatura en metros: "; cin>>altura;
	
	cout<<"\nMuchas gracias, entonces tu edad es: "<<edad;
	cout<< " y tu sexo es: " <<sexo;
	cout<< " y tu estatura es: " <<altura;
	
	
	
	
	return 0;
}
