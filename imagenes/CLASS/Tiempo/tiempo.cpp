#include "tiempo.h"
#include<iostream>
#include<iomanip>

using namespace std;

tiempo &tiempo::setHora(int hora){
	this->horas=(hora>=0 &&hora<24 ? hora:0);
	return *this;
}

tiempo &tiempo::setMin(int min){
	this->min=(min>=0 &&min<60 ? min:0);
	return *this;
}

tiempo &tiempo::setSec(int sec){
	this->seg=(sec>=0 &&sec<60 ? sec:0);
	return *this;
}

void tiempo::HoraUniversal()const{
	cout<<endl<<"Formato Universal"<<endl;
	cout<<setfill('0')<<setw(2)<<this->horas<<" : "<<setw(2)<<this->min<<" : "<<setw(2)<<this->seg<<endl;
}

void tiempo::HoraStandar()const{
	cout<<endl<<"Formato Estandar"<<endl;
	cout<<setfill('0')<<setw(2)<<((horas==0 || horas==12||horas==24)?12: horas%12)<<" : "<<setw(2)<<this->min<<" : "<<setw(2)<<this->seg<<((horas<12)?"am":"pm")<<endl;
}
