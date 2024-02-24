#include<bits/stdc++.h>
#define max_size 33768
#define ll long long int
using namespace std;
vector<int>v;
int ara[max_size];

void sieve()
{
    v.push_back(2);
    for(int i=4;i<=max_size;i+=2)ara[i]=1;
    for(int i = 3; i*i<=max_size; i+=2)
    {
        for(int j = i*i; j<=max_size; j+=i+i)
        {
            ara[j]=1;
        }
    }
    for(int i=3; i<=max_size; i+=2)
    {
        if(ara[i]==0)
        {
            v.push_back(i);
        }
    }
}
int main()
{
    sieve();
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)return 0;
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
