//inline sherdder.h
#ifndef SHERDDER_H
#define SHERDDER_H
#include<iostream>
using namespace std;

class prueba{
	public:
		prueba(int num);
		~prueba();//destructor
	private:
		int x;
};
//constructor
prueba::prueba(int num){
	x=num;
	cout<<endl<<"Se esta ejecutando el constructor del objeto "<<this->x<<" de la clase prueba"<<endl;
}
prueba::~prueba(){
	cout<<endl<<"Se esta ejecutando el destructor del objeto "<<this->x<<" de la clase prueba"<<endl;
}

#endif
