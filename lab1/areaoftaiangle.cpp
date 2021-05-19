#include <iostream>
#include<cmath> //to use sqrt function
using namespace std;

int main()
{
  int a,b,c; //taking input of the three sides from the user

    cout << "Enter the three sides of the triangle\n";

    cin>>a>>b>>c;

    float s=(float)(a+b+c)/2; //calculating s

    float area=sqrt(s*(s-a)*(s-b)*(s-c)); //calculating area

    cout<<"Area="<<area; //printing the area

    return 0;

}