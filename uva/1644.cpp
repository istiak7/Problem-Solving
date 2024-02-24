#include<bits/stdc++.h>
#define ll long long int
#define max_size 1299710
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
bool is_prime(ll n){
 for(ll i=2;i*i<=n;i++){
    if(n%i==0)return false;
 }return true;
}
int main()
{
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    ll n;
     while(scanf("%lld",&n)){
      if(n==0)return 0;
       if(is_prime(n)){cout<<0<<'\n';continue;}
      for(ll i=0;i<v.size();i++){
           if(n<v[i]){
            cout<<v[i]-v[i-1]<<'\n';
            break;
           }
      }
  }
}

