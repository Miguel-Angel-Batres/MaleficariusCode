#ifndef VALUES_H
#define VALUES_H

 class values{
 	private:
 		static int tam;
 	public:
 		//static const pueden ser inicializadas en el mismo sitio de la declaracion 
 		static const int SIZE=4;
 		//las variables static se inicilizan fuera de la classes;
 		static int size;
 		//los vectores static const se inicializan fuera de la classe
 		static const int vector[4];
 		
 		static int get_size(){
 			return values::tam;
		 }
 };


#endif
