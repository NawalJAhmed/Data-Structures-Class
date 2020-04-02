///////////////// Program 2.1
//Author: Nawal Ahmed

#include <iostream>
using namespace std;

int size = 4; //remove constant and changed constant name to lowercase variable name

void printArray(int list[], int arraySize); 
void reverse(int list[], int newList[], int size) //remove constant
{
  for (int i = 0, j = size - 1; i < size; i++, j--)
  {
    newList[j] = list[i];
  }
}

void p(int list[], int arraySize) //remove constant
{
    list[0] = 100; 
}

int main()
{ //removed redunant size variable
  int newList[size];
  int numbers[] = {1, 4, 3, 6, 8};
  p(numbers, 5);
  printArray(numbers, 5); 
  reverse(numbers, newList, size);
  printArray(newList, size); 

  return 0;
}

void printArray(int list[], int arraySize)
{
  for (int i = 0; i < arraySize; i++)
  {
    cout << list[i] <<  " ";
  }
}