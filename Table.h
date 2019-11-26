#ifndef TABLE_H
#define TABLE_H

#include "Furniture.h"
#include <iostream>
using namespace std;

class Table: public Furniture  // child class Table from parent class Furniture
{
private:
    string w_name; // private variable

public:
    Table(string t_n, string w_n);  // constructor function
    ~Table(); // destructor function
    
    void Print(); // calls function to print the name of the wood

};

#endif
