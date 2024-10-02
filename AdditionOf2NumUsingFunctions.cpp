#include<iostream>
using namespace std;

//program to add two numbers using functions

void sum(int a,int b)
{
    int c;
    c=a+b;
    cout<<"sum of "<< a <<" and "<< b <<" is : "<<c;
}


int main()
    {
        int a,b;
        cout<<"Enter a and b values: \n";
        cin>>a>>b;
        sum(a,b);
        return 0;
    }

