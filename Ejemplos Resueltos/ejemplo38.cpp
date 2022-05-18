#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int n=0;
	while(n!=3)
	{
		char datos[50],escribir[50];
		cout<<"1. Leer archivo"<<endl;
		cout<<"2. Escribir archivo"<<endl;
		cout<<"3. Salir"<<endl;
		cin>>n;
		ofstream outfile;
		ifstream infile;
		infile.open("binario.bin",ios::binary | ios::in);
		outfile.open("binario.bin",ios::binary | ios::out);
		switch(n)
		{
			case 1:
				
				while(infile>>datos)
				{
					cout<<datos<<endl;
				}
				break;
			case 2:
				cout<<"Escriba lo que sea al archivo:"<<endl;
				cin>>escribir;
				outfile<<escribir<<endl;
				break;
			case 3:
				break;
		}
	}
}
