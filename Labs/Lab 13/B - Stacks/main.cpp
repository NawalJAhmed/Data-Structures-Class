//Author: Nawal Ahmed
//Codename: blueblitz
//Lab13 B - Stacks

#include <iostream>
#include <stack> //stacks are LIFO
using namespace std;

void printStack(stack <int> g) { //creates a function that will print out the stack
    for (;!g.empty();g.pop()) { //while the stack isn't empty, print the top then pop it and continue
        cout << " " << g.top(); 
    } 
}

int main() {
    stack <int> mystack1; //creating stack
	stack <int> mystack2; //creating another stack
	
	cout << "Push function:"; //pushing multiple elements to the stack
	mystack1.push(7);
	mystack1.push(6);
	mystack1.push(8);
	mystack1.push(5);
	printStack(mystack1); //calling the printStack function which will display all the elements in the specified stack
	
	cout << "\nPop function:";
	mystack1.pop(); //removes the element at the top of the stack
	printStack(mystack1);
	
	cout << "\nTop function: ";
	int top = mystack1.top(); //due to the nature of stacks, the last element pushed in, is at the top
	cout << top;
	
	cout << "\n= function implemented. mystack2 = mystack1:";
	mystack2 = mystack1; //can be used to copy the elements in a stack to another
	printStack(mystack2);
	
	cout << "\nEmpty function: ";
	if (mystack2.empty() == true) { //determines if the stack is empty or not
		cout << "The stack is empty.";
	} else {
		cout << "mystack2 is not empty.";
	}
	
	cout << "\nSize function for mystack2: ";
	int size = mystack2.size(); //determines the number of elements in the stack
	cout << size << endl;
	
	return 0;
}
