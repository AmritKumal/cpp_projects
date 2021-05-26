 #include <iostream>
 using namespace std;

 struct student
 {  
     char name[20];
     char address[30];
     int roll;
 };

 int main()
 {
     student s;
     cout << "enter information" << endl;
     cout << "enter name:";
     cin >> s.name;
     cout<<" enter address:";
     cin>> s.address;
     cout<< "enter roll:";
     cin >>s.roll;

     cout<<"\ndisplay information," <<endl;
     cout<<"name:"<<s.name<<endl;
     cout<<"address:"<<s.address<<endl;
     cout<<"roll:"<<s.roll<<endl;
     return 0;   
     }