#include<iostream>
using namespace std;
class student 
{
    public:
        char name[30];
        int roll;
        char address[30];
        double percentage;
        void input()
        {
       
            cout<<"enter name:"<<endl;
            cin>>name;
            cout<<"enter roll:"<<endl;
            cin>>roll;
            cout<<"enter address:"<<endl;
            cin>>address;
            cout<<"enter percentage:"<<endl;
            cin>>percentage;
        }
        void display()
        {
            if (percentage>40)
            {
                cout<<"name:"<<name<<endl;
                cout<<"roll:"<<roll<<endl;
                cout<<"address:"<<address<<endl;
            }
            else
            {
                cout<<"sorry!you failed."<<endl;
            }
        
        }
};
int main()
{
    student s;
    s.input();
    s.display();
}