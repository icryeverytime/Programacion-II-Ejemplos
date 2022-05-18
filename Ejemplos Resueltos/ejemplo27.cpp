#include <iostream>
#include <Windows.h>
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
void imprimirDatos(Estudiante *,int);
void promedioDatos(Estudiante *, int);
void buscarMat(Estudiante *,int);
void buscarMae(Estudiante *, int);
int main()
{
	Estudiante *datos;
	int n;
	cout<<"Numero de estudiantes a capturar:";
	cin>>n;
	datos=new Estudiante[n];
	capturaDatos(datos,n);
	imprimirDatos(datos,n);
	promedioDatos(datos,n);
	buscarMat(datos,n);
	buscarMae(datos,n);
	
	return 0;
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
void imprimirDatos(Estudiante *datos,int n)
{
	
	system("cls");
	
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"Estudiante "<<i+1<<":"<<endl<<endl;
		cout<<"Nombre:"<<datos[i].nombre<<endl;
		cout<<"Edad:"<<datos[i].edad<<endl;
		cout<<"Nombre de materia:"<<datos[i].nomMateria<<endl;
		cout<<"Nombre de maestro:"<<datos[i].nomMae<<endl;
		cout<<"Calificacion:"<<datos[i].calificacion;
	}

}
void promedioDatos(Estudiante *datos,int n)
{
	int aux1=0,aux2=0,aux3=0;
	for(int i=0;i<n;i++)
	{
		aux1+=datos[i].calificacion;
		if(datos[i].calificacion>=7)
		{
			aux2++;
		}
		else
		{
			aux3++;
		}
	}
	cout<<endl<<"Promedio de calificacion: "<<aux1/n<<endl;
	cout<<"Total de aprobados: "<<aux2<<endl;
	cout<<"Total de reprobados:"<<aux3<<endl;
}
void buscarMat(Estudiante *datos, int n)
{
	char materia[50];
	cout<<endl<<"Nombre de materia por buscar por:"<<endl;
	cin>>materia;
	for(int i=0;i<n;i++)
	{
		int b=strcmp(materia,datos[i].nomMateria);
		if(b==0)
		{
			cout<<endl<<"Estudiante "<<i+1<<":"<<endl<<endl;
			cout<<"Nombre:"<<datos[i].nombre<<endl;
			cout<<"Edad:"<<datos[i].edad<<endl;
			cout<<"Nombre de materia:"<<datos[i].nomMateria<<endl;
			cout<<"Nombre de maestro:"<<datos[i].nomMae<<endl;
			cout<<"Calificacion:"<<datos[i].calificacion<<endl;
		}
	}
}
void buscarMae(Estudiante *datos, int n)
{
	char maestro[50];
	cout<<endl<<"Nombre de maestro por buscar por:"<<endl;
	cin>>maestro;
	for(int i=0;i<n;i++)
	{
		int b=strcmp(maestro,datos[i].nomMae);
		if(b==0)
		{
			cout<<endl<<"Estudiante "<<i+1<<":"<<endl<<endl;
			cout<<"Nombre:"<<datos[i].nombre<<endl;
			cout<<"Edad:"<<datos[i].edad<<endl;
			cout<<"Nombre de materia:"<<datos[i].nomMateria<<endl;
			cout<<"Nombre de maestro:"<<datos[i].nomMae<<endl;
			cout<<"Calificacion:"<<datos[i].calificacion<<endl;
		}
	}
}

