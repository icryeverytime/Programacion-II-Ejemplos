#include <iostream>
using namespace std;
struct Ecuacion{
	float real;
	float imaginario;
};
int main()
{
	int n=0;
	struct Ecuacion uno;
	struct Ecuacion dos;
	struct Ecuacion res;
	cout<<"Datos de primera ecuacion:"<<endl;
	cout<<"Numero real:"<<endl;
	cin>>uno.real;
	cout<<"Numero imaginario:"<<endl;
	cin>>uno.imaginario;
	
	cout<<endl<<"Datos de segunda ecuacion:"<<endl;
	cout<<"Numero real:"<<endl;
	cin>>dos.real;
	cout<<"Numero imaginario:"<<endl;
	cin>>dos.imaginario;
	
	while(n!=5)
	{
		cout<<"1.-Sumar"<<endl;
		cout<<"2.-Restar"<<endl;
		cout<<"3.-Multiplicar"<<endl;
		cout<<"4.-Dividir"<<endl;
		cout<<"5.Salir"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				res.real=uno.real+dos.real;
				res.imaginario=uno.imaginario+dos.imaginario;
				cout<<"Ecuacion resultante:"<<endl;
				if(res.imaginario>=0)
				{
					cout<<res.real<<"+"<<res.imaginario<<"i"<<endl;
				}
				else{
					cout<<res.real<<res.imaginario<<"i"<<endl;
				}
				break;
			case 2:
				res.real=uno.real-dos.real;
				res.imaginario=uno.imaginario-dos.imaginario;
				cout<<"Ecuacion resultante"<<endl;
				if(res.imaginario>=0)
				{
					cout<<res.real<<"+"<<res.imaginario<<"i"<<endl;
				}
				else{
					cout<<res.real<<res.imaginario<<"i"<<endl;
				}
				break;
			case 3:
				res.real=uno.real*dos.real;
				res.imaginario=uno.imaginario*dos.imaginario;
				cout<<"Ecuacion resultante"<<endl;
				if(res.imaginario>=0)
				{
					cout<<res.real<<"+"<<res.imaginario<<"i"<<endl;
				}
				else{
					cout<<res.real<<res.imaginario<<"i"<<endl;
				} 
				break;
			case 4:
				res.real=uno.real/dos.real;
				res.imaginario=uno.imaginario/dos.imaginario;
				cout<<"Ecuacion resultante"<<endl;
				if(res.imaginario>=0)
				{
					cout<<res.real<<"+"<<res.imaginario<<"i"<<endl;
				}
				else{
					cout<<res.real<<res.imaginario<<"i"<<endl;
				} 
				break;
			case 5:
				cout<<"Adios"<<endl;
				break;
			default:
				cout<<"No existe esa opcion"<<endl;
		}
	}
}
