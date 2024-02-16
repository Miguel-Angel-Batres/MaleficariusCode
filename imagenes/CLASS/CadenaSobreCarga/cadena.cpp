#include<iostream>
#include"cadena.h"
#include<string.h>

using namespace std;

cadena::cadena(){
	
}

cadena::cadena(char *cad){
	this->cad=new char[strlen(cad)];
	strcpy(this->cad,cad);
}

char *cadena::getCad(){
	return this->cad;
}

cadena cadena::operator =(cadena obj){
	cadena aux;
	this->cad=obj.cad;
	return aux;
}

cadena cadena::operator +(cadena obj){
	cadena aux;
	char *cadaux=new char[strlen(obj.cad)];
	aux.cad=strcpy(cadaux,this->cad);
	aux.cad=strcat(cadaux," ");
	aux.cad=strcat(cadaux,obj.cad);
	return aux;
}

bool cadena::operator !=(cadena obj){
	cadena aux;
	if(strcmp(this->cad,obj.cad)!=0){
		return true;
	}
	else{
		return false;
	}
}

cadena cadena::operator +=(cadena obj){
	cadena aux;
	aux.cad=strcat(this->cad," ");
	aux.cad=strcat(this->cad,obj.cad);
	return aux;
}
