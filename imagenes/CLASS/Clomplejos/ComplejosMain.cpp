#include"complejos.h"
#include"complejos.cpp"
#include<iostream>

using namespace std;

int main(){
	complejo c1(1.0, 1.0);
	complejo c2(2.0, 2.0);
	complejo c3;
	bool iguales;
	c3=suma(c1,c2);
	c1.toString(); cout<<" + "; c2.toString(); cout<<" = "; c3.toString(); cout<<endl;
	c3=resta(c1,c2);
	c1.toString(); cout<<" - "; c2.toString(); cout<<" = "; c3.toString(); cout<<endl;
	c3=multiplicar(c1,c2);
	c1.toString(); cout<<" * "; c2.toString(); cout<<" = "; c3.toString(); cout<<endl;
	c3=multiplicar2(c1,3.5);
	c1.toString(); cout<<" * "; cout<<"3.5"; cout<<" = "; c3.toString(); cout<<endl;
	c3=dividir(c1,c2);
	c1.toString(); cout<<" / "; c2.toString(); cout<<" = "; c3.toString(); cout<<endl;
	iguales=equals(c1,c2);
	if(iguales){
		c1.toString(); cout<<"es igual a"; c2.toString(); cout<<endl;
	}
	else{
		c1.toString(); cout<<"es distinto de"; c2.toString(); cout<<endl;
	}
	return 0;
}
