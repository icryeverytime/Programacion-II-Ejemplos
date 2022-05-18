#include <iostream>
using namespace std;

struct Direccion{
	int num_calle;
	char nom_calle[50];
	char municipio[50];
	char estado[50];
	char pais[50];
};
struct Informacion{
	char nombre[50];
	int edad;
	struct Direccion dir_persona;
};
struct Banco{
	float dinero;
	int id_banco;
	struct Informacion datos;
};
int main()
{
	Banco *cuenta;
	int n;
	cout<<"Numero de datos a capturar:"<<endl;
	cin>>n;
	cuenta=new Banco[n];
	
	for(int i=0;i<n;i++)
	{
		system("cls");
		cout<<"Id banco:"<<endl;
		cin>>cuenta[i].id_banco;
		cout<<"Dinero:"<<endl;
		cin>>cuenta[i].dinero;
		cout<<"Nombre:"<<endl;
		cin>>cuenta[i].datos.nombre;
		cout<<"Edad:"<<endl;
		cin>>cuenta[i].datos.edad;
		cout<<"Numero de calle:"<<endl;
		cin>>cuenta[i].datos.dir_persona.num_calle;
		cout<<"Nombre de calle:"<<endl;
		cin>>cuenta[i].datos.dir_persona.nom_calle;
		cout<<"Municipio:"<<endl;
		cin>>cuenta[i].datos.dir_persona.municipio;
		cout<<"Estado:"<<endl;
		cin>>cuenta[i].datos.dir_persona.estado;
		cout<<"Pais:"<<endl;
		cin>>cuenta[i].datos.dir_persona.pais;
	}
	system("cls");
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"Datos posicion ["<<i+1<<"]:"<<endl<<endl;
		
		cout<<"Id banco: "<<cuenta[i].id_banco<<endl;
		cout<<"Dinero: "<<cuenta[i].dinero<<endl;
		cout<<"Nombre: "<<cuenta[i].datos.nombre<<endl;
		cout<<"Edad: "<<cuenta[i].datos.edad<<endl;
		cout<<"Numero de calle: "<<cuenta[i].datos.dir_persona.num_calle<<endl;
		cout<<"Nombre de calle: "<<cuenta[i].datos.dir_persona.nom_calle<<endl;
		cout<<"Municipio: "<<cuenta[i].datos.dir_persona.municipio<<endl;
		cout<<"Estado: "<<cuenta[i].datos.dir_persona.estado<<endl;
		cout<<"Pais: "<<cuenta[i].datos.dir_persona.pais<<endl;
	}
	return 0;
}
