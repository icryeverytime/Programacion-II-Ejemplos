#include<iostream>
using namespace std;

struct usuario{
	char pnombre[30];
	char papellido[30];
	char correo[40];
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
	
	cout<<"Datos ingresados:"<<endl;
	cout<<"Primer nombre: "<<uno.pnombre<<endl;
	cout<<"Segundo nombre: "<<uno.papellido<<endl;
	cout<<"Correo: "<<uno.correo<<endl;
	
	return 0;
}
