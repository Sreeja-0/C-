#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter n value: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"_";
        }
        for(j=0;j<2*(n-i)-1;j++)
        {
            cout<<"*";
        }
        for(j=0;j<i;j++)
        {
            cout<<"_";
        }
        cout<<endl;
    }

    return 0;
}

/* output if n=3

*****
 ***
  *

*/
