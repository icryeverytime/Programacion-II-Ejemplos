#include<iostream>
using namespace std;
struct direccion{
	char estado[50];
	char pais[50];
	char municipio[50];
};
struct usuario{
	char pnombre[30];
	char papellido[30];
	char correo[40];
	struct direccion datos;
};


int main()
{
	usuario uno;
	
	cout<<"Primer nombre:"<<endl;
	cin>>uno.pnombre;
	
	cout<<"Segundo nombre:"<<endl;
	cin>>uno.papellido;
	
	cout<<"Correo:"<<endl;
	cin>>uno.correo;
	
	cout<<"Estado:"<<endl;
	cin>>uno.datos.estado;
	
	cout<<"Pais:"<<endl;
	cin>>uno.datos.pais;
	
	cout<<"Municipio:"<<endl;
	cin>>uno.datos.municipio;
	
	cout<<endl<<"Datos ingresados:"<<endl;
	cout<<"Primer nombre: "<<uno.pnombre<<endl;
	cout<<"Segundo nombre: "<<uno.papellido<<endl;
	cout<<"Correo: "<<uno.correo<<endl;
	cout<<"Estado: "<<uno.datos.estado<<endl;
	cout<<"Pais: "<<uno.datos.pais<<endl;
	cout<<"Municipio"<<uno.datos.municipio<<endl;
	
	return 0;
}
