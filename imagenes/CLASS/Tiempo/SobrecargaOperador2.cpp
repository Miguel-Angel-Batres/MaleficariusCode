#include<iostream>

using namespace std;

class Coordenada{
	private:
		int x, y;
	public:
		Coordenada(int x=0, int y=0){
			this->x=x;
			this->y=y;
		}
		Coordenada operator +(Coordenada);
		int getX(){
			return this->x;
		}
		int getY(){
			return this->y;
		}
		void mostrarCoordenda();
};

Coordenada Coordenada::operator +(Coordenada obj){
	cout<<"Estoy en la sobrecarga del operador +"<<endl;
	Coordenada aux;
	aux.x=this->x+obj.x;
	aux.y=this->y+obj.y;
	return aux;
}

void Coordenada::mostrarCoordenda(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
	Coordenada obj1(5,7), obj2(9,1), obj3;
	obj1.mostrarCoordenda();
	obj2.mostrarCoordenda();
	/*Es equivalente  a obj1.operator+(obj2)
	de otra forma obj3.operator =(obj1.operator+(obj2))
	este programa no tiene sobrecarga del operador = al menos no implementada por nostros 
	pero se usa la sobrecarga del = lo hace de forma implicita 
	si hubiera puntero necesitariamos sobrecargar al operador =*/
	obj3=obj1+obj2;
	obj3.mostrarCoordenda();
	obj3.operator =(obj1.operator +(obj2));
	
	cout<<"obj3 x="<<obj3.getX()<<"  obj3 y="<<obj3.getY()<<endl;
	cin.get();
	
return 0;
}
