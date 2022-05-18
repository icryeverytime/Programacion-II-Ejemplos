#include<iostream>
using namespace std;

int main()
{
	char nombre[100],direccion[200],resumen[500];
	
	cout<<"Nombre completo:"<<endl;
	cin.getline(nombre,100);
	
	cout<<"Direccion:"<<endl;
	cin.getline(direccion,200);
	
	cout<<"Experencia laboral(presiona # para terminar seguido por un Enter para mandarlo):"<<endl;
	cin.getline(resumen,500,'#');
	
	cout<<"Datos recibido:"<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Direccion: "<<direccion<<endl;
	cout<<"Experencia laboral: "<<resumen<<endl;
	
	return 0;
}
