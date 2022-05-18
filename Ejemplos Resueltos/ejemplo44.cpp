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
		int cantidadvip;
		int cantidadvipinicial;
		int cantidadgeneralinicial;
		int cantidadgeneral;
		int aux1;
		int aux2;
	public:
		Boletos(int dinerovip,int dinerogeneral,int cantidadvipa,int cantidadgenerala)
		{
			vip=dinerovip;
			general=dinerogeneral;
			dinero=0;
			dinerovip=0;
			dinerogeneral=0;
			aux1=0;
			aux2=0;
			cantidadvipinicial=cantidadvipa;
			cantidadgeneralinicial=cantidadgenerala;
			cantidadvip=cantidadvipa;
			cantidadgeneral=cantidadgenerala;
		}
		void compra()
		{
			int venta;
			cout<<"Precio: $"<<general<<endl;
			cout<<"Cantidad disponible: "<<cantidadgeneral<<endl;
			cout<<"Cuantos boletos quiere?"<<endl;
			cin>>venta;
			if(venta<=cantidadgeneral)
			{
				cout<<"Boletos comprados!!"<<endl;
				dinero+=venta*general;
				dinerogeneral+=venta*general;
				cantidadgeneral=cantidadgeneral-venta;
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
			cout<<"Precio: $"<<vip<<endl;
			cout<<"Cantidad disponible: "<<cantidadvip<<endl;
			cout<<"Cuantos boletos quiere?"<<endl;
			cin>>venta;
			if(venta<=cantidadvip)
			{
				cout<<"Boletos comprados!!"<<endl;
				dinero+=venta*vip;
				dinerovip+=venta*vip;
				cantidadvip=cantidadvip-venta;
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
				vendidos1=cantidadgeneralinicial-cantidadgeneral;
				vendidos2=cantidadvipinicial-cantidadvip;
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
		int dineroR()
		{	
			return dinero;
		}
		int comparar(Boletos compara)
		{
			return this->dineroR()>compara.dineroR();
		}
};
int main()
{
	int a=400,b=200,c=100,d=150;
	Boletos feria(a,b,c,d);
	Boletos feria2(150,100,20,100);
	int n=0,j=0;
	while(j!=4)
	{
		cout<<"Elija una opcion:"<<endl;
		cout<<"1.-Evento de carnival de animales"<<endl;
		cout<<"2.-Evento de baile"<<endl;
		cout<<"3.-Comparar dinero generado"<<endl;
		cout<<"4.-Salir de programa"<<endl;
		cin>>j;
		switch(j)
		{
			case 1:
				cout<<"Elija una opcion:"<<endl;
				cout<<"1.-Compra de boletos general"<<endl;
				cout<<"2.-Compra de boletso vip"<<endl;
				cout<<"3.-Dinero generado"<<endl;
				cout<<"4.-Estadistica extra"<<endl;
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
					default:
						cout<<"Opcion invalida"<<endl;
				}
				break;
			case 2:
				cout<<"Elija una opcion:"<<endl;
				cout<<"1.-Compra de boletos general"<<endl;
				cout<<"2.-Compra de boletso vip"<<endl;
				cout<<"3.-Dinero generado"<<endl;
				cout<<"4.-Estadistica extra"<<endl;
				cin>>n;
				switch(n)
				{
					case 1:
						feria2.compra();
						break;
					case 2:
						feria2.compraB();
						break;
					case 3:
						feria2.dinerototal();
						break;
					case 4:
						feria2.estadistica();
						break;
					default:
						cout<<"Opcion invalida"<<endl;
				}
				break;
			case 3:
				if(feria.comparar(feria2))
				{
					cout<<"El evento de animales ha vendido mas que el evento de baile"<<endl;
				}
				else
				{
					cout<<"El evento de baile ha vendido mas que el evento de animales"<<endl;
				}
				break;
			case 4:
				cout<<"Adios"<<endl;
				break;
			default:
				cout<<"No existe esta opcion"<<endl;
		}
	}
	while(n!=5)
	{
		
	}
}
