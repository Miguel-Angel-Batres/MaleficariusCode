//
#include<iostream>
#include"sherdder.h"

using namespace std;

int main(){
	cout<<"Main..."<<endl;
	prueba objeto1(0);
	cout<<"Bloque de codigo"<<endl;
	{
		prueba objeto2(2);
		prueba objeto3(3);
	}
	
	prueba *ptr;
	ptr=new prueba(4);
	
	cout<<"Borrando ptr"<<endl;
	delete ptr;
	cout<<"fin del programa"<<endl;
	return 0;
}
