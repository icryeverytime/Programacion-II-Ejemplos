#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
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
	int aux2;
	string linea;
	while(n!=7)
	{
		aux2=0;
		cout<<"1. Insertar"<<endl;
		cout<<"2. Leer"<<endl;
		cout<<"3. Promedio"<<endl;
		cout<<"4. Total"<<endl;
		cout<<"5. Actualizar"<<endl;
		cout<<"6. Buscar"<<endl;
		cout<<"7. Salir"<<endl;
		cin>>n;
		ofstream outFile("jugadores.txt",ios::app);
		ifstream inFile("jugadores.txt");
		ofstream outFile2("temporal.txt",ios::app);
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
				char id[10];
				system("cls");
				cout<<"Id a actualizar:"<<endl;
				cin>>id;
				while(inFile>>leer.id>>leer.nombre>>leer.salario)
				{
					if(strcmp(id,leer.id)==0)
					{
						cout<<"Nombre:"<<endl;
						cin>>leer.nombre;
						cout<<"Salario:"<<endl;
						cin>>leer.salario;
						aux2=1;
					}
					outFile2<<leer.id<<" "<<leer.nombre<<" "<<leer.salario<<endl;
				}
				if(aux2==0)
				{
					cout<<"No existe el usuario con ese id"<<endl;
				}
				outFile.close();
				outFile2.close();
				inFile.close();
				remove("jugadores.txt");
				rename("temporal.txt","jugadores.txt");
				break;
			case 6:
				system("cls");
				char nombreB[30];
				cout<<"Ingrease el nombre a buscar:"<<endl;
				cin>>nombreB;
				while(inFile>>leer.id>>leer.nombre>>leer.salario)
				{
					if(!strcmp(nombreB,leer.nombre))
					{
						cout<<leer.id<<" "<<leer.nombre<<" "<<leer.salario<<endl;
					}	
				}
				break;
			case 7:
				break;
		}
	}
}
