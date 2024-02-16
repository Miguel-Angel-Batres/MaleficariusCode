//Reglas yuso de atributo y metodos static
#include<iostream>
using namespace std;

/*Una variable y/o constatnte estatica de una clase es un dato comun a todas
a todas las instancias que se hagan de esa clase es decir a este tipo de miembros NO FORMANAN parte de la instancia*/

/*La manera mas correcta de llamar a los miembros estaticos de una clase dentro de la clase o FUERA de ella (main)
es utilizando el operador de alcance :: Ejemplo:: numEjemplo=8;*/

class Ejemplo{
	private:
		static int numEjemplo; //Contador de instancias no es un const (miembro static)
		int num;
	public:
		Ejemplo(){
			Ejemplo::numEjemplo= Ejemplo::numEjemplo+1;//cada que se crea una instancia se incrementa 
			//++numEjemplo esto funciona dentro de la clase
		}
		static int getNumEjemplo(){
			return Ejemplo::numEjemplo;//No funciona this->con miembros static
		}
		//hay una restriccion importante que los metodos static no pueden utilizar atributis ni metodos de instancia
		//solo a los atributos y metodos que tambien son static
		static void pruebaA(){
			cout<<endl<<"Soy el metodo static!!"<<endl;
			cout<<getNumEjemplo();
			numEjemplo=0;
		}
		
		void pruebaB(){
			cout<<getNumEjemplo();
			numEjemplo=0;
			num=9;
			pruebaB();
		}
};


int Ejemplo::numEjemplo=0; //inicializar un atributo static

int main(){
	Ejemplo e1,e2,e3,e4;
	cout<<"El total de instancias creadas son: "<<Ejemplo::getNumEjemplo();
	Ejemplo::pruebaA();//no se puede pruebaA();
	
		
}
