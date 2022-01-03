#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int n=1;
	string linea;
	
	while(n!=3)
	{
		cout<<"1.-Insertar"<<endl;
		cout<<"2.-Leer"<<endl;
		cout<<"3.-Salir"<<endl;
		cin>>n;
		ofstream outFile("frutas.txt",ios::app);
		ifstream inFile("frutas.txt");
		if(inFile.fail())
		{
			cout<<"Error al abrir el archivo"<<endl;
			exit(1);
		}
		switch(n)
		{
			case 1:
				cout<<"Ingresa fruta a agregar:"<<endl;
				cin>>linea;
				outFile<<linea<<endl;
				
				break;
			case 2:	
				while(inFile>>linea)
				{
					cout<<linea<<endl;	
				}
			break;
			case 3:
				break;	
		}
		outFile.close();
		inFile.close();
	}
	
	
	return 0;
}
