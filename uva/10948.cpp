#include<bits/stdc++.h>
#define ll long long int
#define max_size 1000000
using namespace std;
ll ara[max_size+1];
vector<ll>v;
void sieve()
{
    v.push_back(2);
    for(ll i=3;i*i<=max_size;i+=2){
        if(ara[i]==0){
            for(int j=i*i;j<=max_size;j+=i)
                ara[j]=1;
        }
    }
    for(ll i=3;i<=max_size;i+=2){
        if(ara[i]==0)v.push_back(i);
    }
}
int main()
{
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    ll n;
     while(scanf("%lld",&n)){
      if(n==0)return 0;
      ll ans=-1,lll;
      for(ll i=0;i<v.size();i++){
        ll l=0,h=v.size()-1;
        while(l<=h){
            ll m = (l+h)/2;
            if(v[m]==n-v[i]){
                lll=i;
                ans=m;
                l=m+1;
            }
            else if(v[m]>n-v[i])h=m-1;
            else l=m+1;
        }
      }
      cout<<n<<":"<<'\n';
      if(ans==-1)cout<<"NO WAY!"<<'\n';
      else cout<<v[ans]<<"+"<<v[lll]<<'\n';
     }
}
