#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans;
        if(a>=b) 
        {
            ans=a-b+c;
        }
        else 
        {
            ans=max(b-a,llabs(a+c-b));
        }
        cout<<ans<<endl;
    }
}