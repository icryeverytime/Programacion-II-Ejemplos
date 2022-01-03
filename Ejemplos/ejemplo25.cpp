#include <iostream>
using namespace std;

//se declara las funciones de imprimir,sumar y restar
void imprimir(int **,int,int);
void sumar(int **,int **,int,int);
void restar(int **,int **,int,int);
void multiplicar(int **,int **,int,int,int,int);
int main()
{
	//delcaracion de variables
	int col1,fila1,col2,fila2,**matriz1,**matriz2;
	
	//se pide el tamaño de la primera matriz
	cout<<"Valores de la primera matriz"<<endl;
	cout<<"El tamaño de las columnas:"<<endl;
	cin>>col1;
	cout<<"El tamaño de las filas:"<<endl;
	cin>>fila1;
	
	//se pide el tamaño de la segunda matriz
	cout<<"Valores de la primera matriz"<<endl;
	cout<<"El tamaño de las columnas:"<<endl;
	cin>>col2;
	cout<<"El tamaño de las filas:"<<endl;
	cin>>fila2;
	
	
	//se reserva la memoria de las matrices
	matriz1=new int*[fila1];
	matriz2=new int*[fila2];
	for(int i=0;i<fila1;i++)
	{
		matriz1[i]=new int[col1];;
	}
	
	for(int i=0;i<fila2;i++)
	{
		matriz2[i]=new int[col2];
	}
	//se toman los valores de la primera matriz
	cout<<"Numeros de la primera matriz:"<<endl;
	
	for (int i=0;i<fila1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			cout<<"Numero en posicion ["<<i<<"] ["<<j<<"]:"<<endl;
			cin>>*(*(matriz1+i)+j);
		}
	}
	
	//se toman los valores de la segunda matriz
	cout<<"Numeros de la segunda matriz:"<<endl;
	
	for (int i=0;i<fila2;i++)
	{
		for(int j=0;j<col2;j++)
		{
			cout<<"Numero en posicion ["<<i<<"] ["<<j<<"]:"<<endl;
			cin>>*(*(matriz2+i)+j);
		}
	}
	
	//llamada a funcion de imprimir primera matriz
	cout<<"La primera matriz es:"<<endl;
	imprimir(matriz1,col1,fila1);
	//llamado a funcion de imprimre segunda matriz
	cout<<"La segunda matriz es:"<<endl;
	imprimir(matriz2,col2,fila2);
	
	//validamos que son de las mismas dimensiones
	if(col1==col2 && fila1==fila2)
	{
		//llamado a la funcion de sumar
		cout<<"El reultado de las suma de las matrices:"<<endl;
		sumar(matriz1,matriz2,col1,fila1);
		//llamda a la funcion de restar
		cout<<"El resultado de la resta de las matrices"<<endl;
		restar(matriz1,matriz2,col1,fila1);
	}
	
	//multiplicacion de matrices
	if(col1==fila2 && col2==fila1)
	{
		cout<<"Resultado de la multiplicacion"<<endl;
		multiplicar(matriz1,matriz2,col1,col2,fila1,fila2);
	}
	
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
void multiplicar(int **matriz1,int **matriz2,int col1,int col2,int fila1, int fila2)
{
	int **mult;
	mult=new int*[fila1];
	for(int i=0;i<fila1;i++)
	{
		mult[i]=new int[col2];;
	}
	for(int i=0;i<fila1;i++)
	{
		for(int j=0;j<col2;j++)
		{
			*(*(mult+i)+j)=0;
		}
	}
	for(int i=0;i<fila1;i++)
	{
		for(int j=0;j<col2;j++)
		{
			for(int k=0;k<col1;k++)
			{
				mult[i][j]+=(*(*(matriz1+i)+k))*(*(*(matriz2+k)+j));
			}
		}
	}
	imprimir(mult,col2,fila1);
}

