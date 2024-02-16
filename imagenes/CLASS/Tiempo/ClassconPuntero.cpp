#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

class Numeros{
	private:
		int *x;
		int tam;
	public:
		/*Debemos generar nuestro constructor vacio por el puntero (*)*/
		Numeros(){
			
		}
		Numeros(int tam){
			this->x= new int(tam);
			this->tam=tam;
		}
		void imprimir(){
			cout<<endl<<"Tamaño del vector: "<<this->tam;
			for(int i=0; i<this->tam;i++){
				cout<<this->x[i]<<" ";
			}
		}
		void cambiarValor(int index){
			this->x[index]=647;
		}
		void llenarVec(){
			for(int i=0; i<this->tam;i++){
				this->x[i]=10+rand()%39;
			}
		}
};

int main(){
	srand(time(NULL));
	int tam, index;
	Numeros vecA(10), vecB, vecC(8), vecD; 
	cout<<"Ejemplo..............1"<<endl;
	vecA.llenarVec();
	cout<<"Imprimiemdo vecA"<<endl;
	vecA.imprimir();
	cout<<endl<<"Igualando vecA con vecB"<<endl;
	vecB=vecA;
	cout<<"Imprimiemdo vecB"<<endl;
	vecB.imprimir();
	
	//Aparente mente cada vector es independiente;
	cout<<endl<<"Cambiando valor 8 del vecA por 647"<<endl;
	vecA.cambiarValor(8);
	cout<<"Imprimiemdo vecA"<<endl;
	vecA.imprimir();
	cout<<endl<<"Imprimiemdo vecB"<<endl;
	vecB.imprimir();
	cout<<endl<<"Ejemplo..............2"<<endl;
	cout<<"Checando la asignacion en casacada"<<endl;
	vecD=vecC=vecB;
	cout<<"Imprimiemdo vecD"<<endl;
	vecD.imprimir();
	cout<<endl<<"Imprimiemdo vecC"<<endl;
	vecC.imprimir();
	cout<<endl<<"Imprimiemdo vecB"<<endl;
	vecB.imprimir();
	cout<<endl<<"Reasignado vecC"<<endl;
	vecC.llenarVec();
	cout<<"Imprimiemdo vecD"<<endl;
	vecD.imprimir();
	cout<<endl<<"Imprimiemdo vecC"<<endl;
	vecC.imprimir();
	cout<<endl<<"Imprimiemdo vecB"<<endl;
	vecB.imprimir();
	
	cout<<endl<<"Ejemplo..............2"<<endl;
	cout<<"Realizado la autoasignacion "<<endl;
	vecD=vecD;
	cout<<"Imprimiemdo vecD"<<endl;
	vecD.imprimir();
	
	
	return 0;
}
