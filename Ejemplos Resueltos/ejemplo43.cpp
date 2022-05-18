#include <iostream>
using namespace std;

class Boletos
{
	private:
		int vip;
		int general;
		int dinero;
		int dinerovip;
		int dinerogeneral;
		int aux1;
		int aux2;
	public:
		Boletos(int n)
		{
			vip=100;
			general=500;
			dinero=0;
			dinerovip=0;
			dinerogeneral=0;
			aux1=0;
			aux2=0;
		}
		void compra()
		{
			int venta;
			cout<<"Precio: $200"<<endl;
			cout<<"Cantidad disponible: "<<general<<endl;
			cout<<"Cuantos boletos quiere?"<<endl;
			cin>>venta;
			if(venta<=general)
			{
				cout<<"Boletos comprados!!"<<endl;
				dinero+=venta*200;
				dinerogeneral+=venta*200;
				general=general-venta;
				aux1++;
			}
			else
			{
				cout<<"No hay suficientes boletos para comprar";
			}
		}
		void compraB()
		{
			int venta;
			cout<<"Precio: $400"<<endl;
			cout<<"Cantidad disponible: "<<vip<<endl;
			cout<<"Cuantos boletos quiere?"<<endl;
			cin>>venta;
			if(venta<=vip)
			{
				cout<<"Boletos comprados!!"<<endl;
				dinero+=venta*400;
				dinerovip+=venta*400;
				vip=vip-venta;
				aux2++;
			}
		}
		void dinerototal()
		{
			if(dinero>0)
			{
				float porc1,porc2;
				porc1=(float)dinerovip/(float)dinero*100;
				porc2=(float)dinerogeneral/(float)dinero*100;
				cout<<"Dinero total: "<<dinero<<endl;
				cout<<"Dinero vip: "<<dinerovip<<endl;
				cout<<"Dinero general: "<<dinerogeneral<<endl;
				cout<<"Porcentaje de dinero de vip: "<<porc1<<"%"<<endl;
				cout<<"Porcentaje de dinero de general: "<<porc2<<"%"<<endl;	
			}
			else{
				cout<<"No existe ninguna compra"<<endl;
			}
		}
		void estadistica()
		{
			if(dinero>0)
			{
				int vendidos1,vendidos2;
				float porc1,porc2,prom1,prom2;
				vendidos1=500-general;
				vendidos2=100-vip;
				porc1=(float)vendidos1/aux1;
				porc2=(float)vendidos2/aux2;
				prom1=(float)dinerogeneral/aux1;
				prom2=(float)dinerovip/aux2;
				cout<<"Promedio de boleots vendidos en cada compra para general: "<<porc1<<endl;
				cout<<"Promedio de boletos vendidos en cada compra para vip: "<<porc2<<endl;
				cout<<"Promedio de dinero en cada compra para general: "<<prom1<<endl;
				cout<<"Promedio de dinero en cada compra para vip: "<<prom2<<endl;
			}	
		}
		
};
int main()
{
	Boletos feria(0);
	int n=0;
	while(n!=5)
	{
		cout<<"Elija una opcion:"<<endl;
		cout<<"1.-Compra de boletos general"<<endl;
		cout<<"2.-Compra de boletso vip"<<endl;
		cout<<"3.-Dinero generado"<<endl;
		cout<<"4.-Estadistica extra"<<endl;
		cout<<"5.-Salir"<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				feria.compra();
				break;
			case 2:
				feria.compraB();
				break;
			case 3:
				feria.dinerototal();
				break;
			case 4:
				feria.estadistica();
				break;
			case 5:
				cout<<"Adios"<<endl;
				break;
			default:
				cout<<"Opcion invalida"<<endl;
		}
	}
}
