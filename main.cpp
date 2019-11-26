#include <iostream>
#include "Furniture.h"
#include "Table.h"
#include "Bed.h"
using namespace std;

int main(){
    //declaration of local variables
    string t_name;
    string w_name;
    string b_name; 
    string b_size;
    
    cout << "Creating table..." << endl;
    cout << "--Enter name: ";
    cin >> t_name; // take in user input for the table name
    cout << "--Enter wood type (Pine, Oak): " ;
    cin >> w_name; // take in user input for the wood name
    Table t(t_name, w_name);  // create a Table Object
    t.ReadDimentions();  // read the dimensions of the newly created Table object
    
    cout << "Creating bed..." << endl;
    cout << "  Enter name: " ;
    cin >> b_name; 
    cout << "  Enter size (Twin, Full, Queen, King): ";
    cin >> b_size;
    Bed b(b_name, b_size);  // create a Bed Object
     b.ReadDimentions();  // read the dimensions of the newly created Bed object
    
    cout << endl << "Printing objects ... " << endl;
    cout << endl;
    
    t.Print();  // Prints out the contents of the created table
    b.Print();  // Prints out the contents of the created Bed

};
