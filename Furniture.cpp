#include <iostream>
#include "Furniture.h"
using namespace std;

Furniture::Furniture(string n)  // Constructor function, to create name of furniture
{
    name = n;
}

Furniture::~Furniture() // Destructor function 
{

}

void Furniture::ReadDimentions()  // function called to read the dimensions of the passed in furniture
{
    cout << "--Please enter the width: ";
    cin >> width;
    while(width < 0)// error message displayed if the width doesnt meet the requirement
    {  
        cout << "Sorry you must enter a number greater than 0." <<endl;
        cout << "--Please enter the width: ";
        cin >> width;
    }
    
    cout << "--Please enter the height: ";
    cin >> height;
    while(height < 0)  // error message displayed if the height doesnt meet the requirement
    {
        cout << "Sorry you must enter a number greater than 0." << endl;
        cout << "--Please enter the height: ";
        cin >> height;
    }
    
    cout << "--Please enter the depth: ";
    cin >> depth;
    while(depth < 0) // error message displayed if the depth doesnt meet the requirement
    {
        cout << "Sorry you must enter a number greater than 0." << endl;
        cout << "--Please enter the depth: ";
        cin >> depth;
    }
}

void Furniture::Print()
{
    cout << name << endl;
    cout << "--The Width == " << width << ", The Height == " << height << ", The Depth == " << depth << endl;
}
