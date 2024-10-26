#include<iostream>
using namespace std;

int main()
{
    char i,j,n;
    cout<<"enter n value: ";
    cin>>n;
    for(i=n;i<=n;i--)
    {
        for(j='A';j<=i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    cout<<"\r";
    return 0;
}
