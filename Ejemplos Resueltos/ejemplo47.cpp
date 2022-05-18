#include <iostream>
#include <string>
using namespace std;
struct antro{
	float operacion;
	float generado;
	float costo;
	string nombre;
};
int main()
{
	struct antro eu;
	int dias;
	float dinero;
	cout<<"Nombre del antro:"<<endl;
	cin>>eu.nombre;
	cout<<"Costo de construccion:"<<endl;
	cin>>eu.costo;
	cout<<"Costo de operacion:"<<endl;
	cin>>eu.operacion;
	cout<<"Dinero generado:"<<endl;
	cin>>eu.generado;
	
	cout<<"Dias a calcular:"<<endl;
	cin>>dias;
	
	dinero=eu.generado*dias-eu.costo-eu.operacion*dias;
	cout<<"Dinero generado: "<<dinero;
}
