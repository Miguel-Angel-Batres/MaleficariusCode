/*Alfredo Chinchillas Duardo
int mainauto.cpp*/

#include<iostream>
#include"automovil.h"
#include"automovil.cpp"
#include<string>

using namespace std;

automovil llenar(automovil car);
void imprimir(automovil car);

int main(){
	automovil carro;
	carro.crearauto("Mazda","Mazda 3",395900.42);
	imprimir(carro);
	automovil carro2;
	carro2=llenar(carro2);
	imprimir(carro2);
	return 0;
}

void imprimir(automovil car){
	cout<<endl<<"Datos del automovil"<<endl;
	cout<<"Marca: "<<car.getMarca()<<endl;
	cout<<"Modelo: "<<car.getModelo()<<endl;
	cout<<"Precio: "<<car.getPrecio()<<endl;
}

automovil llenar(automovil car){
	string marca, modelo;
	double precio;
	cout<<endl<<"Ingrese los datos de su automovil"<<endl;
	cout<<"Ingrese la marca de su auto: ";
	getline(cin,marca);
	car.setMarca(marca);
	cout<<"Ingrese el modelo de su auto: ";
	getline(cin,modelo);
	car.setModelo(modelo);
	cout<<"Ingrese el precio de su auto: ";
	cin>>precio;
	car.setPrecio(precio);
	return car;
}
