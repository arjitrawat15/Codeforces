#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mini=0;
        int cnt=0;
        int dots=0;
        bool consecutive=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.')
            {
                dots++;
                cnt++;
                if(cnt>=3) //as only to minimise the action 1 not 2. 
                //so just need to find at min how many cells we have to water
                {
                    consecutive=true;
                }
            }
            else
            {
                cnt=0;
            }
        }
        if(consecutive)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<dots<<endl;
        }
    }
}