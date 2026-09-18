#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    int n=s.size();
    string ans="";
    while(i<n)
    {
        if(i+2<n && s.substr(i,3)=="WUB")
        {
            i+=3;
            if(!ans.empty() && ans.back()!=' ') ans+= ' '; //adding space        
        }
        else
        {
            ans+=s[i];
            i++;
        }
    }
    if(!ans.empty() && ans.back()==' ') ans.pop_back();
    cout<<ans<<endl;
}