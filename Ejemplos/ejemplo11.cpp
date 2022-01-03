#include <iostream>
using namespace std;

int main()
{
		int *p=new int[9];
		
		for(int i=0;i<=9;i++)
		{
			cout<<"Ingresa un numero para la posicion "<<i+1<<":"<<endl;
			cin>>p[i];
		}
		
		for(int i=0;i<=9;i++)
		{
			cout<<"Valor en la posicion "<<i+1<<": "<<p[i]<<endl;
			cout<<"Direccion de la posicion "<<i+1<<": "<<&p[i]<<endl<<endl;
		}
		
		delete p;
		
		return 0;
}
