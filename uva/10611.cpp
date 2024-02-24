#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
void solve()
{
    int q_value;
    cin>>q_value;
    int lo=lower_bound(v.begin(),v.end(),q_value)-v.begin();
    int hi=upper_bound(v.begin(),v.end(),q_value)-v.begin();
    if(lo==0)cout<<"X ";
    else
    {
        if(v[lo-1]==q_value)cout<<"X ";
        else cout<<v[lo-1]<<" ";
    }
    if(v[hi]==q_value||hi==v.size())cout<<"X "<<'\n';
    else cout<<v[hi]<<'\n';

}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }

}
