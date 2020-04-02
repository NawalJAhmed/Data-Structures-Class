/*
    Author: Nawal Ahmed
    Codename: blueblitz
    Lab 04: 3 Fibonacci
*/

#include<iostream>
using namespace std;
 
int fibonacci(int n) { //base condition else the program will not produce the proper output
    if (n>1){ //if the user wants to know more than one fibonacci number then...
        return(fibonacci(n-1)+fibonacci(n-2)); //use the recursive fibonacci algorithm from the powerpoint
    } else { //if they want to know 1 number, then the number is just 1 or nothing
		return(n);
	}
}
 
int main() {
    int n; //declare n of number for the fibonacci sequence
	int i = 0; //start counter at 0
    cout<<"How many of the first n numbers do you want the fibonacci program to display? ";
    cin>>n;//promt user input
    cout<<"The first "<<n<<" numbers in the fibonacci sequence are: ";
    while(i<n) { //loop while the counter is less than the number of fiboacci elements
        cout<<" "<<fibonacci(i); //call the function each time
        i++; //increment counter
    }
} 
