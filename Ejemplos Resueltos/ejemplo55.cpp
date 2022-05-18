#include <iostream>
using namespace std;
class compleja{
	private:
		int real,imaginaria;
	public:
		void constructor(int r,int i){
			real=r;
			imaginaria=i;
		}
		compleja operator+(const compleja& b){
			compleja c;
			c.constructor(this->real+b.real,this->imaginaria+b.imaginaria);
			return c;
		}
		compleja operator-(const compleja& b){
			compleja c;
			c.constructor(this->real-b.real,this->imaginaria-b.imaginaria);
			return c;
		}
		compleja operator*(const compleja& b){
			compleja c;
			c.constructor(this->real*b.real,this->imaginaria*b.imaginaria);
			return c;
		}
		compleja operator/(const compleja& b){
			compleja c;
			c.constructor(this->real/b.real,this->imaginaria/b.imaginaria);
			return c;
		}
		void imprimir(){
			cout<<"Ecuacion compleja: "<<real<<"+"<<imaginaria<<"i"<<endl;
		}
};
int main(){
	compleja uno,dos,tres,cuatro,cinco,seis;
	
	uno.constructor(9,8);
	dos.constructor(5,7);
	tres=uno+dos;	
	cuatro=uno-dos;
	cinco=uno*dos;
	seis=uno/dos;
	uno.imprimir();
	dos.imprimir();
	tres.imprimir();
	cuatro.imprimir();
	cinco.imprimir();
	seis.imprimir();
}
