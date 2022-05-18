#include <iostream>
#include <sstream>
using namespace std;

int main(int argc,char* argv[])
{
	int aux=0;
	for(int i=1;i<argc;i++)
	{
		cout<<"Argumento["<<i<<"]:"<<argv[i]<<endl;
		int aux2;
		istringstream(argv[i])>>aux2;
		if(aux2)
		{
			aux+=aux2;
		}
			
	}
	cout<<"Suma de argumentos: "<<aux;
	return 0;
}
