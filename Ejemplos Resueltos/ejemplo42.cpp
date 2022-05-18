#include <iostream>
using namespace std;
class Inversion
{
	private:
		double dinero;
	public:
		Inversion(double d)
		{
			dinero=d;
		}
		void retiro()
		{
			double cinco=dinero+(dinero*0.016)*5;
			double diez=dinero+(dinero*0.016)*10;
			double quince=dinero+(dinero*0.016)*15;
			double veinte=dinero+(dinero*0.016)*20;
			double veintecinco=dinero+(dinero*0.016)*25;
			double treinta=dinero+(dinero*0.016)*30;
			cout<<"Inversion en retiro:"<<endl;
			cout<<"En 5 anios: "<<cinco<<endl;
			cout<<"En 10 anios: "<<diez<<endl;
			cout<<"En 15 anios: "<<quince<<endl;
			cout<<"En 20 anios: "<<veinte<<endl;
			cout<<"En 25 anios: "<<veintecinco<<endl;
			cout<<"En 30 anios: "<<treinta<<endl<<endl;
		}
		void bonos()
		{
			double cinco=dinero+(dinero*0.011)*5;
			double diez=dinero+(dinero*0.011)*10;
			double quince=dinero+(dinero*0.011)*15;
			double veinte=dinero+(dinero*0.011)*20;
			double veintecinco=dinero+(dinero*0.011)*25;
			double treinta=dinero+(dinero*0.011)*30;
			cout<<"Inversion en bonos:"<<endl;
			cout<<"En 5 anios: "<<cinco<<endl;
			cout<<"En 10 anios: "<<diez<<endl;
			cout<<"En 15 anios: "<<quince<<endl;
			cout<<"En 20 anios: "<<veinte<<endl;
			cout<<"En 25 anios: "<<veintecinco<<endl;
			cout<<"En 30 anios: "<<treinta<<endl<<endl;
		}
		void fondos()
		{
			double cinco=dinero+(dinero*0.013)*5;
			double diez=dinero+(dinero*0.013)*10;
			double quince=dinero+(dinero*0.013)*15;
			double veinte=dinero+(dinero*0.013)*20;
			double veintecinco=dinero+(dinero*0.013)*25;
			double treinta=dinero+(dinero*0.013)*30;
			cout<<"Inversion en fondos:"<<endl;
			cout<<"En 5 anios: "<<cinco<<endl;
			cout<<"En 10 anios: "<<diez<<endl;
			cout<<"En 15 anios: "<<quince<<endl;
			cout<<"En 20 anios: "<<veinte<<endl;
			cout<<"En 25 anios: "<<veintecinco<<endl;
			cout<<"En 30 anios: "<<treinta<<endl<<endl;
		}
		void seguro()
		{
			double cinco=dinero+(dinero*0.012)*5;
			double diez=dinero+(dinero*0.012)*10;
			double quince=dinero+(dinero*0.012)*15;
			double veinte=dinero+(dinero*0.012)*20;
			double veintecinco=dinero+(dinero*0.012)*25;
			double treinta=dinero+(dinero*0.012)*30;
			cout<<"Inversion en seguro:"<<endl;
			cout<<"En 5 anios: "<<cinco<<endl;
			cout<<"En 10 anios: "<<diez<<endl;
			cout<<"En 15 anios: "<<quince<<endl;
			cout<<"En 20 anios: "<<veinte<<endl;
			cout<<"En 25 anios: "<<veintecinco<<endl;
			cout<<"En 30 anios: "<<treinta<<endl<<endl;
		}
};
int main()
{
	double n;
	cout<<"Dinero:"<<endl;
	cin>>n;
	Inversion datos(n);
	datos.retiro();
	datos.bonos();
	datos.fondos();
	datos.seguro();
}
