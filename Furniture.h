#ifndef FURNITURE_H
#define FURNITURE_H
#include <iostream>
using namespace std;

class Furniture
{
private:
    float width; // private variables for Furniture class
    float height;
    float depth;
    string name;   

public:
    Furniture(string n);  // Constructor
    ~Furniture();  // Destructor
    void ReadDimentions();  // Function to get the dimensions from the console input
    virtual void Print();  // virtual function to print to the console
    
};

#endif
