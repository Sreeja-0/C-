#include<iostream>
using namespace std;

//program for demonstrating arithmetic operations using functions

void sum(int a,int b)
{
    int c;
    c=a+b;
    cout<<"sum of "<< a <<" and "<< b <<" is : "<<c<<endl;
}

void sub(int a,int b)
{
    int c;
    c=a-b;
    cout<<"subtraction of "<< a <<" and "<< b <<" is : "<<c<<endl;
}

void mul(int a,int b)
{
    int c;
    c=a*b;
    cout<<"product of "<< a <<" and "<< b <<" is : "<<c<<endl;
}

void division(int a,int b)
{
    if(b==0)
    {
        cout<<"division by zero not allowed"<<endl;
    }
    else
    {
        int c;
        c=a/b;
        cout<<"division of "<< a <<" and "<< b <<" is : "<<c<<endl;
    }
}


void modulo(int a,int b)
{
    int c;
    c=a%b;
    cout<<"modulo of "<< a <<" and "<< b <<" is : "<<c<<endl;
}


int main()
    {
        int a,b;
        cout<<"Enter a and b values: \n";
        cin>>a>>b;
        sum(a,b);
        sub(a,b);
        mul(a,b);
        division(a,b);
        modulo(a,b);
        return 0;
    }

