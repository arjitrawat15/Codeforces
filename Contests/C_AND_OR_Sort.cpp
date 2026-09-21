#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='1') 
        {
            cout<<count(s.begin(),s.end(),'0')<<endl;
            continue;
        }
        int pos=s.find('1');
        if (pos==(int)string::npos) 
        {
            cout<<0<<endl;
            continue;
        }
        vector<int> pre(n+1,0), suf(n+2,0);
        for(int i=0;i<n;i++) 
        {
            pre[i+1]=pre[i]+(s[i]=='1');
        }
        for(int i=n-1;i>=0;i--) 
        {
            suf[i]=suf[i+1]+(s[i]=='0');
        }
        int mini=INT_MAX;
        for(int k=pos;k<=n;k++)
        {
            mini=min(mini,pre[k]+suf[k]);
        }
        cout<<mini<<endl;
    }
    return 0;
}