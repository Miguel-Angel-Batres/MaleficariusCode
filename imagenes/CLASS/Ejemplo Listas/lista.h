/*lista.h*/
#ifndef LISTA_H
#define LISTA_H
#include<iostream>

using namespace std;


class lista{
	public:
		lista();
		void insertar_inicio(int num);
		void insertar_final(int num);
		void insertar_antes(int num, int ref);
		void insertar_despues(int num, int ref);
		void eliminar_incio();
		void EliminarFinal();
		static void imprimir_lista();
		class nodo{
			public:
				int dato;
				nodo *next;
				nodo(int dato);
				
		};//clase anidada
	private: 
		static nodo *inicio;
		static nodo *final;
		friend lista eliminar_final(lista &);
		friend lista InsertarAntes(lista &, int num , int ref);
		friend lista InsertarDespues(lista &, int num , int ref);
		friend lista EliminarNodoXNodo(lista &);
};

#endif
