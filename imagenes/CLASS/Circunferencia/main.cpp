/*Alfredo Chinchillas Duardo
int main.cpp*/
#include<iostream>
#include"circunferencia.h"
#include "circunferencia.cpp"
using namespace std;

int main(){
	circunferencia circulo1;
	circunferencia circulo2;
	circulo1.setRadio(5);
	cout<<endl<<"Area = "<<circulo1.calcularArea()<<endl;
	cout<<endl<<"radio = "<<circulo1.getRadio()<<endl;
	circulo2.setRadio(7.9);
	cout<<endl<<"Area = "<<circulo2.calcularArea()<<endl;
	cout<<endl<<"radio = "<<circulo2.getRadio()<<endl;
	return 0;
}
