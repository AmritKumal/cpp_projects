#include<iostream>
using namespace std;
float area_of_triangle(float,float);
int main()
{
    float base,height,area;
    cout<<"input base and height:"<<endl;
    cin>>base>>height;
    area=area_of_triangle(base,height);
    cout<<"area of triangle is:"<<area<<endl;    
} 
float area_of_triangle(float b,float h)
{
    float area;
    area=((0.5)*b*h);        
    return area;
}