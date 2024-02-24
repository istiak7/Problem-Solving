///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define per1(i,n) for(int i=n;i>=1;i--)

#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000500

using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

VLL p_number,p_digit;
ll ara[max_size],ara2[max_size];

void sieve()
{
    ara2[2]=1;
    for(ll i=3; i*i<max_size; i+=2)
    {
        if(ara[i]==0)
        {
            for(ll j=i*i; j<max_size; j+=i)
                ara[j]=1;
        }
    }
    for(ll i=4; i<max_size; i+=2)ara[i]=1;
    for(ll i=3; i<max_size; i+=2)
    {
        if(ara[i]==0)
        {
            string s = to_string(i);
            ll sum=0,x;
            for(ll j=0; j<s.size(); j++)
            {
                x=(ll)s[j]-48;
                sum+=x;

            }
            if(ara[sum]==0)ara2[i]=1;
        }
    }
}
void cnt()
{
    for(ll i=1;i<max_size;i++)
    {
         ara2[i]+=ara2[i-1];
    }
}

int main()
{
    sieve();
    cnt();
    ll t;
    scanf("%lld",&t);
    ll t1,t2;
    while(t--)
    {
        ll cnt=0;
        scanf("%lld %lld",&t1,&t2);
        if(t1!=0)t1--;
        printf("%lld\n",ara2[t2]-ara2[t1]);
    }
}

