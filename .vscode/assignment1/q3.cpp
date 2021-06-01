#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin>>num;
    if(num>0){
    cout<<num<<" is a positive number";
}
else if(num<0){
    cout<<num<<" is a Negative number";
}
else{
    cout<<" Zero";
}
getch();
    return 0;
}