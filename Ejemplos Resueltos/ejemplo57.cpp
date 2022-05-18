#include <iostream>
using namespace std;
class fecha{
	private:
		int dia,mes,anio;
	public:
		void constructor(int d,int m, int a)
		{
			dia=d;
			mes=m;
			anio=a;
		}
		friend ostream& operator<<(ostream& os, const fecha& f)
		{
			os<<f.mes<<"/"<<f.dia<<"/"<<f.anio;
			return os;
		}
};
int main()
{
	fecha cal;
	cal.constructor(30,12,2002);
	cout<<cal;
}
