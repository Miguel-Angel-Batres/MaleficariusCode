#include<iostream>
#include "convertir.h"


using namespace std;

Numero::Numero(){
}

Numero::Numero(float num, int numi){
	this->num=num;
	this->numi=numi;
}

void Numero::setnum(float num){
	this->num=num;
}

void Numero::setnumi(int numi){
	this->numi=numi;
}

void Numero::ConvertirBinario(float decimal){
	int resultado, contador=0;
	if(decimal!=0&&contador<10){
		decimal=decimal*2;
		resultado=decimal;
		decimal=decimal-resultado;
		cout<<resultado;
		contador++;
		ConvertirBinario(decimal);
	}
	
	
}

void Numero::ConvertirBinario(int enteros){
	int resultado;
	resultado=enteros%2;
	enteros=enteros/2;
	if(enteros!=0){
		ConvertirBinario(enteros);
	}
	cout<<resultado;
}

