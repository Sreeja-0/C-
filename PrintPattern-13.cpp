#include<iostream>
using namespace std;
int main()
{
    int i,j,n,num=1;
    cout<<"enter n value: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
                cout<<num;
                num++;

        }
        cout<<endl;
    }
    return 0;
}

/* output if n=4
1
23
456
78910

*/
