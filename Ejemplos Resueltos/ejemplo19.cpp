#include <iostream>
using namespace std;

struct estudiantes{
	char nombre[50];
	int edad;
	int calificacion;
};
int main()
{
	int aux1,aux2,aux3,aux4;
	float promedioE,promedioC,porcA,porcR;
	estudiantes salon[20];
	
	aux1=aux2=aux3=aux4=0;
	
	for(int i=0;i<20;i++)
	{
		system("cls");
		cout<<"Nombre:"<<endl;
		cin>>salon[i].nombre;
		cout<<"Edad:"<<endl;
		cin>>salon[i].edad;
		cout<<"Calificacion:"<<endl;
		cin>>salon[i].calificacion;
	}
	

	for(int i=0;i<20;i++)
	{
		if(salon[i].calificacion>=7)
		{
			aux1++;
		}
		else
		{
			aux2++;
		}
		aux3+=salon[i].calificacion;
		aux4+=salon[i].edad;
	}
	
	promedioC=aux3/20;
	promedioE=aux4/20;
	
	porcA=aux1/20;
	porcR=aux2/20;
	
	cout<<"Total de aprobados: "<<aux1<<endl;
	cout<<"Total de reprobados: "<<aux2<<endl;
	cout<<"Promedio de edad: "<<promedioE<<endl;
	cout<<"Promedio de calificacion: "<<promedioC<<endl;
	
	return 0;
}
