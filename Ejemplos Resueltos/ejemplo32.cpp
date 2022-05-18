#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc,char* argv[])
{
	for(int i=1;i<argc;i++)
	{
		string asd=argv[i];
		reverse(asd.begin(),asd.end());
		cout<<asd<<endl;
	}
}
