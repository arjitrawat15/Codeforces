// 59A problem A Word
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int up=0;
    int lo=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            lo++;
        }
        else
        {
            up++;
        }
    }
    if(lo>=up)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);   
    }
    cout<<s<<endl;
}