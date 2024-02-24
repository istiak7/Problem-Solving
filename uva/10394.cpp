#include<bits/stdc++.h>
#define ll long long
#define max_size 20000000
using namespace std;
ll ara[max_size+5];
vector<pair<ll,ll>>v;
void sieve()
{
    for(ll i=4; i<=max_size; i+=2)ara[i]=1;
    for(ll i = 3; i*i<=max_size; i+=2)
    {
        for(ll j = i*i; j<=max_size; j+=i)
        {
            ara[j]=1;
        }
    }
    for(ll i=3; i<=max_size; i+=2)
    {
        if(ara[i]==0&&ara[i+2]==0)
        {
          v.push_back(make_pair(i,i+2));
        }
    }
}
int main()
{
    sieve();
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        cout<<"("<<v[n-1].first<<", "<<v[n-1].second<<")"<<'\n';
    }
}
