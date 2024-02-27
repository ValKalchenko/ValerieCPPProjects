// pre-processor directives
#include <iostream>
#include <new>

// include header files
#include "./headers/BasicIo.h"
#include "./headers/Decisions.h"
#include "./headers/Loops.h"
#include "./headers/Functions.h"
#include "./headers/Structs.h"
#include "./headers/Circle.h"



// in C++ namespace is a collection of related functions,
// classes, objects, and variables.

// the C++ standard library functions, classes, objects, and 
// variables are in a namespace named std. 

// a way to bring in a specific object, function, class or
// variable of the std namespace into an application is with the
// help of the using declaraiton.
// using std::cout;

// another way to bring in a specific object, function, class or
// variable of the std namespace into an application is with the
// help of the using namespace statement.
using namespace std;

int main() {
    
    // int i, n;
    // int * p;
    // cout << "How many numbers would you like to type?";
    // cin >> i;
    // // this line of code is dynamically allocating memory
    // p = new (nothrow) int[i];
    // if (p == nullptr){
    //     cout << "Error: memory could not be allocated";
    // } else {
    //     for (n = 0; n < i; n++){
    //         cout << "Enter number: ";
    //         cin >> p[n];
    //     }
    //     cout << "You have entered: ";
    //     for (n = 0; n < i; n++){
    //         cout << p[n] << ", ";
    //     }
    //     // this line of code is deallocating the memory 
    //     delete[] p;
    // }

    // in order to use a C++ object, like cout, we need to
    // specify that it belongs to the std namespace.
    // one way to specify is by using the scope resolution
    // operator :: in conjunction with a reference to the 
    // name of the namespace
    // std::cout << "Hello World!";
    //cout << "Hello World!";

    /* Basic Input Output */
    // output();
    // input();

    /* Decisions */
    // decisions1();

    /* Loops */
    // loops1();

    /* Functions */
    // string student = "Valerie Kalchenko";
    // string language = "C++";
    // string programmer = "Bjarne Stroustoup";

    // congradulate1(student, language, programmer);

    /* Structs */
    // accessStructMembers();

    // declare a Person struct
    // Person p;

    // initialize the Person Structs fields
    // p.heightInMeters = 1.8;
    // p.weightInKilos = 96;

    // display computed BMI
    // cout << "Computed BMI is " << bodyMassIndex(p) << endl;
    

    /* OOP */
    // declare and initialize a Circle object using no-arg constructor 
    Circle circle1;

    // declare local variables that will be used when calling circle1's getters
    int r;
    double a;

    // output contents of circle1 to stdout
    cout << "Circle 1: ";
    circle1.printCircle();

    // call circle1's setter to change radius
    circle1.setRadius(5);

    // output contents of circle1 to stdout
    cout << "Circle 1: ";
    circle1.printCircle();

    // call circle1's compute method to change area
    circle1.compute();

    // output contents of circle1 to stdout
    cout << "Circle 1: ";
    circle1.printCircle();

    // call circle1's getter methods 
    // when calling getter methods, must provide local variable as argument
    // the value in the radius field will be placed by the getter method into the 
    // address of the local variable 
    circle1.getRadius(r);
    cout << "Radius 1: " << r << endl;

    circle1.getArea(a);
    cout << "Area 1: " << a << endl;

    // declare and initialize Circle object using one-arg constructor
    Circle circle2(3);

    //output contents of circle2 to stdout
    cout << "Circle 2: ";
    circle2.printCircle();

    // compute area of circle2
    circle2.compute();

    //output contents of circle2 to stdout
    cout << "Circle 2: ";
    circle2.printCircle();

    // output if circle1 is equal to circle2 
    cout << std::boolalpha;   
    cout << "Circle 1 equals Circle2? " << circle1.equalCircle(circle2) << endl;

    cout << "Circle 1 equals Circle2? " << (circle1.equalCircle(circle2) == 0 ? "false" : "true") << endl;
    

    return 0;
}
