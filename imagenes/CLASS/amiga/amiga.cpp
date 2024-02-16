#include<iostream>
#include "amiga.h"
#include "amigas.cpp"

using namespace std;

int main(){
	Numeros a(5,5), b(9,9);
	a.mostrar();
	b.mostrar();
	Numeros res=Suma_Amiga(a,b);
	cout<<endl<<"Usando la funcion amiga"<<endl;
	res.mostrar();
	return 0;
}
