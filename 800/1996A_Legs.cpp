// Problem 1996A Legs
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cows=n/4;
        n=n%4;
        int chickens=n/2;
        cout<<cows+chickens<<"\n";
    }
}