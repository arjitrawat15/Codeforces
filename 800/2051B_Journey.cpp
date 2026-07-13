// Problem 2051B Journey
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,b,c;
        cin>>n>>a>>b>>c;
        long long sum=a+b+c;
        long long cycle=n/sum;
        long long days=cycle*3;
        long long rem=n%sum;
        if(rem==0)
        {
            cout<<days<<"\n";
        }
        else if(rem<=a)
        {
            cout<<days+1<<"\n";
        }
        else if(rem<=a+b)
        {
            cout<<days+2<<"\n";
        }
        else
        {
            cout<<days+3<<"\n";
        }
    }
    return 0;
}