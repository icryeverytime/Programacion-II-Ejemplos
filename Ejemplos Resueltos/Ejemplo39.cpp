#include <iostream>
#include <cstring>
using namespace std;

class Estudiante{
	public:
		char nombre[50];
		int edad;
		char id[10];
		int calificacion;
	public:
		void imprimir()
		{
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Edad: "<<edad<<endl;
			cout<<"Id:"<<id<<endl;
			cout<<"Calificacion: "<<calificacion<<endl;
		}
};
int main()
{
	Estudiante objeto;
	char nombre[50],id[10];
	int edad,calificacion;
	cout<<"Nombre:";
	cin>>nombre;
	cout<<"Edad:";
	cin>>edad;
	cout<<"Id:";
	cin>>id;
	cout<<"Calificacion:";
	cin>>calificacion;
	strcpy(objeto.nombre,nombre);
	objeto.edad=edad;
	objeto.calificacion=calificacion;
	strcpy(objeto.id,id);
	objeto.imprimir();
	
	return 0;
}
