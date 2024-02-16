#ifndef AMIGA_H
#define AMIGA_H
#include<iostream>
using namespace std;

class Numeros{
	private:
		int a;
		int b;
		friend Numeros Suma_Amiga(Numeros &, Numeros &);
		void metodo_Privado(){
			cout<<endl<<"Metodo privado"<<endl;
		}
	public:
		void metodo_Publico();
		Numeros();
		Numeros(int a, int b);
		inline void setA(int a);
		inline void setB(int b);
		inline int getA();
		inline int getB();
		void mostrar();
		
};


#endif
