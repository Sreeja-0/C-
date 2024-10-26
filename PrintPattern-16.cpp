#include<iostream>
using namespace std;

int main()
{
    char i,j,n;
    cout<<"enter n value: ";
    cin>>n;
    for(i='A';i<=n;i++)
    {
        for(j='A';j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    cout<<"\r";
    return 0;
}


/*output if n is E
A
BB
CCC
DDDD
EEEEE

*/
