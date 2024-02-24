///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll countdivisor(ll n)
{
    ll divisor=1;
    int cnt;
    if(n%2==0)
    {
        cnt=1;
        while(n%2==0)
        {
            n/=2;
            cnt++;
        }
        divisor=cnt;
    }
    for(ll i=3; i*i<=n; i+=2)
    {
        if(n%i==0)
        {
            cnt=1;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }
            divisor*=cnt;
        }
    }
    if(n>2)
    {
        cnt=1;
        cnt++;
        divisor*=cnt;
    }
    return divisor;
}
int main()
{
    int n;
    cin>>n;
    cout<<countdivisor(n)<<endl;
}



