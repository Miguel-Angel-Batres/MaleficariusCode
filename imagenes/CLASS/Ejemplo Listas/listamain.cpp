/*listamain.cpp*/
#include<iostream>
#include"lista.cpp"
#include"lista.h"

using namespace std;

int main(){
	lista mi_lista;
	int opc, num, ref;
	do{
		cout<<endl<<"Listas Enlazadas simples"<<endl;
		cout<<"Inserta al inicio.......1"<<endl;
		cout<<"Inserta al final........2"<<endl;
		cout<<"Inserta al antes de una referenia........3"<<endl;
		cout<<"Inserta al despues de una referenia........4"<<endl;
		cout<<"Eliminar al inicio......5"<<endl;
		cout<<"Eliminar al final......6"<<endl;
		cout<<"Eliminar Lista Nodo por Nodo......7"<<endl;
		cout<<"Imprimir lista..........8"<<endl;
		cout<<"Salir...................9"<<endl;
		cout<<endl<<"Ingrese una opcion: ";
		cin>>opc;
		switch(opc){
			case 1: cout<<"Ingrese el numero para meterlo a la lista(inicio): ";
				cin>>num;
				mi_lista.insertar_inicio(num); break;
			case 2:cout<<"Ingrese el numero para meterlo a la lista(final): ";
				cin>>num;
				mi_lista.insertar_final(num); break;
			case 3:cout<<"Ingrese el numero para meterlo a la lista: ";
				cin>>num;
				cout<<"Dime la referencia para ingresarlo antes de ese: ";
				cin>>ref;
				mi_lista=InsertarAntes(mi_lista,num,ref); break;
			case 4:cout<<"Ingrese el numero para meterlo a la lista: ";
				cin>>num;
				cout<<"Dime la referencia para ingresarlo despues de ese: ";
				cin>>ref;
				mi_lista=InsertarDespues(mi_lista,num,ref); break;	
			case 5:cout<<"Eliminando el primer numero de la lista"<<endl;
				mi_lista.eliminar_incio(); break;
			case 6: cout<<"Eliminando el ultimo de la lista"<<endl;
				mi_lista=Eliminar_final(mi_lista); break;
			case 7:cout<<"Eliminando lista nodo por nodo"<<endl;
				mi_lista=EliminarNodoXNodo(mi_lista); break;
			case 8:cout<<"Imprimiendo lista"<<endl;
				mi_lista.imprimir_lista(); break;
			case 9: cout<<"Fin del programa"; break;
			default: cout<<"opcion ivalida ingrese otra"<<endl; break;
		}
	}while(opc!=9);
	return 0;
}
