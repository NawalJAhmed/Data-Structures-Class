//Author: Nawal Ahmed
//Codename: blueblitz
//Lab13 A - Lists

#include <iostream>
#include <list> //constructing lists
using namespace std;

void printList(list <int> g) { //creates a function that will print out the list
    for(list<int>::iterator iter = g.begin(); iter != g.end(); iter++){ //to traverse through the list, an iterator pointing must be used
	cout << " " <<*iter; //it is possible to avoid iterators if using C++11, however for compatibility reasons, iterators are recommended
	}
}

bool even(int& value) { //function that determines if a number is even. used later for the remove_if function
    return (value % 2) == 0;
    }

int main() {
    list <int> mylist1; //creating list
    list <int> mylist2; //creating another list
    
    list<int> :: iterator iter = mylist1.begin(); //begin function. also initialize list iterator
    cout << "Begin function implemented." << endl;

    cout << "Assign function:";
    mylist1.assign(3,50); //assigns a count and a value. create 3 occurrences of element 50
    printList(mylist1); //calls the printList function which will display all the elements in a list

    cout << "\nInsert function:";
    mylist1.insert(iter,4); //inserts an element at a certain iterator position
    printList(mylist1);

    cout << "\nBack function: ";
    cout << mylist1.back(); //refers to the back of the list

    cout << "\nPush_back function:";
    mylist1.push_back(7); //pushes an element at the back of the list
    printList(mylist1);

    cout << "\nPush_front function:";
    mylist1.push_front(6); //pushes an element at the front of the list
    printList(mylist1);

    cout << "\nEmpty function: ";
    if (mylist1.empty() == true) { //if function that determines if the list is empty of elements or not
        cout << "The list is empty.";
    } else {
        cout << "The list is not empty.";
    }

    cout << "\nPop_back function: ";
    mylist1.pop_back(); //pops whichever element is at the back of the list
    printList(mylist1);

    cout << "\nPop_front function:";
    mylist1.pop_front(); //pops whichever element is at the front of the list
    printList(mylist1);

    cout << "\nSort function:";
    mylist1.sort(); //sorts the positions of the elements in the list in ascending order
    printList(mylist1);

    cout << "\n= function implemented. mylist2:";
    mylist2 = mylist1; //can be used to copy the elements from one list to another
    printList(mylist2);

    cout << "\nClear function on mylist implemented.";
    mylist1.clear(); //erases all the elements in a list

    cout << "\nRemove function implemented. Remove value 50:"; 
    mylist2.remove(50); //removes all instances of a certain element in a list
    printList(mylist2);

    cout << "\nRemove_if function implemented. Remove even numbers.";
    mylist2.remove_if(even); //removes elements from a list given a condidition, in this case, even numbers

    if ((mylist1.size() == 0) && (mylist2.size() == 0)) { //since even numbers were removed from the list, there are no more elements left
        cout << "\nSize function: 0 elements in mylist1 and mylist 2." <<endl; //the size function should determine the size of the list is 0
    } else {
        cout << "\nSize function: More that 0 elements in mylist1 and mylist 2." <<endl;
    }
    return 0;
}
