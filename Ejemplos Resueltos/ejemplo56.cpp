#include <iostream>
using namespace std;
class tiempo{
	private:
		int hora,minutos,segundos;
	public:
		void constructor(int h,int m,int s)
		{
			hora=h;
			minutos=m;
			segundos=s;
		}
		void imprimir()
		{
			cout<<"Tiempo:"<<endl<<hora<<":"<<minutos<<":"<<segundos<<endl;
		}
		tiempo operator+(const tiempo& t)
		{
			tiempo p;
			p.constructor(this->hora+t.hora,this->minutos+t.minutos,this->segundos+t.segundos);
			return p;
		}
};
int main()
{
	tiempo uno,dos;
	uno.constructor(14,22,37);
	dos.constructor(4,13,23);
	tiempo tres;
	tres=uno+dos;
	
	uno.imprimir();
	dos.imprimir();
	tres.imprimir();
}
