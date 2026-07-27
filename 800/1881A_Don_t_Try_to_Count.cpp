// Problem 1881A Don't try to count
#include<iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n,m;
        string x,s;
        cin>>n>>m>>x>>s;
        string t=x;
        int ans=-1;
        for(int i=0;i<5;i++) 
        {
            if(t.find(s)!=string::npos) 
            {
                ans=i;
                break;
            }
            t+=t;
        }
        cout<<ans<<endl;
    }
    return 0;
}