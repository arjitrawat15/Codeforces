#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int odds=(n+1)/2;
    if(k<=odds)
    {
        cout<<2*k-1<<endl;
    }
    else
    {
        k-=odds;
        cout<<2*k<<endl;
    }
}