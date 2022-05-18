#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(int argc,char* argv[])
{
	int aux1=0,aux3;
	float aux2=1;
	for(int i=2;i<argc;i++)
	{
		string asd=argv[1];
		if(asd=="Multiplicacion")
		{
			istringstream(argv[i])>>aux3;
			if(aux3)
			{
				aux2=aux3*aux2;	
			}
		}else if(asd=="Division")
		{
			istringstream(argv[i])>>aux3;
			if(aux3)
			{
				if(i==2)
				{
					aux2=aux3;	
				}
				else
				{
					aux2=aux2/aux3;
				}
			}
		}else if(asd=="Resta")
		{
			istringstream(argv[i])>>aux3;
			if(aux3)
			{
				if(i==2)
				{
					aux2=aux3;
				}
				else{
					aux2=aux2-aux3;
				}
			}
		}else if(asd=="Suma")
		{
			istringstream(argv[i])>>aux3;
			if(aux3)
			{
				if(i==2)
				{
					aux2=aux3;
				}
				else
				{
					aux2+=aux3;
				}
			}
		}
	}
	cout<<aux2;
}
