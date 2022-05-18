#include <iostream>
using namespace std;

int main()
{
	int x,y;
	
	cout<<"Introduzca el primer numero"<<endl;
	cin>>x;
	cout<<"Introduzca el segundo numero"<<endl;
	cin>>y;
	
	cout<<"Direccion del primer numero:"<<&x<<endl;
	cout<<"Valor del primer numero:"<<x<<endl;
	
	cout<<"Direccion del segundo numero:"<<&y<<endl;
	cout<<"Valor del segundo numero:"<<y<<endl;
	
	return 0;
}
