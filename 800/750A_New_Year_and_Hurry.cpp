// Problem - 750A New Year and Hurry
#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int total=240;
    int cnt=0;
    int time=0;
    for(int i=0;i<n;i++)
    {
        time+=5*(i+1);
        if(time+k <=total)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout<<cnt;
}
