#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string1[100],string2[100];
    cout<<"Input your string:"<<endl;
    cin>>string1;
    strcpy(string2,string1);
    cout<<"string copied is:"<<string2<<endl;
}
