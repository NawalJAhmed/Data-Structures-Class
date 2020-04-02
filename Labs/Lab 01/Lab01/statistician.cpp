//Author: Nawal Ahmed
//Codename: blueblitz
//Lab 01

#include <iostream>
#include <statistician.h> //import given header file
using namespace std;

//declare a constructor
statistician::statistician() {
	total = 0;
	count = 0;
	tinyest = 0;
	largest = 0;
}

void statistician::next(double r) {
    total += r; //Add up the sum for each number. Also used later to find the average
	count++; //Increment the count
    if(count == 1) {
	tinyest = r;
	largest = r;
    }
    else {
	//if the number is smaller than the previous than it is the smaller so far
	if(tinyest > r)
	    tinyest = r;
	//if the number is larger than the previous than it is the largest so far
	if(largest < r)
	    largest = r;
    }
}

int statistician::length() {
    return count; //count of elements must be found first in order to find the average
}

double statistician::mean() {
	return (total / count); //take the results of two other functions and divide to find the average
}

double statistician::minimum() {
	return tinyest; //smallest number in the sequence
}

double statistician::maximum() {
	return largest; //largest number in the sequence
}

int main() { //main function
	statistician s1; //implement the functions in the class
	//given values in the example
    s1.next(98.6);
    s1.next(99.0);
    s1.next(98.2);

	//display all the information derived from the functions
	cout<<"There are "<<s1.length()<<" elements in the sequence."<<endl;
	cout<<"The average of all the numbers in the sequence is "<<s1.mean()<<endl;
	cout<<"The sum of all the numbers in the sequence is "<<s1.total<<endl;
    cout<<"The smallest number in the sequence is "<<s1.minimum()<<endl;
	cout<<"The largest number in the sequence is "<<s1.maximum()<<"\n\n";
}