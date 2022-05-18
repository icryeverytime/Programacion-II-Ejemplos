#include <iostream>
#include <cstring>
using namespace std;

class Estudiante{
	private:
		char nombre[50];
		int edad;
		char id[10];
		int calificacion;
	public:
		void imprimir()
		{
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Edad: "<<edad<<endl;
			cout<<"Id: "<<id<<endl;
			cout<<"Calificacion: "<<calificacion<<endl;
		}
		Estudiante(char n[50],int e,char i[10],int c)
		{
			strcpy(nombre,n);
			strcpy(id,i);
			edad=e;
			calificacion=c;
		}
		Estudiante(char n[50],int e,char i[10])
		{
			strcpy(nombre,n);
			strcpy(id,i);
			edad=e;
			calificacion=0;
		}
};
int main()
{
	char nombre[50],id[10];
	int edad,calificacion;
	cout<<"Objeto 1:"<<endl;
	cout<<"Nombre:";
	cin>>nombre;
	cout<<"Edad:";
	cin>>edad;
	cout<<"Id:";
	cin>>id;
	cout<<"Calificacion:";
	cin>>calificacion;
	Estudiante objeto(nombre,edad,id,calificacion);
	
	objeto.imprimir();
	
	cout<<"Objeto 2:"<<endl;
	cout<<"Nombre:";
	cin>>nombre;
	cout<<"Edad:";
	cin>>edad;
	cout<<"Id:";
	cin>>id;
	
	Estudiante objeto2(nombre,edad,id);
	
	objeto2.imprimir();
	return 0;
}
