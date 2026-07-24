//Problem 1901A Line Trip
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>arr;
        arr.push_back(0);
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            arr.push_back(num);
        }
        arr.push_back(x);
        n=arr.size();
        int maxi=INT_MIN;
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
            {
                maxi=max(maxi,2*(arr[i]-arr[i-1]));
            }
            else
            {
                maxi=max(maxi,arr[i]-arr[i-1]);
            }
        }
        cout<<maxi<<endl;
    }
}