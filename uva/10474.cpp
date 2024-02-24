#include<bits/stdc++.h>
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void b_s(int n,int q)
{
    static int cnt=0;
    cnt++;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout<<"CASE# "<<cnt<<":"<<'\n';
    for(int i=1; i<=q; i++)
    {
        int T;
        cin>>T;
        int idx = lower_bound(v.begin(),v.end(),T)-v.begin();
        if(v[idx]==T)
        {
            cout<<T<<" found at "<<idx+1<<'\n';

        }
        else
        {
            cout<<T<<" not found"<<'\n';
        }
    }
}
int main()
{
    optimize();
    int n,q;
    while(cin>>n>>q)
    {
        if(n==0&&q==0)return 0;
        b_s(n,q);
    }
}
