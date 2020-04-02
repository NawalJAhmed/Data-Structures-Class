//Author: Nawal Ahmed
//Codename: blueblitz
//Lab07 Overloaded Functions

#include <iostream>
using namespace std;

double maxValue(const double& value1, const double& value2)
{
  if (value1 > value2)
    return value1;
  else
    return value2;
}

int maxValue(const int& value1, const int& value2)
{
  if (value1 > value2)
    return value1;
  else
    return value2;
}


int main()
{
    //declare the values
    int intValue1 = 40 , intValue2 = 41;
	double doubleValue1 = 89.9 , doubleValue2 = 75.8;
    //call the function from the template and display the max values from the ints and doubles
    cout << "The largest number between the ints " << intValue1 << " and " << intValue2 << " is " << maxValue(intValue1, intValue2) << endl;
    cout << "\nThe largest number between the doubles " << doubleValue1 << " and " << doubleValue2 << " is " << maxValue(doubleValue1, doubleValue2) << endl;
}