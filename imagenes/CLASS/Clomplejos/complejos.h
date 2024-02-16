#ifndef COMPLEJOS_H
#define COMPLEJOS_H

class complejo{
	private: 
		float imaginario;
		float real ;
		friend complejo suma(complejo &, complejo &);
		friend complejo resta(complejo &, complejo &);
		friend complejo multiplicar(complejo &, complejo &);
		friend complejo multiplicar2(complejo &, float n);
		friend complejo dividir(complejo &, complejo &);
		friend bool equals(complejo &, complejo &);
	public:
		complejo();
		complejo(float imaginario, float real);
		inline void setImaginario(float imaginario);
		inline void setReal(float real);
		inline float getImaginario();
		inline float getReal();
		void toString();
		
};


#endif
