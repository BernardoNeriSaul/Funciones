#include <iostream>
#include <string.h>
using namespace std;
using std::cout;
using std::cin;
using std::string;
using std::endl;

int division(int a, int b);
int max(int c, int d);
int m(int e, int f);

int main() {
	int n,n1,n2,n3;
	cout<<("Elige la opcion que quieraas")<<endl;
	cout<<("Escribe 1 para division")<<endl;
	cout<<("Escribe 2 determinar un maximo de dos valores")<<endl;
	cout<<("Escribe 3 determinar un maximo de tres valores")<<endl;
	cin>>n;

	switch(n) {
		case 1:
			cout<<"Selecciono la opcion 1"<<endl;
			cout<<"Introduce el dividendo "<<endl;
			cin>> n1;
			cout<<"Introduce el divisor "<<endl;
			cin>>n2;
			division (n1,n2);break;
		case 2:
			cout<<"Selecciono la opcion 2"<<endl;
			cout<<"Introduce el primer valor"<<endl;
			cin>> n1;
			cout<<"Introduce el segundo"<<endl;
			cin>>n2;
			max(n1,n2);break;
		case 3:
			cout<<"Selecciono la opcion 3"<<endl;
			cout<<"Introduce el primer valor"<<endl;
			cin>> n1;
			cout<<"Introduce el segundo"<<endl;
			cin>>n2;
			cout<<"Introduce el segundo valor"<<endl;
			cin>> n3;
			int ma=m(m(n1,n2),n3);	
	}return 0;
	}
	int m(int e,int f) {
		int c;
		if (e>f) {
			return e;
		} else {
			return f;
		}
	}

	int max (int c, int d) {
		if(c>d) {
			cout<<c<<" es mayor a "<<d<<endl;
		} else if (c<d) {
			cout<<d<<" es mayor a "<<c<<endl;
		} else
			cout<<"Error"<<endl;

	}
	int division (int a, int b) {
		float c= (float)a/b;
		cout<<"El resultado de dividir "<<a<<" entre "<<b<<
		    " es igual a "<< c<<endl;
	}