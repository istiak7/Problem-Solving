#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   int T;
   cin>>T;
    while(T--)
    {
        priority_queue<ll,vector<ll>,greater<ll>>q;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            ll x;cin>>x;
            q.push(x);
        }
       ll ans=0,sum=0;
        while(!q.empty())
        {
           ll xx,yy;
           if(q.size()==1)
              q.pop();
           else{
           xx = q.top();
           q.pop();
           yy = q.top();
           q.pop();
           ans=xx+yy;
           q.push(ans);
           sum+=ans;
           }
        }
        cout<<sum<<'\n';
    }
 }


