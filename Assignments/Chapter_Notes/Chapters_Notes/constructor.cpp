//cpp project to illustrate the
//concept of constructor
#include <iostream>
using namespace std;

class construct
{
    public:
    int a,b;

    //default constructor
    construct()
    {
        a=10;
        b=20;
    }
};

int main()
//default constructor called automatically
//when the object is created
{
construct c;
cout <<"a:" <<c.a<<endl;
cout<<"b:"<<c.b;
return 1;
}