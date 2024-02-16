/*Alfredo Chinchillas 
crear auto.h cabezara*/
#include <string>
#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H

using namespace std;

class automovil{
	private://atributos
		string modelo; //std::string modelo;
		string marca;
		double  precio;
	public://metodos
		automovil();
		void setModelo(string modelo);
		string getModelo();
		void setMarca(string marca);
		string getMarca();
		void setPrecio(double precio);
		double getPrecio();
		void crearauto(string marca, string modelo, double precio);
};

#endif
