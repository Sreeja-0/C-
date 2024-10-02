#include<iostream>
using namespace std;

//program to print name using functions

void printName(string name)
{
    cout<<"hey "<<name;
}


int main()
    {
        string name;
        cout<<"Enter your name: ";
        cin>>name;
        printName(name);
        return 0;
    }

