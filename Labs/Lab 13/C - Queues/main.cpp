//Author: Nawal Ahmed
//Codename: blueblitz
//Lab13 C - Queues

#include <iostream>
#include <queue> //queues are FIFO
using namespace std;

void printQueue(queue <int> g) { //creates a function that will print out the queue
    for (;!g.empty();g.pop()) { //while the queue isn't empty, print the elemenet at the top then pop it and continue
        cout << " " << g.front(); 
    } 
}

int main() {
    queue <int> myqueue1; //creating queue
	queue <int> myqueue2; //creating another queue
	priority_queue<int> mypriorityqueue; //creating a priority queue for the top function
	
	cout << "Push function:"; //pushing multiple elements to the queue
	myqueue1.push(13);
	myqueue1.push(15);
	myqueue1.push(12);
	myqueue1.push(14);
	printQueue(myqueue1); //calling the printQueue function which will display all the elements in the specified queue
	
	cout << "\nPop function:";
	myqueue1.pop(); //removes the element at the top of the queue
	printQueue(myqueue1);
	
	cout << "\nFront function: ";
	int front = myqueue1.front(); //due to the nature of queues, the first element pushed in, is at the front
	cout << front;
	
	cout << "\nBack function: ";
	int back = myqueue1.back(); //since the queue is FIFO, the last element pushed in, is at the back
	cout << back;
	
	cout << "\n= function implemented. myqueue2 = myqueue1:";
	myqueue2 = myqueue1; //can be used to copy the elements in a queue to another
	printQueue(myqueue2);
	
	cout << "\nEmpty function: ";
	if (myqueue2.empty() == true) { //determines if the queue is empty or not
		cout << "The queue is empty.";
	} else {
		cout << "myqueue2 is not empty.";
	}
	
	cout << "\nSize function for myqueue2: ";
	int size = myqueue2.size(); //determines the number of elements in the stack
	cout << size;
	
	cout << "\nTop function: "; //the top function is meant for priority queues
	mypriorityqueue.push(13); //pushing elements to the priority queue
	mypriorityqueue.push(15);
	mypriorityqueue.push(12);
	int top = mypriorityqueue.top(); //the top element in a priority queue is the largest
	cout << top << endl;
	
	return 0;
}
