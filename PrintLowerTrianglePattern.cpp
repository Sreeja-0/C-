#include<iostream>
using namespace std;

//program to print a lower triangle  pattern of asterisks based on the user-provided value of n.

int main()
{
    int i,j,n;
    cout<<"Enter n value: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout<<"\n";

    }
    return 0;
}

