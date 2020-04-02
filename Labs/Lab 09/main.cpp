//Author: Nawal Ahmed
//Lab09
//codename: blueblitz

#include <iostream>
using namespace std;

//Syntax:
//class subclass_name : public superclass_name { };

//Removed functionalities for volume and age, as it did not seem necessary

class rail_car { //superclass railcar
    public: rail_car () {} 
};

class box_car : public rail_car { //subclass will create new object that prints out text
    public: box_car () { 
        cout << "Box Car" << endl;
    }
};

class tank_car : public rail_car { //subclass will create new object that prints out text
    public: tank_car () {
        cout << "Tank Car" << endl;
    }
};

class engine : public rail_car { //subclass will create new object that prints out text
    public: engine () {
        cout << "Engine Car" << endl;
    }
};

class caboose : public rail_car { //subclass will create new object that prints out text
    public: caboose () {
        cout << "Caboose Car" << endl;
    }
};

rail_car *train[10]; //reduced to 10 for the sake of simplicity

main ( ) {
    
//Instructions for the Program
cout << "There are 4 types of rail cars available for the rail train: Box Cars, Tank Cars, Engine Cars, and Caboose Cars." << endl;
cout << "To insert rail cars onto the rail train, type a rail code." << endl;
cout << "0 = Engine Car, 1 = Box Car, 2 = Tank Car, 3 = Caboose Car" << endl;
cout << "Press 4 to look at the rail line." << endl;
cout << "Press 5 to replace a car." << endl;
cout << "When you want to find out how many cars are on the rail train, enter a number other than a rail code, 4, or 5 such as 6.\n" << endl;

int car_count, type_code; //variables used to control the program and move through the array

// Read type number and create corresponding objects:
for (car_count = 0; cin >> type_code; ++car_count) //Pressing a code of 0 through 3 will create a new object that will display text
    if (type_code == 0)      train[car_count] = new engine;
    else if (type_code == 1) train[car_count] = new box_car;
    else if (type_code == 2) train[car_count] = new tank_car;
    else if (type_code == 3) train[car_count] = new caboose;
    else if (type_code == 4) { //for loop that is supposed to print out the text for every position
        for (car_count = 0; car_count < 10; car_count++) {
            cout << "Position " << car_count << ": " << train[car_count] << endl; //did not create pointer to dereference
        }
    }
    else if (type_code == 5) { //if statement that will ask for position number and a code to replace the position with
        cout << "Enter the Position Number you want to replace: ";
        cin >> car_count;
        cout << "Now enter the rail code number for that Position: ";
        cin >> type_code;
        if (type_code == 0)      train[car_count] = new engine;
        else if (type_code == 1) train[car_count] = new box_car;
        else if (type_code == 2) train[car_count] = new tank_car;
        else if (type_code == 3) train[car_count] = new caboose;
    }
    //when anything other than a specified code is pressed, the number of cars will display
    else if (type_code != 0 && type_code != 1 && type_code != 2 && type_code != 3 && type_code != 4 && type_code != 5) {
        cout << "There are " << car_count << " cars in the rail line." << endl;
        car_count = car_count - 1; //since pressing a number would increase the car count, it must be decremented to maintain accuracy.
    }
}
