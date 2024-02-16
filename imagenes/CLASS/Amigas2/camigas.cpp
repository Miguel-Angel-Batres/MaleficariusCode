#include<iostream>
#include"camigas.h"

Perro::Perro(string nom, int edad){
	this->nombre=nom;
	this->edad=edad;
}

Gato::Gato(string nom, int edad){
	this->nombre=nom;
	this->edad=edad;
}

void Gato::setAmigoPerro(Perro *P1){
	this->amigoPerro=P1;
}

void Gato::amigos(){
	if(this->amigoPerro!='\0'){
		//NO podemos acceder a los miembros de la clase Perro
		cout<<this->nombre<<" Es amigo del Perro "<<this->amigoPerro->nombre<<endl;
	}
	else{
		cout<<this->nombre<<" No More Friends :( "<<endl;
	}
}
