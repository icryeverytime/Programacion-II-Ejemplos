#include <iostream>
using namespace std;
void resultado(int num){
	cout<<"Numero int: "<<num*2<<endl;
}
void resultado(int num1,int num2){
	cout<<"Numeros int: "<<num1*num2<<endl;
}
void resultado(double num){
	cout<<"Numero float: "<<num*3.5<<endl;
}
void resultado(double num1,double num2){
	cout<<"Numeros floats: "<<num1*num2<<endl;
}
int main()
{
	resultado(5);
	resultado(7,9);
	resultado(4.4);
	resultado(5.7,6.3);
}
