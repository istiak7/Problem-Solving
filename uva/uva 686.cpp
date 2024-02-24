#include <bits/stdc++.h>
#define max_size 33768
#define ll long long int
using namespace std;
vector<ll>v;
ll ara[max_size];

bool isPrime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
void solve()
{
    v.push_back(2);
    for(ll i=3; i<=max_size; i+=2)
    {
        if(isPrime(i))v.push_back(i);
    }
}
int main()
{
    solve();
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)break;
        ll cnt=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]>n/2)break;
            if(binary_search(v.begin()+i,v.end(),n-v[i]))
            {
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
}
