#include <iostream>
using namespace std;

class caja{
	private:
		int altura;
		int ancho;
		int largura;
	public:
		void constructor(int alt,int anc,int lar)
		{
			altura=alt;
			ancho=anc;
			largura=lar;
		}
		void volumen()
		{
			cout<<"El volumen es: "<<altura*ancho*largura<<endl;
		}
		caja operator+(const caja& b){
			caja c;
			c.constructor(this->altura+b.altura,this->ancho+b.ancho,this->largura+b.largura);
			return c;
		}
};
int main()
{
	caja uno,dos,tres;
	uno.constructor(2,3,4);
	dos.constructor(5,4,3);
	
	tres=uno+dos;
	
	uno.volumen();
	dos.volumen();
	tres.volumen();
}
