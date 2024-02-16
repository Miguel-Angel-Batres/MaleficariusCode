#ifndef TIEMPO_H
#define TIEMPO_H

class tiempo{
	
	private:
		int horas, min,seg;
	public:
		/*Cuanto se va a retornar *this-> se utiliza el operador alias en el tipo de retorno de la funcion*/
		tiempo &setHora(int hora);
		tiempo &setMin(int min);
		tiempo &setSec(int sec);//& se hace referencia al valor con *this
		
		/*Los metodos constantes prometen no modificar ningun dato dentro de la clase*/
		void HoraUniversal()const;
		void HoraStandar()const;
};


#endif
