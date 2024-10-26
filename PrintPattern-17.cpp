#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter n value: ";
    cin>>n;
    for(int i =0;i<n;i++)
    {
        for(char j='A';j<'A'+i+1;j++)
        {
            cout<<j;
        }
        for(char j='A'+i-1;j>='A';j--)
        {
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}

/*output if n is E
A
ABA
ABCBA
ABCDCBA
ABCDEDCBA

*/
