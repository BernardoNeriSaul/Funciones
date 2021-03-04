#include <iostream>
#include <string.h>
using namespace std;

int fac(int a);

int main() {
	int n;
	cout<<"Este es un programa que calcula el factorial de un numero"<<endl;
	cout<<"Introduce el numero"<<endl;
	cin>>n;
	int fact=fac(n);
	cout<<"El resultado es "<<fact<<endl;
	
	}
	int fac(int a) {
		int i;
		int r=1;
		for(i=1;i<=a; i++) {
			r*=i;
		}
		return r;
	}
