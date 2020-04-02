//Author: Nawal Ahmed
//Codename: blueblitz
//Lab 11

// constructing vectors
#include <iostream>
#include <vector>
int main ()
{
  // constructors used in the same order as described above:
  std::vector<int> first;                                // empty vector of ints
  std::vector<int> second (4,100);                       // four ints with value 100
  std::vector<int> third (second.begin(),second.end());  // iterating through second
  std::vector<int> fourth (third);                       // a copy of third
  
  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
  
  std::cout << "The contents of fifth are:";
  for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
  
  //assign function
  first.assign (5,50); //5 ints with a value of 50
  std::cout << "1) assign function - assigns or replaces current elements in a vector (first): ";
  for (unsigned i=0; i<first.size(); i++) //loop for printing a vector
    std::cout << ' ' << first[i];
  std::cout << '\n';
  
  //at function
  std::cout << "2) at function - refers to an element at a specific location (fifth): " << fifth.at(2);
  
  //back function
  std::cout << "\n3) back function - refers to the last element in a vector (fifth): " << fifth.back();
  
  //capacity function
  std::cout << "\n4) capacity function - returns size currently allocated for the vector (fifth): " << fifth.capacity();
  
  //clear function
  first.clear();
  std::cout << "\n5) clear function - clears all of the elements from a vector (first).";
  
  //empty function
  std::cout << "\n6) empty function - checks if a vector is empty (first): ";
  if (first.empty() == true) { //if statement determining if a vector is empty
      std::cout << "The vector is empty.";
  } else {
      std::cout << "The vector is not empty.";
  }
  
  //erase function
  fifth.erase (fifth.begin()+2); //syntax must include an iterator
  std::cout << "\n7) erase function - removes a specific elements or a range of elements (fifth): ";
  for (unsigned i=0; i<fifth.size(); i++) //loop for printing a vector
    std::cout << ' ' << fifth[i];
  std::cout << '\n';
  
  //front function
  std::cout << "8) front function - refers to the first element in a vector (fifth): " << fifth.front();
  
  //insert function
  fifth.insert(fifth.begin()+1,5); //syntax must include an iterator
  std::cout << "\n9) insert function - inserts an element at a specified position (fifth): ";
  for (unsigned i=0; i<fifth.size(); i++) //loop for printing a vector
    std::cout << ' ' << fifth[i];
  std::cout << '\n';  
  
  //size function
  std::cout << "10) size function - returns the number of elements (fifth): " << fifth.size();
  
  //max_size function
  std::cout << "11) max_size function - returns the max possible size of a vector (fifth): " << fifth.max_size();
  
  //operator =
  first = fifth;
  std::cout << "\n12) operator =  - standard equals procedure including replacing and modifying current contents.";
  std::cout << "\nfirst = fifth, so now the contents of first are (first): ";
  for (unsigned i=0; i<first.size(); i++) //loop for printing a vector
    std::cout << ' ' << first[i];
  std::cout << '\n';
  
  //operator []
  std::cout << "13) operator []  - refers to an element at a specific position similar to the at() function\nHowever it does not throw an out-of-bounds error (first): " << first[0];
  
  //pop_back function
  first.pop_back();
  std::cout << "\n14) pop_back function - removes the last element (first): ";
  for (unsigned i=0; i<first.size(); i++) //loop for printing a vector
    std::cout << ' ' << first[i];
  std::cout << '\n';  
  
  //push_back function
  first.push_back (6);
  std::cout << "15) push_back function - inserts a new element at the end of the vector (first): ";
  for (unsigned i=0; i<first.size(); i++) //loop for printing a vector
    std::cout << ' ' << first[i];
  std::cout << '\n';   
  
  return 0;
}   