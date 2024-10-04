#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter n value: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                cout<<j;

        }
        for(j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }


        for(j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}

/* output if n=4
1      1
12    21
123  321
12344321

*/
