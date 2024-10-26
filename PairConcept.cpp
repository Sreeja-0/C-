#include<iostream>
#include<utility>
using namespace std;


void explainPair()
{

        pair<int,int> p1={1,3};
        cout<<"{"<<p1.first<<", "<<p1.second<<"}";
        cout<<endl;

        pair<int,float> p2={2,2.7};
        cout<<"{ "<<p2.first<<", "<<p2.second<<"}";
        cout<<endl;

        pair<int,pair<int,int>> p3={2,{3,4}};
        cout<<"{ "<<p3.first<<", "<<p3.second.first<<","<<p3.second.second<<"}";
        cout<<endl;

        pair<int,int> arr[]={{1,2},{2,4},{4,6}};
        cout<<arr[1].second;
}
int main()
{
    explainPair();
    return 0;
}



