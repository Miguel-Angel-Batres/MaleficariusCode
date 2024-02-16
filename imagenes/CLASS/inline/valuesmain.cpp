#include<iostream>
#include "values.h"

using namespace std;

	//inicializacion de variables miembro y vector static const
	int values::size=100; //notar que se omite el modificador static
	
	const int values::vector[4]={10,99,76,01};
	
	int values::tam=5;

int main(){
	cout<<endl<<"static const int SIZE = "<<values::SIZE;
	cout<<endl<<"static int size = "<<values::size;
	cout<<endl<<"static  int tam = "<<values::get_size();
	cout<<endl;
	for(int i=0; i<4;i++){
		cout<<values::vector[i]<<" ; ";
	}
	
return 0; 
}
