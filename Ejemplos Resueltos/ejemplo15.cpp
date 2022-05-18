#include <iostream>
using namespace std;

int main()
{
	int n,m,**matriz;
	
	
	cout<<"Tamaño de las filas:"<<endl;
	cin>>n;
	
	cout<<"Tamaño de las columnas:"<<endl;
	cin>>m;
	
	matriz=new int*[n];
	
	for(int i=0;i<n;i++)
	{
		matriz[i]=new int[m];
	}
	
	cout<<"Ingresa los datos de la matriz";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"Posicion ["<<i+1<<"]["<<j+1<<"]:"<<endl;
			cin>>*(*(matriz+i)+j);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<"Posicion ["<<i+1<<"]["<<j+1<<"]: "<<*(*(matriz+i)+j)<<endl;
		}
	}
	
	return 0;
}
