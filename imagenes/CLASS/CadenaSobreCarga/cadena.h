#ifndef CADENA_H
#define CADENA_H
using namespace std;


class cadena{
	private:
		char *cad;
	public:
		cadena(char *cad);
		cadena ();
		cadena operator =(cadena obj);
		cadena operator +(cadena obj);
		bool operator !=(cadena obj);
		cadena operator +=(cadena obj);
		char *getCad();
		
};

#endif
