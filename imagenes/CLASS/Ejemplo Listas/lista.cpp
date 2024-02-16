/*lista.cpp*/
#include"lista.h"
#include<iostream>

using namespace std;


lista::nodo *lista::inicio=0;
lista::nodo *lista::final=0;


lista::nodo::nodo(int dato){
	this->dato=dato;
	this->next=NULL;
}

lista::lista(){
	inicio=final=NULL;
}

void lista::insertar_final(int num){
	nodo *aux;
	aux= new nodo(num);
	if(inicio==NULL){
		inicio=aux;
	}
	else{
		final->next=aux;
	}
	final=aux;
}

void lista::insertar_inicio(int num){
	
	nodo *aux;
	aux = new nodo(num);
	if(inicio==NULL){
		inicio=final=aux;
	}
	else{
		aux->next=inicio;
		inicio=aux;
	}
}


void lista::eliminar_incio(){
	nodo *aux;
	if(inicio==NULL){
		cout<<"Lista vacia nada que eliminar"<<endl;
	}
	else{
		aux=inicio;
		cout<<"Elimanando dato de la lista "<<inicio->dato<<endl;
		if(inicio==NULL){
			inicio=final=NULL;
		}
		else{
			inicio=inicio->next;
		}
	}
	delete aux;
}

void lista::imprimir_lista(){
	nodo *aux=inicio;
	if(inicio==NULL){
		cout<<"Lista vacia nada que mostrar"<<endl;
	}
	else{
		while(aux!=NULL){
			cout<<" ["<<aux->dato<<"] ";
			aux=aux->next;
		}
	}
}

void lista::EliminarFinal(){
	nodo *q=inicio;
	nodo *t;
	if(inicio==NULL){
		cout<<"Lista vacia nada que Eliminar"<<endl;
	}
	else{
		if(inicio==final){
			inicio=final=NULL;
		}
		else{
			while(q->next!=NULL){
				t=q;
				q=q->next;
			}
			cout<<"Elimanando dato de la lista "<<final->dato<<endl;
			t->next=NULL;
			final=t;
			delete q;
		}
	}
}

lista Eliminar_final(lista &l1){
	
	l1.EliminarFinal();
	return l1;
}

void lista::insertar_antes(int num, int ref){
	nodo *q=inicio;
	nodo *r;
	nodo *t;
	bool flag=true;
	if(inicio==NULL){
		cout<<"Lista vacia no se puede insertar ya que no hay referencia"<<endl;
	}
	else{
		while(q->dato!=ref&&flag==true){
			if(q->next!=NULL){
				t=q;
				q=q->next;
			}
			else{
				flag=false;
			}
		}
		if(flag==true){
			r=new nodo(num);
			if(q==inicio){
				r->next=inicio;
				inicio=r;
			}
			else{
				t->next=r;
				r->next=q;
			}	
			cout<<"Dato insertado"<<endl;
		}
		else{
			cout<<"Referencia no encontrada"<<endl;
		}
	}
}

lista InsertarAntes(lista &l1, int num , int ref){
	l1.insertar_antes(num,ref);
	return l1;
}

void lista::insertar_despues(int num, int ref){
	nodo *q=inicio;
	nodo *t;
	bool flag=true;
	if(inicio==NULL){
		cout<<"Lista vacia no se puede insertar ya que no hay referencia"<<endl;
	}
	else{
		while(q->dato!=ref&&flag==true){
			if(q->next!=NULL){
				q=q->next;
			}
			else{
				flag=false;
			}
		}
		if(flag==true){
			t=new nodo(num);
			t->next=q->next;
			q->next=t;
			cout<<"Dato insertado"<<endl;
		}
		else{
			cout<<"Referencia no encontrada"<<endl;
		}
	}
}


lista InsertarDespues(lista &l1, int num , int ref){
	l1.insertar_despues(num,ref);
	return l1;
}

lista EliminarNodoXNodo(lista &l1){
	while(l1.inicio!=NULL){
		l1.eliminar_incio();
	}
	cout<<"Lista eliminada"<<endl;
	return l1;
}
