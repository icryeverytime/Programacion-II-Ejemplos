#include <iostream>
using namespace std;
struct Estudiante{
	char nombre[50];
	int edad;
	float promedio;
	char nomMateria[50];
	char nomMae[50];
	int calificacion;	
};
void capturaDatos(Estudiante *,int);

int main()
{
	Estudiante *datos;
	int n;
	cout<<"Numero de estudiantes a capturar:";
	cin>>n;
	datos=new Estudiante[n];
	capturaDatos(datos,n);
}
void capturaDatos(Estudiante *datos,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"Estudiante "<<i+1<<":"<<endl<<endl;
		cout<<"Nombre:";
		cin>>datos[i].nombre;
		cout<<"Edad:";
		cin>>datos[i].edad;
		cout<<"Nombre de materia:";
		cin>>datos[i].nomMateria;
		cout<<"Nombre de maestro:";
		cin>>datos[i].nomMae;
		cout<<"Calificacion:";
		cin>>datos[i].calificacion;
	}
}
