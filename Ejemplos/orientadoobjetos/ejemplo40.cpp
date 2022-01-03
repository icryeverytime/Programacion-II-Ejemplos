#include <iostream>
#include <cstring>
using namespace std;

class Estudiante{
	public:
		char nombre[50];
		int edad;
		char id[10];
	Estudiante(char n[50],int e,char i[10])
	{
		strcpy(nombre,n);
		strcpy(id,i);
		edad=e;
	}
	public:
		void imprimir()
		{
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Edad: "<<edad<<endl;
			cout<<"Id:"<<id<<endl;
		}
};
int main()
{
	char nombre[50],id[10];
	int edad;
	cout<<"Nombre:";
	cin>>nombre;
	cout<<"Edad:";
	cin>>edad;
	cout<<"Id:";
	cin>>id;
	
	Estudiante objeto(nombre,edad,id);
	
	objeto.imprimir();
	
	return 0;
}
