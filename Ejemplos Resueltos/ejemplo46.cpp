#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Numero{
	private:
		int array[10];
	public:
		Numero()
		{
			for(int i=0;i<10;i++)
			{
				array[i]=rand()%99+1;
			}
		}
		int alto()
		{
			int aux=0;
			for(int i=0;i<10;i++)
			{
				if(array[i]>aux)
				{
					aux=array[i];
				}
			}
			return aux;
		}
		int bajo()
		{
			int aux=1000;
			for(int i=0;i<10;i++)
			{
				if(array[i]<aux)
				{
					aux=array[i];
				}
			}
			return aux;
		}
		int total()
		{
			int aux=0;
			for(int i=0;i<10;i++)
			{
				aux+=array[i];
			}
			return aux;
		}
		void comparar(Numero num)
		{
			if(this->alto()>num.alto())
			{
				cout<<"El numero mas alto es "<<this->alto()<<" del primer objeto"<<endl;
			}
			else if(this->alto()<num.alto())
			{
				cout<<"El numero mas alto es "<<num.alto()<<" del segundo objeto"<<endl;
			}
			else
			{
				cout<<"El numero mas alto es "<<num.alto()<<" de ambos objetos"<<endl;
			}
		}
		void compararb(Numero num)
		{
			if(this->bajo()<num.alto())
			{
				cout<<"El numero mas bajo es "<<this->bajo()<<" del primer objeto"<<endl;
			}
			else if(this->bajo()>num.alto())
			{
				cout<<"El numero mas bajo es "<<num.alto()<<" del segundo objeto"<<endl;
			}
			else{
				cout<<"El numero mas bajo es "<<this->bajo()<<" de ambos objetos"<<endl;
			}
		}
		int suma(Numero num)
		{
			return this->total()+num.total();	
		}
		int resta(Numero num)
		{
			return this->total()-num.total();
		}
};
int main()
{
	int su,res;
	srand(time(NULL));
	Numero num1;
	Numero num2;
	
	num1.comparar(num2);
	num1.compararb(num2);
	
	su=num1.suma(num2);
	cout<<"Suma de ambos array: "<<su<<endl;
	
	
	res=num1.resta(num2);
	cout<<"Resta del primer array contra el segundo: "<<res<<endl;
}
