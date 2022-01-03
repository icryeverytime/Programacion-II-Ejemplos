#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string linea;
	ofstream outFile;
	outFile.open("prueba.txt");
	
	cout<<"Ingresa lo que se va escribir en el archivo:"<<endl;
	cin>>linea;
	outFile<<linea;
	outFile.close();
	
	return 0;
}
