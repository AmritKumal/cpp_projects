# Constructor Overloading

## What is constructor overloading?
#### **Constructor overloading in C++ programming is same as function overloading. When we create more that one constructors in a class with different number of parameters or different types of parameters or different order of parameters, it is called as constructor overloading.**

***

 Function overloading is one of the core feature of the object oriented languages. We can use the same name of the functions; whose parameter sets are different. Here we will see how to overload the constructors of C++ classes. The constructor overloading has few important concepts.

* Overloaded constructors must have the same name and different number of arguments
* The constructor is called based on the number and types of the arguments are passed.
* We have to pass the argument while creating objects, otherwise the constructor cannot understand which constructor will be called.
# Syntax

class class_name {
    
    Access Specifier :
    Member_Variables
    Member_Functions
public:

    class_name() {
        // Constructor code 
    }

    class_name(variables) {
        // Constructor code 
    }
    ... other Variables & Functions
}
***
#  Example
/*  Program Of Constructor Overloading In C++
            

#include< iostream >

#include<conio.h>

using namespace std;

class Example {

    // Variable Declaration
    int a, b;
public:

    //Constructor wuithout Argument

    Example() {
        // Assign Values In Constructor
        a = 50;
        b = 100;
        cout << "\nIm Constructor";
    }

    //Constructor with Argument

    Example(int x, int y) {
        // Assign Values In Constructor
        a = x;
        b = y;
        cout << "\nIm Constructor";
    }

    void Display() {
        cout << "\nValues :" << a << "\t" << b;
    }
};

int main() {

    Example Object(10, 20);
    Example Object2;
    // Constructor invoked.
    Object.Display();
    Object2.Display();
    // Wait For Output Screen
    getch();
    return 0;
}
***
# Output
 Im Constructor

Im Constructor

Values :10      20

Values :50      100
