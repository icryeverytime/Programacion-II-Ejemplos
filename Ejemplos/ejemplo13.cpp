#include <iostream>
using namespace std;

int main()
{
	int n,aux=0;
	//pedimos el tama�o del array
	cout<<"Tama�o del array:"<<endl;
	cin>>n;
	//creamos el array del tama�o
	int *array=new int[n];
	//capturamos un valar para cada espacio del array
	for(int i=0;i<n;i++)
	{
		cout<<"Valor del array en la posicion "<<i<<":"<<endl;
		cin>>*(array+i);
	}
	
	//hacemos la comparacion para ver 
	for(int i=0;i<n;i++)
	{
		if(aux<*(array+i))
		{
			aux=*(array+i);
		}
	}
	
	//imprimimos el resultado	
	cout<<"El valor mas grande del array fue: "<<aux;
	
	delete[] array;
	
	return 0;
	
}
