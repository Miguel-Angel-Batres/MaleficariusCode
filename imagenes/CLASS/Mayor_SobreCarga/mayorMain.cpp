#include<iostream>
#include "mayor.h"
#include "mayor.cpp"

using namespace std;

int main(){
	Mayor big;
	cout<<endl<<big.mayor(7,8);
	cout<<endl<<big.mayor(1,100,56);
	cout<<endl<<big.mayor('C','t');
	cout<<endl<<big.mayor(6.78, 9.345);
	return 0;
}

