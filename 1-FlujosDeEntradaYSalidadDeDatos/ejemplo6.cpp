#include <iostream>
using namespace std;

int main()
{
	int i;
	
	cout<<"Introduzca un numero:"<<endl;
	//recibe lo que es introducido por el usuario
	while(!(cin>>i)){
		//explicamos el error
		cout<<"Error: por favor introduzca un numero:"<<endl;
		//borramos lo que fue introducido
		cin.clear();
		//descartamos lo que fue introducido
		cin.ignore(123,'\n');
	}
	cout<<"Numero es: "<<i;
	
	return 0;
}
