#include"complejos.h"
#include<math.h>
#include<iostream>

using namespace std;

complejo::complejo(){
	
}

complejo::complejo(float imaginario, float real){
	this->imaginario=imaginario;
	this->real=real;
}

inline void complejo::setImaginario(float imaginario){
	this->imaginario=imaginario;
}

inline void complejo::setReal(float real){
	this->real=real;
}

inline float complejo::getImaginario(){
	return this->imaginario;
}
inline float complejo::getReal(){
	return this->real;
}
void complejo::toString(){
	cout<<"("<<this->real<<","<<this->imaginario<<")";
}

complejo suma(complejo &obj1, complejo &obj2){
	complejo res;
	res.real=obj1.real+obj2.real;
	res.imaginario=obj1.imaginario+obj2.imaginario;
	return res;
} 

complejo resta(complejo &obj1, complejo &obj2){
	complejo res;
	res.real=obj1.real-obj2.real;
	res.imaginario=obj1.imaginario-obj2.imaginario;
	return res;
}

complejo multiplicar(complejo &obj1, complejo &obj2){
	complejo res;
	res.real=obj1.real*obj2.real-obj1.imaginario*obj2.imaginario;
	res.imaginario=obj1.real*obj2.imaginario+obj1.imaginario*obj2.real;
	return res;
}

complejo multiplicar2(complejo &obj1, float n){
	complejo res;
	res.real=obj1.real*n;
	res.imaginario=obj1.imaginario*n;
	return res;
}

complejo dividir(complejo &obj1, complejo &obj2){
	complejo res;
	res.real=((obj1.real*obj2.real+obj1.imaginario*obj2.imaginario)/(pow(obj2.real,2)+pow(obj2.imaginario,2)));
	res.imaginario=((obj1.imaginario*obj2.real-obj1.real*obj2.imaginario)/(pow(obj2.real,2)+pow(obj2.imaginario,2)));
	return res;
}

bool equals(complejo &obj1, complejo &obj2){
	if(obj1.real==obj2.real){
		if(obj1.imaginario==obj2.imaginario){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
