//Author: Nawal Ahmed
//Codename: blueblitz
//Lab13 D - Namespaces

#include <iostream>
using namespace std;

namespace orange //namespaces allow similar functions and other entities to be grouped under a single name
{
	double x = 1;
	void p()
	{
		cout << "from orange" << endl;
	}
}

namespace blue
{
	double x = 2;
	void p()
	{
		cout << "from blue" << endl;
	}
}

int main()
{
	cout << "You can call variables and functions outside the namespace using ::, the scope operator." << endl;
	orange::p(); //the two colons allow you to call from outside the namespace
	blue::p();
 
	cout << orange::x << endl; //the scope operator can be used to access variables and functions outside the namespace
	cout << blue::x << endl;
	
	return 0;
}
