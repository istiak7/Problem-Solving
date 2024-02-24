#include<bits/stdc++.h>
#define M 100
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
    char c;cin>>c;
    int node = c-'A';
    string s;
    getline(cin,s);
    while(getline(cin,s))
    {
        if(s.length()==0)
            break;
        int u = s[0]-'A';
        int v = s[1]-'A';
        adjedge(u,v);
    }
    int cnt=0;
    for(int i=0;i<=node;i++)
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
    int t;
    cin>>t;
    while(t--){
    bfs_test();
    if(t)cout<<'\n';
    }
}
