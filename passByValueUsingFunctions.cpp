#include<iostream>
using namespace std;

//program for demonstrating arithmetic operations using functions
void passByValue(int num)
{
    cout << num << endl;
    num+=5;

    cout << num << endl;
    num+=5;

    cout << num << endl;
}


int main()
    {
        int num=10;
        passByValue(num);
        cout << num << endl;
        return 0;
    }

