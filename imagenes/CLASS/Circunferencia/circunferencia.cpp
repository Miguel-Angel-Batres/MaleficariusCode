/*ALfredo chinchillaS DUardo
circunferencia.cpp*/
#include"circunferencia.h"

//implementar los constructores
float circunferencia::calcularArea(){
	float area;
	area=3.14159*this->radio*this->radio;
	return area;
}

float circunferencia::getRadio(){
	return this->radio;
}

void circunferencia::setRadio(float radio){
	this->radio=radio;
}
