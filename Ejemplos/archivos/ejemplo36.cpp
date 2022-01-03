#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Jugadores{
	char id[10];
	char nombre[30];
	float salario;
};
int main()
{
	Jugadores insertar,leer;
	int n=0,i;
	float aux;
	string linea;
	while(n!=5)
	{
		cout<<"1. Insertar"<<endl;
		cout<<"2. Leer"<<endl;
		cout<<"3. Promedio"<<endl;
		cout<<"4. Total"<<endl;
		cout<<"5. Salir"<<endl;
		cin>>n;
		ofstream outFile("jugadores.txt",ios::app);
		ifstream inFile("jugadores.txt");
		if(inFile.fail())
		{
			cout<<"Error al abrir el archivo"<<endl;
			exit(1);
		}	
		switch(n)
		{
			case 1:
				system("cls");
				cout<<"Id:"<<endl;
				cin>>insertar.id;
				cout<<"Nombre:"<<endl;
				cin>>insertar.nombre;
				cout<<"Salario:"<<endl;
				cin>>insertar.salario;
				outFile<<insertar.id<<" "<<insertar.nombre<<" "<<insertar.salario<<endl;
				break;
			case 2: 
				system("cls");
				while(inFile>>leer.id>>leer.nombre>>leer.salario)
				{
					cout<<leer.id<<" "<<leer.nombre<<" "<<leer.salario<<endl;
				}
				break;
			case 3:
				aux=0;
				i=0;
				while(inFile>>leer.id>>leer.nombre>>leer.salario)
				{
					aux+=leer.salario;
					i++;
				}
				system("cls");
				cout<<"Promedio: "<<aux/i<<endl;
				break;
			case 4:
				aux=0;
				while(inFile>>leer.id>>leer.nombre>>leer.salario)
				{
					aux+=leer.salario;
				}
				system("cls");
				cout<<"Total: "<<aux<<endl;
				break;
			case 5:
				break;
		}
	}
}
