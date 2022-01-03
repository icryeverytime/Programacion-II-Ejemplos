#include <iostream>
#include <sstream>
using namespace std;

int main(int argc,char* argv[])
{
	int aux=0,aux3=1;
	for(int i=1;i<argc;i++)
	{
		cout<<"Argumento["<<i<<"]:"<<argv[i]<<endl;
		int aux2,p;
		istringstream(argv[i])>>aux2;
		if( aux2)
		{
			aux+=aux2;
			aux3=aux2*aux3;	
		}
		
	}
	cout<<"Promedio de  argumentos: "<<aux<<endl;
	cout<<"Multiplicacion de argumetnos: "<<aux3;
	return 0;
}
