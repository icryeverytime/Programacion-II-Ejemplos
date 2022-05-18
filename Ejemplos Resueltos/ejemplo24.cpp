#include <iostream>
using namespace std;

//se declara las funciones de imprimir,sumar y restar
void imprimir(int **,int,int);
void sumar(int **,int **,int,int);
void restar(int **,int **,int,int);

int main()
{
	//delcaracion de variables
	int col,fila,**matriz1,**matriz2;
	
	//se pide el tamaño de las matrices
	cout<<"El tamaño de las columnas:"<<endl;
	cin>>col;
	cout<<"El tamaño de las filas:"<<endl;
	cin>>fila;
	
	
	//se reserva la memoria de las matrices
	matriz1=new int*[fila];
	matriz2=new int*[fila];
	for(int i=0;i<fila;i++)
	{
		matriz1[i]=new int[col];
		matriz2[i]=new int[col];
	}
	
	//se toman los valores de la primera matriz
	cout<<"Numeros de la primera matriz:"<<endl;
	
	for (int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Numero en posicion ["<<i<<"] ["<<j<<"]:"<<endl;
			cin>>*(*(matriz1+i)+j);
		}
	}
	
	//se toman los valores de la segunda matriz
	cout<<"Numeros de la segunda matriz:"<<endl;
	
	for (int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Numero en posicion ["<<i<<"] ["<<j<<"]:"<<endl;
			cin>>*(*(matriz2+i)+j);
		}
	}
	
	//llamada a funcion de imprimir primera matriz
	cout<<"La primera matriz es:"<<endl;
	imprimir(matriz1,col,fila);
	//llamado a funcion de imprimre segunda matriz
	cout<<"La segunda matriz es:"<<endl;
	imprimir(matriz2,col,fila);
	//llamado a la funcion de sumar
	cout<<"El reultado de las suma de las matrices:"<<endl;
	sumar(matriz1,matriz2,col,fila);
	//llamda a la funcion de restar
	cout<<"El resultado de la resta de las matrices"<<endl;
	restar(matriz1,matriz2,col,fila);
	delete matriz1;
	delete matriz2;
	
	return 0;
}
void imprimir(int **matriz,int col,int fila)
{
	
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<*(*(matriz+i)+j)<<" ";
		}
		cout<<endl;
	}
}
void sumar(int **matriz1,int **matriz2,int col,int fila)
{
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<*(*(matriz1+i)+j)+*(*(matriz2+i)+j)<<" ";
		}
		cout<<endl;
	}
}
void restar(int **matriz1,int **matriz2,int col,int fila)
{
	for(int i=0;i<fila;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<*(*(matriz1+i)+j)-*(*(matriz2+i)+j)<<" ";
		}
		cout<<endl;
	}
}
