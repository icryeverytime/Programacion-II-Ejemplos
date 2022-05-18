#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	int fila,col,**matriz1,**matriz2;
	
	cout<<"Tamaño de las filas:"<<endl;
	cin>>fila;
	
	cout<<"Tamaño de las columnas:"<<endl;
	cin>>col;
	
	matriz1=new int*[fila];
	for(int i=0;i<fila;i++)
	{
		matriz1[i]=new int[col];
	}
	
	matriz2=new int*[fila];
	for(int i=0;i<fila;i++)
	{
		matriz2[i]=new int[col];
	}
	
	cout<<"Ingresa los datos de la matriz:"<<endl;
	
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Posicion["<<i<<"]["<<j<<"]:"<<endl;
			cin>>*(*(matriz1+i)+j);
		}
	}
	
	srand(time(NULL));
	
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			*(*(matriz2+i)+j)=rand()%20+1;
		}
	}
	
	cout<<"Primera matriz:"<<endl;
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<*(*(matriz1+i)+j)<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Segunda matriz:"<<endl;
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<*(*(matriz2+i)+j)<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Suma de las matrices:"<<endl;
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<*(*(matriz2+i)+j)+*(*(matriz1+i)+j)<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}
