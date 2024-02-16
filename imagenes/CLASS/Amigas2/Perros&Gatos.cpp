#include<iostream>
#include"camigas.h"
#include"camigas.cpp"

int main(){
	Perro perro1("Princesa No muerde",7);
	Gato gato1("Galleta", 3);
	Perro Perro2("Bolo",14);
	Gato gato2("Santiago Tanenbaum",19);
	
	gato1.setAmigoPerro(&perro1);
	gato1.amigos();
	gato2.amigos();
	getchar();
	return 0;
}
