#include "convertir.h"
#include "convertir.cpp"
#include<iostream>

using namespace std;

int main(){
	float numero;
	int parteEntera;
	float parteDecimal;
	cout<<"Ingrese un numero para convertirlo a Binario: ";
	cin>>numero;
	parteEntera=numero;
	parteDecimal=numero-parteEntera;
	Numero num(parteDecimal,parteEntera);
	num.ConvertirBinario(parteEntera);
	cout<<".";
	num.ConvertirBinario(parteDecimal);
	
	return 0;
}
