#include<iostream>
#include "mayor.h"

using namespace std;


inline int Mayor::mayor(int a, int b){
	cout<<endl<<"El mayor  entre los numeros enteros "<<a<<" y "<< b<<" es: ";
	return a>b ? a:b;
}

inline char Mayor::mayor(char a, char b){
	cout<<endl<<"El mayor  entre los nu caracteres "<<a<<" y "<< b<<" es: ";
	return a>b ? a:b;
}

inline double Mayor::mayor(double a, double b){
	cout<<endl<<"El mayor  entre los numeros reales "<<a<<" y "<< b<<" es: ";
	return a>b ? a:b;
}

inline int Mayor::mayor(int a, int b, int c){
	cout<<endl<<"El mayor  entre los numeros reales "<<a<<" , "<<b<<" y "<<c<<" es: ";
	if(a>b&&a>c){
		return a;
	}
	else{
		if(b>a&&b>c){
			return b;
		}
		else{
			return c;
		}
	}
}

