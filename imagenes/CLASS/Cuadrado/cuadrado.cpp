#include"cuadrado.h"
#include<iostream>

using namespace std;

  int Cuadrado::cuadrado(int a){
	cout<<endl<<"Funcion cuadrado() que usa un int: ";
	return a*a;
}

 double Cuadrado::cuadrado(double a){
	cout<<endl<<"Funcion cuadrado() que usa un double: ";
	return a*a;
}

 long Cuadrado::cuadrado(long a){
	cout<<endl<<"Funcion cuadrado() que usa un long: ";
	return a*a;
}
