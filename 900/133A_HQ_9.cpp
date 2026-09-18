#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt=0;
    for(char ch:s)
    {
        if(ch=='H' || ch=='Q' || ch=='9')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}