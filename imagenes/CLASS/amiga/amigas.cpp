#include<iostream>
#include"amiga.h"
using namespace std;

//Implementacion constructotres
void Numeros::metodo_Publico(){
	cout<<endl<<"Soy el metodo publico, llamando a un metodo privado;"<<endl;
	metodo_Privado();
}

Numeros::Numeros(){
}

Numeros::Numeros(int a, int b){
	this->a=a;
	this->b=b;
}

inline void Numeros::setA(int a){
	this->a=a;
}

inline void Numeros::setB(int b){
	this->b=b;
}

inline int Numeros::getA(){
	return this->a;
}

inline int Numeros::getB(){
	return this->b;
}

void Numeros::mostrar(){
	cout<<endl<<this->a<<" "<<this->b<<endl;
}

//implementando funcion amiga
//Una funcion amiga puede usar los atributos y metodos de una clase SIEMPRE Y CUANDO SEA DESDE UN OBJETO DE LA CLASE

Numeros Suma_Amiga(Numeros &obj1, Numeros &obj2){//No se usan el operador de alcance ::
	cout<<endl<<"Hola soy la funcion amiga "<<endl;//una funcion amiga no puede llamar directamente a los metodos de la clase
	//requiere objetos de la clase
	//metodoPrivado(); ERROR
	//metodoPublico();ERROR
	obj1.metodo_Publico();
	obj2.metodo_Privado();
	Numeros aux;
	aux.a=obj1.a+obj2.a;
	aux.b=obj1.b+obj2.b;
	/*Hay que notar que se utiliza directo con el nombre del atributo sin uso del metodo get*/
	return aux;
}
