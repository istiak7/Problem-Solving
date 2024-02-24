#include<bits/stdc++.h>
#define ll long long int
#define mx 100
#define pb push_back
using namespace std;
ll ara2[1000001];
vector<int>v;
void sieve()
{
    for(ll i=2; i*i<=1000001; i++)
    {
        if(ara2[i]==0)
        {
            v.pb(i);
            for(ll j=i*i; j<=100001; j+=i)
            {
                ara2[j]=1;
            }
        }
    }
}
bool isPrime(ll number)
{
    bool flag=true;
    for(int l= 2; l*l<=number; l++)
    {
        if(number % l == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    sieve();
    while(1)
    {
        ll n;
        cin>>n;
        if(n==0)break;
        int flag=0;
        for(int i=1; i<v.size(); i++)
        {
            if(isPrime(n-v[i])==true)
            {
                cout<<n<<" = "<<v[i]<<" + "<<n-v[i]<<'\n';
                flag=1;
                break;
            }
        }
        if(flag==0)cout<<"Goldbach's conjecture is wrong."<<'\n';
    }
}
