//Problem 141A Amusing Joke 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s,t,full;
    cin>>s>>t>>full;
    string str=s+t;
    sort(str.begin(),str.end());
    sort(full.begin(),full.end());
    if(str==full)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}