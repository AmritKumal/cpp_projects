#include<iostream>
using namespace std;
class interest
{
    public:
       
    void display(float principle, float rate,float time)
    {
        double i=(principle*time*rate)/100;
        cout<<"interest:"<<i;
    } 
    void display(float principle,float time)
    {
        double i=(principle*time*15)/100;
        cout<<"interest:"<<i;
    }  

};
int main()
{
    interest a;
    char answer;
    double principle,rate;
    float time;
    cout<<"enter principle:"<<endl;
    cin>>principle;
    cout<<"enter time:"<<endl;
    cin>>time;
    cout<<"do you want to enter rate:Y/N:"<<endl;
    cin>>answer;
    if (answer=='Y' || answer=='y')
    {
        cout<<"enter rate:"<<endl;
        cin>>rate;
        a.display(principle,rate,time);
    }
    else
    {
        a.display(principle,time);
    }
    
    

}