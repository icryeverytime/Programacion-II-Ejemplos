#include <iostream>
#include <cstring>
using namespace std;

class Estudiante{
	public:
		char nombre[50];
		int edad;
		char id[10];
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
	Estudiante objeto;
	char nombre[50],id[10];
	int edad;
	cout<<"Nombre:";
	cin>>nombre;
	cout<<"Edad:";
	cin>>edad;
	cout<<"Id:";
	cin>>id;
	strcpy(objeto.nombre,nombre);
	objeto.edad=edad;
	strcpy(objeto.id,id);
	objeto.imprimir();
	
	return 0;
}
