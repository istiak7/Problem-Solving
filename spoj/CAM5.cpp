
///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define per1(i,n) for(int i=n;i>=1;i--)
#define clr_1(x) memset(x,-1,sizeof(x));
#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000500
#define M 100001
using namespace std;
vector<int>adjlist[M];
bool vis[M];
void adjedge(int u,int v)
{
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
}

void bfs(int source)
{
    queue<int>q;
    vis[source]=true;
    q.push(source);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v:adjlist[u])
        {
            if(vis[v]==false)
            {
                vis[v]=true;
                q.push(v);
            }
        }
    }
}
void bfs_test()
{
    int node;
    cin>>node;
    int edge;
    cin>>edge;

    for(int i=0;i<edge;i++)
    {
        int u,v;cin>>u>>v;
        adjedge(u,v);
    }

    int cnt=0;
    for(int i=0;i<node;i++)
    {
        if(vis[i]==false){cnt++;
         bfs(i);
        }
    }
    cout<<cnt<<'\n';
    for(int i=0;i<M;i++)adjlist[i].clear();
    for(int i=0;i<M;i++)vis[i]=false;
}

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--){
    bfs_test();
    }
}








