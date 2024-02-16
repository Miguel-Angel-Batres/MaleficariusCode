#include"cadena.h"
#include"cadena.cpp"
#include<iostream>

using namespace std;

int main(){
	cadena cad1("Isc");
	cadena cad2("uaa");
	cadena cad3("ags");
	cadena suma;
	cout<<cad1.getCad();
	suma=cad1+cad2;
	cout<<endl<<suma.getCad()<<endl;
	
	cadena cad4("uaa");
	
	if(cad4!=cad2){
		cout<<"Cadenas distintas"<<endl;
	}
	else{
		cout<<"Cadenas iguales"<<endl;
	}
	
	cadena c1("hola");
	cadena c2("alumnos");
	c1+=c2;
	cout<<endl<<c1.getCad()<<endl;
	
	cadena cad5;
	cad5=cad1+cad2+cad3;
	cout<<endl<<cad5.getCad()<<endl;
	
	return 0;
}
