// Problem 2114A A Square Year
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int x=stoi(s);
        int y=sqrt(x);
        if(y*y==x)
        {
            cout<<0<<" "<<y<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }   
    return 0;
}