/*El programa nos regla un constructor vacio, un constructor de copia y una sobreccarba de asignacion sin tener que crearlos nostros
siempre y cuando no tengamos atributos dinamicos "*"      */
#include<iostream>
using namespace std;
class Coordenada{
	private:
		int x, y;
	public:
		/*Coordenada(int x=0, int y=0){
			this->x=x;
			this->y=y;
		}*/
		//Coordenada operator +(Coordenada);
		int getX(){
			return this->x;
		}
		int getY(){
			return this->y;
		}
		void mostrarCoordenda();
		void setX(int x){
			this->x=x;
		}
		void setY(int y){
			this->y=y;
		}
};

void Coordenada::mostrarCoordenda(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
	//Vamos a ver el uso del operador impilicito =
	cout<<endl<<"Ejemplo 1.............";
	cout<<endl<<"Coordenada obj1,obj1.setX(3); obj1.setY(5); Coorderna fulana = obj1";
	Coordenada obj1, fulana;
	obj1.setX(3);
	obj1.setY(5);
	fulana=obj1;//fulana.operator=(obj1);
	cout<<endl<<"Direcciones de los objetos creados";
	cout<<endl<<&fulana<<" direccion de fulana "<<&obj1<<" direccion de obj1"<<endl;
	cout<<fulana.getX()<<","<<fulana.getY()<<" valores de fulana apartir de la spbrecarga del operador ="<<endl;
	obj1.mostrarCoordenda();
	cout<<endl<<"Ejemplo 2.............";
	Coordenada obj2, obj3;
	cout<<endl<<&obj2<<" direccion de obj2 "<<&obj3<<" direccion de obj3"<<endl;
	obj2.setX(1);
	obj2.setY(2);
	obj3.setX(3);
	obj3.setY(4);
	cout<<endl<<obj2.getX()<<" valor x de obj2"<<endl<<obj2.getY()<<" valor y de obj2"<<endl;
	cout<<endl<<obj3.getX()<<" valor x de obj3"<<endl<<obj3.getY()<<" valor y de obj3"<<endl;
	cout<<endl<<"Ejemplo 3.............";
	//Asignacion sencilla
	Coordenada obj4, obj5;
	obj4=obj2;
	cout<<endl<<"Direcciones despues de la asignacion de obj4=obj2"<<&obj2<<" direccion de obj2 "<<&obj4<<" direccion de obj4"<<endl;
	cout<<obj2.getX()<<" "<<obj2.getY()<<" obj2"<<endl;
	cout<<obj4.getX()<<" "<<obj4.getY()<<" obj4"<<endl;
	cout<<endl<<"Ejemplo 4.............";
	cout<<endl<<"Asignacion en cascada uso del operador = implicitata";
	
	obj5=obj4=obj2=obj1;
	cout<<endl<<obj5.getX()<<" valor x de obj5"<<endl<<obj5.getY()<<" valor y de obj5"<<endl;
	cout<<endl<<obj4.getX()<<" valor x de obj4"<<endl<<obj4.getY()<<" valor y de obj4"<<endl;
	cout<<endl<<obj2.getX()<<" valor x de obj2"<<endl<<obj2.getY()<<" valor y de obj2"<<endl;
	cout<<endl<<obj1.getX()<<" valor x de obj1"<<endl<<obj1.getY()<<" valor y de obj1"<<endl;
	
	cout<<endl<<"Ejemplo 5.............";
	cout<<endl<<"Constructor copia implicito"<<endl;
	Coordenada miobj(obj2);
	cout<<endl<<miobj.getX()<<" valor x de miobj"<<endl<<miobj.getY()<<" valor y de miobj"<<endl;
	
	
	return 0;
}
