#include<iostream>
#include<vector>
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
        if(n==1)
        {
            cout<<1<<"\n";
            continue;
        }
        if(n==2)
        {
            cout<<-1<<"\n";
            continue;
        }
        vector<long long> arr={1,2,3};
        long long sum=6;
        while((int)arr.size()<n)
        {
            arr.push_back(sum);
            sum*=2;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<(i==n-1 ? '\n':' ');
        }
    }
    return 0;
}