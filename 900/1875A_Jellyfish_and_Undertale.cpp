#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> tool(n);
        for(int i=0;i<n;i++)
        {
            cin>>tool[i];
        }
        long long ans=b;
        for(int i=0;i<n;i++)
        {
            ans+=min(tool[i],a-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}