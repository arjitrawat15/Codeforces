#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> freq(26,0);
        for(char ch:s)
        {
            freq[ch-'a']++;
        }
        int odd=0;
        for(auto x:freq)
        {
            if(x%2!=0)
            {
                odd++;
            }
        }
        if(odd<=k+1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}