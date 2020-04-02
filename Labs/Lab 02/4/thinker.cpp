//Author: Nawal Ahmed

#include <iostream>
#include <cstdlib> //changed std library header to the cpp version
#include <cassert> //included assert library header
#include <cstring> //included string library header
#include "thinker.h"

using namespace std; //included namespace to provide scope to the indentifiers

void thinking_cap::slots(char new_green[ ], char new_red[ ])
{
     assert(strlen(new_green) < 50); //terminate if false
     assert(strlen(new_red) < 50); //terminate if false
     strcpy(green_string,  new_green); //copy string
     strcpy(red_string, new_red); //copy string
}
void thinking_cap::push_green() const //changed to function and needs to be constant
{
     cout << green_string << endl;
}
void thinking_cap::push_red() const //changed to function and needs to be constant
{
     cout << red_string << endl;
}