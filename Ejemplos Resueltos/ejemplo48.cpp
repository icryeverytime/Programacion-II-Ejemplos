#include <iostream>
using namespace std;

struct frutas{
	int cantidad;
	float precio;
};
int main()
{
	int n=0,m;
	struct frutas platano;
	struct frutas manzana;
	struct frutas aguacate;
	struct frutas kiwi;
	platano.cantidad=10;
	platano.precio=14;
	manzana.cantidad=20;
	manzana.precio=10;
	aguacate.cantidad=15;
	aguacate.precio=20;
	kiwi.cantidad=12;
	kiwi.precio=12;
	
	while(n!=5)
	{
		cout<<"1.-Manzanas $"<<manzana.precio<<" cantidad: "<<manzana.cantidad<<endl;
		cout<<"2.-Platano $"<<platano.precio<<" cantidad: "<<platano.cantidad<<endl;
		cout<<"3.-Aguacate $"<<aguacate.precio<<" cantidad: "<<aguacate.cantidad<<endl;
		cout<<"4.-Kiwi $"<<kiwi.precio<<" cantidad: "<<kiwi.cantidad<<endl;
		cout<<"5.Salir"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				cout<<"Cuantas manzanas quiere?"<<endl;
				cin>>m;
				if(m<=manzana.cantidad)
				{
					manzana.cantidad=manzana.cantidad-m;
					cout<<"Costo fue: $"<<manzana.precio*m<<endl;	
				}
				else{
					cout<<"No hay suficientes"<<endl;
				}
				break;
			case 2:
				cout<<"Cuantos platanos quiere?"<<endl;
				cin>>m;
				if(m<=platano.cantidad)
				{
					platano.cantidad=platano.cantidad-m;
					cout<<"Costo fue: $"<<platano.precio*m<<endl;	
				}
				else{
					cout<<"No hay suficientes"<<endl;
				}
				break;
			case 3:
				cout<<"Cuantas aguacates quiere?"<<endl;
				cin>>m;
				if(m<=aguacate.cantidad)
				{
					aguacate.cantidad=aguacate.cantidad-m;
					cout<<"Costo fue: $"<<aguacate.precio*m<<endl;	
				}
				else
				{
					cout<<"No hay suficientes"<<endl;
				}
				break;
			case 4:
				cout<<"Cuantas kiwis quiere?"<<endl;
				cin>>m;
				if(m<=kiwi.cantidad)
				{
					kiwi.cantidad=kiwi.cantidad-m;
					cout<<"Costo fue: $"<<kiwi.precio*m<<endl;	
				}
				else
				{
					cout<<"No hay suficientes"<<endl;
				}
				break;
			case 5:
				cout<<"Adios"<<endl;
				break;
			default:
				cout<<"No existe esa opcion"<<endl;
		}
	}
}
