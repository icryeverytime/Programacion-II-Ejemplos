#include <iostream>
using namespace std;

struct Direccion{
	int numCalle;
	char nomCalle[50];
	char municipio[50];
	char estado[50];
	char pais[50];
};
struct Informacion{
	char nombre[50];
	int edad;
	Direccion *dir_persona;
};
int main()
{
	Informacion datos;
	int n;
	
	cout<<"Nombre:"<<endl;
	cin>>datos.nombre;
	
	cout<<"Edad:"<<endl;
	cin>>datos.edad;
	
	cout<<"Numero de direcciones que tiene:"<<endl;
	cin>>n;
	
	datos.dir_persona=new Direccion[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"Direccion["<<i+1<<"]:"<<endl;
		cout<<"Numero de calle"<<endl;
		cin>>datos.dir_persona[i].numCalle;
		cout<<"Nombre de calle"<<endl;
		cin>>datos.dir_persona[i].nomCalle;
		cout<<"Municipio:"<<endl;
		cin>>datos.dir_persona[i].municipio;
		cout<<"Estado:"<<endl;
		cin>>datos.dir_persona[i].estado;
		cout<<"Pais:"<<endl;
		cin>>datos.dir_persona[i].pais;
	}
	
	
	
	cout<<endl<<endl<<"Nombre:"<<datos.nombre<<endl;
	cout<<"Edad:"<<datos.edad<<endl<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Direccion ["<<i+1<<"]:"<<endl;
		cout<<"Numero de calle: "<<datos.dir_persona[i].numCalle<<endl;
		cout<<"Nombre de calle: "<<datos.dir_persona[i].nomCalle<<endl;
		cout<<"Municipio: "<<datos.dir_persona[i].municipio<<endl;
		cout<<"Estado: "<<datos.dir_persona[i].estado<<endl;
		cout<<"Pais: "<<datos.dir_persona[i].pais<<endl<<endl;
	}
	
	
	return 0;
}
