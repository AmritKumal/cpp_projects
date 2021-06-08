#include<iostream>
using namespace std;
void functionfirst (int a)
{
    cout <<"value of abefore altering is:" << a << endl;
    a=5;
    cout <<"value of a after altering is:" << a << endl;


}
void functionrefrence (int &b)
{
    b = 20;
    cout << "/nvalue of b is :" << b << endl ;

}
int main()
{
    int a = 1;
    int b = 2;
    functionfirst(a);
    functionrefrence(b);
    cout << "value of a in main:" << a << endl;
    cout << "value of b in main:" << b << endl;
}