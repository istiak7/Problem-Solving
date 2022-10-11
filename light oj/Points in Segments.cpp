#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q;cin>>n>>q;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;v.push_back(x);
    }
    while(q--){
    int A,B;cin>>A>>B;
       int idx1 = upper_bound(v.begin(),v.end(),B)-v.end();
       int idx2 = lower_bound(v.begin(),v.end(),A)-v.end();
       cout<<idx1 -idx2<<'\n';
    }
}

int main()
{
    int T;cin>>T;
    int cnt=0;
    while(T--)
    {
        cnt++;
        cout<<"Case "<<cnt<<":"<<'\n';
        solve();
    }
}
