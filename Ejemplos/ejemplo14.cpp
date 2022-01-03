#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int n;
	
	cout<<"Ingresa el tamaño del array"<<endl;
	cin>>n;
	
	int *array=new int[n];
	
	srand(time(NULL));
	for(int i=0;i<n;i++)
	{
		*(array+i)=rand()%10+1;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"Array["<<i<<"]: "<<*(array+i)<<endl;
	}
	
	return 0;
}
