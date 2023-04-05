/* Escribe un programa que lea de la entrada estandar el precio de un producto
y muestre en la salida estandar el precio del producto al aplicarle el Iva*/

#include<iostream>

using namespace std;

int main () {
	int producto;
	int  valorTotal;
	float iva;
	
	cout<<"Bienvenido a la Calculadora de IVA";
	cout<<"\nIngrese el precio de su producto: "; cin>>producto;
	//cout<<"Ingrese el valor del IVA: "; cin>>iva;
	
	iva = producto *0.19;
	valorTotal = producto + iva;
	
	cout<<"El precio total de su producto mas IVA es de: "<<valorTotal;
	
	
	return 0;
}
