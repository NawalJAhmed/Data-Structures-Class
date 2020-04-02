/*
    Author: Nawal Ahmed
    Codename: blueblitz
    Lab 04: 2 Sum of first n postive integers
*/

#include <iostream> //standard input and output
using namespace std;

int total(int i) { //base condition else the program will not produce the proper output
    if(i > 0) //if the input is not 0 then...
	return i + total(i - 1); //recursive condition. add up all the decrements of the input until it reaches 0
}

int main() {
    int i; //declare a variable for input
	cout<<"The program will prompt you to enter an integer and the program will\nadd up all the previous integers leading up to it including the integer that was entered."<<endl;
    cout<<"\nPlease enter an integer: "; //prompt user to enter an integer
    cin >> i; //input for the integer
    cout << "\nTotal = "<<total(i)<<endl; //call the function and display the total
} 
