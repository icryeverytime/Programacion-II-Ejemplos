#include <iostream>
using namespace std;

class Rectangulo
{
	private:
		float altura;
		float base;
	public:
		Rectangulo(float a,float b)
		{
			altura=a;
			base=b;
		}
		float perimetro()
		{
			return altura*2+base*2;
		}
		int comparacion(Rectangulo rec)
		{
			return this->perimetro()>rec.perimetro();
		}
};
class Circulo
{
	private:
		float radio;
	public:
		Circulo(float r)
		{
			radio=r;
		}
		float perimetro()
		{
			return 2*3.14*radio;
		}
		int comparacion(Circulo cir)
		{
			return this->perimetro()>cir.perimetro();
		}
};
class Triangulo
{
	private:
		float a;
		float b;
		float c;
	public:
		Triangulo(float ab,float bb,float cc)
		{
			a=ab;
			b=bb;
			c=cc;
		}
		float perimetro()
		{
			return a+b+c;
		}
		int comparacion(Triangulo tri)
		{
			return this->perimetro()>tri.perimetro();
		}
};

int main()
{
	float altura1,base1,altura2,base2,radio1,radio2,a1,b1,c1,a2,b2,c2;
	cout<<"Datos de los rectangulos:"<<endl;
	cout<<"Altura del primer rectangulo:"<<endl;
	cin>>altura1;
	cout<<"Base del primer rectangulo:"<<endl;
	cin>>base1;
	cout<<"Altura del segundo rectangulo:"<<endl;
	cin>>altura2;
	cout<<"Base del segundo rectangulo:"<<endl;
	cin>>base2;
	
	Rectangulo rectangle1(altura1,base1);
	Rectangulo rectangle2(altura2,base2);
	
	cout<<endl<<"Datos de los circulos:"<<endl;
	cout<<"Radio del primer circulo:"<<endl;
	cin>>radio1;
	cout<<"Radio del segundo circulo:"<<endl;
	cin>>radio2;
	
	Circulo circle1(radio1);
	Circulo circle2(radio2);
	
	cout<<endl<<"Datos de los triangulos:"<<endl;
	cout<<"Primer lado del primer triangulo:"<<endl;
	cin>>a1;
	cout<<"Segundo lado del primer triangulo:"<<endl;
	cin>>b1;
	cout<<"Tercer lado del primer triangulo:"<<endl;
	cin>>c1;
	cout<<"Primer lado del segundo triangulo:"<<endl;
	cin>>a2;
	cout<<"Segundo lado del segundo triangulo:"<<endl;
	cin>>b2;
	cout<<"Tercer lado del segundo triangulo:"<<endl;
	cin>>c2;
	
	Triangulo triangle1(a1,b1,c1);
	Triangulo triangle2(a2,b2,c2);
	
	if(rectangle1.comparacion(rectangle2))
	{
		cout<<"El primer rectangulo es mas grande"<<endl;
	}
	else{
		cout<<"El segundo rectnagulo es mas grande"<<endl;
	}
	if(circle1.comparacion(circle2))
	{
		cout<<"El primer circulo es mas grande"<<endl;
	}
	else{
		cout<<"El segundo circulo es mas grande"<<endl;
	}
	if(triangle1.comparacion(triangle2))
	{
		cout<<"El primer triangulo es mas grande"<<endl;
	}
	else{
		cout<<"El segundo triangulo es mas grande"<<endl;
	}
}
