// Problem 496 A I Wanna Be the Guy
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool vis[101]={false};
    int p;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int num;
        cin>>num;
        vis[num]=true;
    }
    int q;
    cin>> q;
    for(int i=0;i<q;i++)
    {
        int num;
        cin>>num;
        vis[num]=true;
    }
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==false)
        {
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    cout<<"I become the guy.";
    return 0;
}