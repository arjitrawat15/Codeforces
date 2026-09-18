#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int total=0;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr.rbegin(),arr.rend()); 
    int sum=0;
    int cnt=0;
    for(auto it:arr) 
    {
        sum+=it;
        cnt++;
        if(sum>total-sum) 
        {
            cout<<cnt;
            break;
        }
    }
    return 0;
}