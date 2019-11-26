#include "Bed.h" 
#include "Furniture.h"
#include <iostream>
using namespace std;

Bed::Bed(string b_n, string b_s):Furniture(b_n)  // constructor function 
{
    while(!(b_s == "King" || b_s == "Queen" || b_s == "Full" || b_s == "Twin")){  // displays an error message if an invalid input is inputted to the console
        cout << "You entered the wrong size, try again: ";
        cin >> b_s;
    }
    b_size = b_s;
    
}

Bed::~Bed()  // destructor function
{

}

void Bed::Print()  // Prints the contents from the bed class using a parent class function
{
    Furniture::Print(); 
    cout<< b_size << " size" << endl; 
}
