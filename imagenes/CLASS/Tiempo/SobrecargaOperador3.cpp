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
		bool operator ==(Coordenada);
		bool operator !=(Coordenada);
		int getX(){
			return this->x;
		}
		int getY(){
			return this->y;
		}
		void mostrarCoordenda();
};

bool Coordenada::operator ==(Coordenada obj){
	cout<<"Entrando a la sobrecarga del operador =="<<endl;
	Coordenada aux;
	if(this->x==obj.x && this->y==obj.y){
		return true;
	}
	else{
		return false;
	}
}
bool Coordenada::operator !=(Coordenada obj){
	cout<<"Entrando a la sobrecarga del operador !="<<endl;
	Coordenada aux;
	if(this->x!=obj.x || this->y!=obj.y){
		return true;
	}
	else{
		return false;
		//return !(this==obj);
		//return !(operator==(obj));
		//return !(this->operator==(obj));
		//!((*this).operator==obj));
	}
}

void Coordenada::mostrarCoordenda(){
	cout<<"("<<x<<","<<y<<")"<<endl;
}

int main(){
	Coordenada obj1(5,7), obj2(5,1), obj3(9,1);
	if(obj1==obj2){
		cout<<"coordenadas igules en ambos objetos"<<endl;
	}
	else{
		cout<<"coordenadas distintas en ambos objetos"<<endl;
	}
	
	if(obj1!=obj2){
		cout<<"coordenadas distintas en ambos objetos"<<endl;
	}
	else{
		cout<<"coordenadas igules en ambos objetos"<<endl;
	}
	
	if(obj2==obj3){
		cout<<"coordenadas igules en ambos objetos"<<endl;
	}
	else{
		cout<<"coordenadas distintas en ambos objetos"<<endl;
	}
	
	return 0;
}
