#include <iostream>
using namespace std;


void intercambio(int *,int *);
int main()
{
	int num1,num2;
	
	cout<<"Valor del primer numero:"<<endl;
	cin>>num1;
	
	cout<<"Valor del segundo numero:"<<endl;
	cin>>num2;
	
	cout<<endl<<"Valor del primer numero: "<<num1<<endl;
	
	cout<<"Valor del segundo numero: "<<num2<<endl<<endl;
	
	intercambio(&num1,&num2);
	
	cout<<"Intercambio realizado"<<endl<<endl;
	cout<<"Valor del primer numero: "<<num1<<endl;
	
	cout<<"Valor del segundo numero: "<<num2<<endl;;
}

void intercambio(int *dirnum1,int *dirnum2)
{
	int aux;
	
	aux=*dirnum1;
	*dirnum1=*dirnum2;
	*dirnum2=aux;
	
}
