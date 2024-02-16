/*ALfredo chinchillaS DUardo
automovil.cpp*/
#include"automovil.h"
#include<string>
#include<iostream>
using namespace std;
//implementar los constructores

string automovil::getMarca(){
	return this->marca;
}

string automovil::getModelo(){
	return this->modelo;
}

double automovil::getPrecio(){
	return this->precio;
}

void automovil::crearauto(string marca, string modelo, double precio){
	this->marca=marca;
	this->modelo=modelo;
	this->precio=precio;
}

void automovil::setMarca(string marca){
	this->marca=marca;
}

void automovil::setModelo(string modelo){
	this->modelo=modelo;
}

void automovil::setPrecio(double precio){
	this->precio=precio;
}

automovil::automovil(){
	marca=marca;
	modelo=modelo;
	precio=precio;
	cout<<"constructor"<<endl;
}
