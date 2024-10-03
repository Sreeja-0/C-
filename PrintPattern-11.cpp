#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter n value: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }

        }
        cout<<endl;
    }

    return 0;
}

/* output if n=5
1
01
101
0101
10101

*/
