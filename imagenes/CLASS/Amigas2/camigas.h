#ifndef CAMIGAS_H
#define CAMIGAS_H
#include<string>
using namespace std;

class Gato;

class Perro{
	private :
		string nombre;
		int edad;
	public: 
		friend class Gato;
		Perro(string, int);
		
};


class Gato{
	private :
		string nombre;
		int edad;
		Perro *amigoPerro;
	public: 
		Gato(string, int);
		void setAmigoPerro(Perro*);
		void amigos();
};



#endif
