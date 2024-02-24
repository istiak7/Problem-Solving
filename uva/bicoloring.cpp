#include<bits/stdc++.h>
#define M 201
using namespace std;
vector<int>adjlist[M];
bool vis[M];
int color[M];
void add_edgelist(int u,int v)
{
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
}
 bool bipartite(int source)
 {
     memset(color,-1,sizeof color);
     queue<int>q;
     vis[source]=true;
     color[source]=1;
     q.push(source);
     while(!q.empty())
     {
         int u = q.front();
         q.pop();
         for(int v :adjlist[u])
         {
             if(vis[v]==false&&color[v]==-1)
             {
                 vis[v]=true;
                 q.push(v);
                 color[v]=1-color[u];
             }
         }
         for(int v :adjlist[u])
         {

            if(color[u]==color[v]){
                    for(int i=0;i<=M;i++)adjlist[i].clear();
                    for(int i=0;i<M;i++)vis[i]=false;
                    for(int i=0;i<M;i++) color[M]=0;
                    return false;
            }
         }
     }
     for(int i=0;i<=M;i++)adjlist[i].clear();
     for(int i=0;i<M;i++)vis[i]=false;
     for(int i=0;i<M;i++) color[M]=0;
     return true;
 }
 void bfs_Test()
 {
     int n;
     while(scanf("%d",&n)){
     if(n==0)return;
     int e;cin>>e;

     for(int i=1;i<=e;i++){
       int u,v;cin>>u>>v;
       add_edgelist(u,v);
     }
      if(bipartite(0))cout<<"BICOLORABLE."<<'\n';
      else cout<<"NOT BICOLORABLE."<<'\n';
     }
 }

int main()
{
     bfs_Test();
}

