#include <iostream>
using namespace std;
class imprimirdatos{
	public:
		void print(int x){
			cout<<"Imprimiendo int: "<<x<<endl;
		}
		void print(float x){
			cout<<"Imprimiendo float: "<<x<<endl;
		}
		void print(double x){
			cout<<"Imprimiendo double: "<<x<<endl;
		}
};
int main()
{
	imprimirdatos id;
	int uno=15;
	float dos=3.14;
	double tres=3.12;
	
	id.print(uno);
	id.print(dos);
	id.print(tres);
}
