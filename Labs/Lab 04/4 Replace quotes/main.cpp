 /*
    Author: Nawal Ahmed
    Codename: blueblitz
    Lab 04: 4 Replace quotes
*/

#include <iostream>
using namespace std;

int main()
{
  int count = 5; //declare and initialize any integer which in this case is 5
  int* pCount = &count; //declare and initialize an integer pointer that euqals to the address of the count variable

  cout << "1) This line simply states the value of the count integer which is:  " << count << endl; //display the count
  cout << "2) This line states the address value of the count integer using the address of operator (&) which is: " << &count << endl; //display the address of count
  cout << "3) This line refers to a pointer that currently matches\n   the value of &count so it is the same as the above line: " << pCount << endl; //pointer pCount equals address of count
  cout << "4) This line de-references (*) the pCount pointer, so it goes back to: " << *pCount << endl; //dereference pointer pCount

  return 0; //exit program
}
