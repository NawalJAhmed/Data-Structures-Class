/*
    Author: Nawal Ahmed
    Codename: blueblitz
    Lab 04: 1 Fix errors
*/

#include <iostream>
using namespace std;

int main()
{
int num1 = 1, num2 = 2, num3 = 3; //declared int variables. doesn't need to be initialized
int* p1 = &num1; //pointer to num1
int* p2 = &num2; //pointer to num2
int* p3 = &num3; //pointer to num3

num1 = 11; //value for num1
num2 = 22; //value for num2
num3 = 33; //value for num3
  
cout << num1 << " " << num2 << " " << num3 << endl; //print out the numbers in order
cout << p1 << " " << p2 << " " << p3 << endl; //print out the memory addresses of the numbers
cout << *p1 << " " << *p2 << " " << *p3 << "\n" << endl; //print out dereferenced pointers. added a new line for readability

*p1 = *p2; //dereferenced p1 points to dereferenced p2
*p2 = *p3; //dereferenced p2 points to dereferenced p3
*p3 = *p1; //dereferenced p3 points to dereferenced p1
  
cout << num1 << " " << num2 << " " << num3 << endl; //print out the numbers in order
cout << p1 << " " << p2 << " " << p3 << endl; //print out the memory addresses of the numbers
cout << *p1 << " " << *p2 << " " << *p3 << "\n" << endl; //print out dereferenced pointers. added a new line for readability

*p2 = 22; //dereference p2 and make it 22
  
p1 = p2; //p1 now equals p2
p2 = p3; //p2 now equals p3
p3 = p1; //p3 now equals p1
  
cout << num1 << " " << num2 << " " << num3 << endl; //print out the numbers in order
cout << p1 << " " << p2 << " " << p3 << endl; //print out the memory addresses of the numbers
cout << *p1 << " " << *p2 << " " << *p3 << "\n" << endl; //print out dereferenced pointers. added a new line for readability

} 
