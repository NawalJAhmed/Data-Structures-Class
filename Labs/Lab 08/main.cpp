//Author: Nawal Ahmed
//Codename: blueblitz
//Lab08

template <typename T>
class Stack
{
public:
    Stack(); //declare constructor
    bool empty() const; //function to see if stack is empty
    T top() const; //function for checking the value up top
    void push(T value); //function for pushing or inserting a new value in the stack
    void pop(); //pop or remove value from stack
    int getSize() const; //function  for checking size of the stack

private:
    T elements[100]; //100 vacancies of type T in array elements
    int size;
};

template <typename T>
Stack<T>::Stack()
{
    size = 0; //constructor and size is 0
}

template <typename T>
bool Stack<T>::empty() const
{
    return (size == 0); //true if 0, if not, must be 0
}

template <typename T>
T Stack<T>::top() const
{
    return elements[size - 1]; // top function that returns the top value from the stack
}

template <typename T>
void Stack<T>::push(T value)
{
    elements[size++] = value; //push function increases size and inserts new value
}

template <typename T>
void Stack<T>::pop()
{
    --size; //implemented pop function by changing to returing the size of the stack and removing 
}

template <typename T>
int Stack<T>::getSize() const
{
    return size; //getSize function returning the size of the stack
}

//testing the template
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//use template to create stack of ints
    Stack<int> myStack; //create stack of ints called myStack
	cout << "This is the int stack.\n" <<endl;
	cout << "Is the stack currently empty? "; //checking the see if the stack which has no values in it, it empty
	if (myStack.empty() == true)
	{
		cout << "Yes." <<endl; //loop that checks if the stack is emtpy
	}
	else
	{
		cout << "No."<<endl; //if it is not empty, then no
	}
	
	cout << "New stack is the following: ";
	myStack.push(2); //pushing new element on the stack
	cout << myStack.top() << " "; //using the top function to update the current print out of the stack
    myStack.push(5);
	cout << myStack.top() << " "; 
    myStack.push(7);
	cout << myStack.top() << " "; 
    myStack.push(9);
	cout << myStack.top() << " ";
    myStack.push(11);
	cout << myStack.top() << endl;
	
	
	cout << "The top of the stack is " << myStack.top() << endl; //confirming what the top of the stack is
	
	cout << "Is the stack currently empty? "; //checking to see if this time the stack is empty
	if (myStack.empty() == true)
	{
		cout << "Yes." <<endl; //loop that checks if the stack is emtpy
	}
	else
	{
		cout << "No."<<endl; //if it is not empty, then no
	}
	
	cout << "\nPushing new value on the stack, such as 5." << endl;
	myStack.push(5); //pushing a new element onto the stack
	cout << "Now, the top of the stack is: " << myStack.top() <<endl; //reafirming what the new top of the stack is
	cout << "The size of the stack is: " << myStack.getSize() <<endl; //using the getSize function to get the current size of the stack
	cout << "\nPopping a value on the stack." << endl;
	myStack.pop(); //removing the top value on the stack
	cout << "Now, the top of the stack is again: " << myStack.top() << endl; //now seeing what the new top is
	cout << "And the size of the stack is now: " << myStack.getSize() << endl; //using the getSize function to get the new size of the stack
	
	
	//use template to create stack of doubles
	//example same as above, but with doubles from template
	Stack<double> myStack2; //create stack of ints called myStack2
	cout << "\n\nThis is the double stack.\n" <<endl;
	cout << "Is the stack currently empty? ";
	if (myStack2.empty() == true)
	{
		cout << "Yes." <<endl; //loop that checks if the stack is emtpy
	}
	else
	{
		cout << "No."<<endl;  //if it is not empty, then no
	}
	
	cout << "New stack is the following: ";
	myStack2.push(2.2); //using the top function to update the current print out of the stack
	cout << myStack2.top() << " "; 
    myStack2.push(5.5);
	cout << myStack2.top() << " "; 
    myStack2.push(7.7);
	cout << myStack2.top() << " "; 
    myStack2.push(9.9);
	cout << myStack2.top() << " ";
    myStack2.push(11.11);
	cout << myStack2.top() << endl;
	
	
	cout << "The top of the stack is " << myStack2.top() << endl; //confirming what the top of the stack is
	
	cout << "Is the stack currently empty? "; //checking to see if this time the stack is empty
	if (myStack2.empty() == true)
	{
		cout << "Yes." <<endl; //loop that checks if the stack is emtpy
	}
	else
	{
		cout << "No."<<endl; //if it is not empty, then no
	}
	
	cout << "\nPushing new value on the stack, such as 5.4." << endl;
	myStack2.push(5.4); //pushing a new element onto the stack
	cout << "Now, the top of the stack is: " << myStack2.top() <<endl; //reafirming what the new top of the stack is
	cout << "The size of the stack is: " << myStack2.getSize() <<endl; //using the getSize function to get the current size of the stack
	cout << "\nPopping a value on the stack." << endl;
	myStack2.pop(); //removing the top value on the stack
	cout << "Now, the top of the stack is again: " << myStack2.top() << endl; //now seeing what the new top is
	cout << "And the size of the stack is now: " << myStack2.getSize() << endl; //using the getSize function to get the new size of the stack
	
    return 0;
}