#include<iostream>
void fun(int n){
	if(n==0){
		return;
	}
	std::cout<<n;
	n--;
	fun(n);
	n++;
}

int main(){
	fun(6);
}

