#include "tiempo.h"
#include "tiempo.cpp"
#include<iostream>

using namespace std;

int main(){
	tiempo hoy;
	cout<<"llamando funcion por funcion "<<endl;
	hoy.setHora(3);
	hoy.setMin(56);
	hoy.setSec(27);
	hoy.HoraStandar();
	hoy.HoraUniversal();
	cout<<endl<<"llamando a las funciones en cascada"<<endl;
	hoy.setHora(23).setMin(51).setSec(3).HoraStandar();
	hoy.setHora(15).setMin(23).setSec(12).HoraStandar();
	return 0;
}
