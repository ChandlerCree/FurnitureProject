#include "Table.h"
#include "Furniture.h"  // used to call the name of the wood
#include <iostream>
using namespace std;

Table::Table(string t_n, string w_n):Furniture(t_n)  // constructor function, passed in the name of the wood from Furniture class
{
    while(!(w_n == "Pine" || w_n == "Oak"))  // displays an error message if the user enters a name for the wood that doesnt meet a specification required
    {
        cout << w_n << endl;
        cout << "You have entered an incorrect type of wood, please try again: ";
        cin >> w_n;
    }
    w_name = w_n;
};

Table::~Table()  // destructor function
{

}

void Table::Print()
{
    Furniture::Print();  // calls the function from the parent class
    cout << w_name << " wood" << endl;
}
