#include <iostream>
using namespace std;

class Estadistica{
	private:
		int confirmados;
		int pruebas;
		int poblacion;
		int hospitalizados;
		int capacidad;
	public:
		Estadistica(int con,int pru, int pob,int hos,int cap)
		{
			confirmados=con;
			pruebas=pru;
			poblacion=pob;
			hospitalizados=hos;
			capacidad=cap;
		}
		void imprimir()
		{
			cout<<"Datos ingresados:"<<endl;
			cout<<"Poblacion: "<<poblacion<<endl;
			cout<<"Pruebas: "<<pruebas<<endl;
			cout<<"Confirmados: "<<confirmados<<endl;
			cout<<"Capacidad: "<<capacidad<<endl;
			cout<<"Hospitalizados: "<<hospitalizados<<endl;  
		}
		void porConfirmados()
		{
			float porc;
			porc=((float)confirmados/(float)poblacion)*100;
			cout<<"Porcentaje de la poblacion como confirmado: "<<porc<<"%"<<endl;
		}
		void porHospitalizados()
		{
			float porc;
			porc=((float)hospitalizados/(float)confirmados)*100;
			cout<<"Porcentaje de hospitalizados de los casos confirmados: "<<porc<<"%"<<endl;
		}
		void porHospob()
		{
			float porc;
			porc=((float)hospitalizados/(float)poblacion)*100;
			cout<<"Porcentaje de hospitalizados de la poblacion: "<<porc<<"%"<<endl;
		}
		void porConfirmprueb()
		{
			float porc;
			porc=((float)confirmados/(float)pruebas)*100;
			cout<<"Porcentaje de casos confirmados de las pruebas: "<<porc<<"%"<<endl;
		}
		void hoscapacidad()
		{
			float porc;
			porc=((float)hospitalizados/(float)capacidad)*100;
			cout<<"Porentaje de capacidad utilizado en el hospital: "<<porc<<"%"<<endl;
		}
};
int main()
{
	int con,pru,pob,hos,cap;
	
	cout<<"El numero de poblacion total:"<<endl;
	cin>>pob;
	cout<<"Total de pruebas realiados:"<<endl;
	cin>>pru;
	cout<<"Total de casos confirmados:"<<endl;
	cin>>con;
	cout<<"Total de capacidad de hospital"<<endl;
	cin>>cap;
	cout<<"Total de hospitalizados"<<endl;
	cin>>hos;
	
	Estadistica data(con,pru,pob,hos,cap);
	data.imprimir();
	data.porConfirmados();
	data.porHospitalizados();
	data.porHospob();
	data.porConfirmprueb();	
	data.hoscapacidad();
}
