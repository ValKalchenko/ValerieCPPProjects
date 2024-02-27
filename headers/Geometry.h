// pre-processor directives
#include <iostream>

// use C++ standard library namespace
using namespace std;

// declare class
class Geometry
{
    // class members (fields, constructors, methods) may have 
    // the following modifiers: public, private, protected
    // this class is going to be an abstract class (like a 
    // java interface) b/c its only method is going to be virtual 
    // it will have a delaration only and not a body
    public: 
        // must use keyword virtual when declaring a virtual 
        // method and must initialize it to zero.
        virtual void compute() = 0;
};