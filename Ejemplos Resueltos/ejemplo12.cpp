#include <iostream>
using namespace std;

int main()
{
	int n;
	
	//pedimos el tamaño del arrray
	cout<<"Tamaño del array"<<endl;
	cin>>n;
	
	//Declaramos el array del tamaño pedido
	int *array=new int[n];
	
	//pedimos una variable para cadad espacio del array
	for(int i=0;i<n;i++)
	{
		cout<<"Valor del array en la posicion "<<i<<":"<<endl;
		cin>>*(array+i);
	}
	
	//imprimimos el array 
	for(int i=0; i<n;i++)
	{
		cout<<"Array["<<i<<"]: "<<*(array+i)<<endl;
	}
	
	//borramos el array
	delete[] array;
	
	return 0;
}
