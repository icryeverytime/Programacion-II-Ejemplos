#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string linea;
	ifstream inFile;
	inFile.open("datos.txt");
	
	if(inFile.fail())
	{
		cout<<"Error al abrir el archivo"<<endl;
		exit(1);
	}
	
	cout<<"Datos en el archivo datos.txt:"<<endl;
	while(!inFile.eof())
	{
		inFile>>linea;
		cout<<linea<<endl;
	}
	inFile.close();
	return 0;
}
