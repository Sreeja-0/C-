#include<iostream>
using namespace std;
int main()
{
    char i,j,n;
    cout<<"enter a character: ";
    cin>>n;
    for(i='A';i<=n;i++)
    {
        for(j='A';j<=i;j++)
        {
                cout<<j;


        }
        cout<<endl;
    }
    return 0;
}

/* output if n=E
A
AB
ABC
ABCD
ABCDE

*/
