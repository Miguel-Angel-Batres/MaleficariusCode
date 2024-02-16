#include"cuadrado.h"
#include"cuadrado.cpp"
#include<iostream>

using namespace std;

int main(){
	//Los metodos static no necesitan un objeto para su llamado es atraves del nombre de la clase
	cout<<Cuadrado::cuadrado(25)<<endl;
	cout<<Cuadrado::cuadrado(23.9987)<<endl;
	cout<<Cuadrado::cuadrado(9L)<<endl;
	return 0;
}

