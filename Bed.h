#ifndef BED_H
#define BED_H 

#include <string>
#include "Furniture.h"

using namespace std;

// Bed is a child class of Furniture
class Bed: public Furniture{
private:
    string b_size;
public:
    Bed(string b_n, string b_s);
    ~Bed();
    void Print();
};

#endif
