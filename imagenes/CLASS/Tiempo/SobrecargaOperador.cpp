#include<iostream>

using namespace std;

class tiempo{
	private:
		int horas, min;
	public:
		tiempo(){
			this->horas=0;
			this->min=0;
		}
		tiempo(int h, int n){
			this->horas=h;
			this->min=n;
		}	
		tiempo operator +(tiempo);
		void mostrar();
};

tiempo tiempo::operator +(tiempo t){
	cout<<endl<<"Estamos entrado a la sobre carga del operador +"<<endl;
	tiempo aux;
	aux.horas=this->horas + t.horas;
	aux.min=this->min+t.min;
	
	if(aux.min>=60){
		aux.min-=60;
		aux.horas++;
	}
	return aux;
}

void tiempo::mostrar(){
	cout<<horas<<" : "<<min<<endl;
}

int main(){
	tiempo actu1(1,10), actu2(2,55);
	actu1.mostrar();
	actu2.mostrar();
	actu2= actu1+actu2;
	actu2.mostrar();
	(actu1+tiempo(3,14)).mostrar();
	
	return 0;
}
