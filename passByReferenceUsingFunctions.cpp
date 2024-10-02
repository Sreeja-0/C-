#include<iostream>
using namespace std;

//program for demonstrating pass by reference
void passByReference(string s)
{
    s[0] = 'm';
    cout << s << endl;
}


int main()
{
    string s = "we";
    passByReference(s);
    cout << s << endl;
    return 0;
}

