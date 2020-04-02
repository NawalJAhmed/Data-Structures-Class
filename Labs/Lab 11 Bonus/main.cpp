//Author: Nawal Ahmed
//Codename: blueblitz
//Lab 11 Bonus 1

#include <iostream>
#include <queue> //required to implement queues
using namespace std;

int main () {
    cout << "The unsorted elements are: 6 4 5 7" << endl;
    
    priority_queue <int> max; //create a priority queue.
    max.push(6); //push elements
    max.push(4);
    max.push(5);
    max.push(7);

    cout << "Max priority queue:";

    while (!max.empty()) { //loop that prints out the elements in the queue by the current top element until the queue is empty.
            cout << " " << max.top();
            max.pop();
        }

    priority_queue <int, vector<int>, greater<int> > min;  //creating a min STL prioriity queue. you use the greater function.
    min.push(6); //push same elements
    min.push(4);
    min.push(5);
    min.push(7);

    cout << "\nMin priority queue:";

    while (!min.empty()) { //loop printing out elements in the queue by the current top element. notice the top is the element of the least value.
        cout << " " << min.top();
        min.pop();
    }
}