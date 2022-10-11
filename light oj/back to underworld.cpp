#include<bits/stdc++.h>
#define M 20001
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
vector<int>adjlist[M];
void add_edge_list(int u,int v)
{
    adjlist[u].push_back(v);
    adjlist[v].push_back(u);
}

void bfs_test()
{
    int node;
    cin>>node;
    for(int i=0;i<node;i++)
    {
        int u,v;
        cin>>u>>v;
        add_edge_list(u,v);
    }
}

int main()
{
    optimize();
    int T,c=0;
    cin>>T;
    while(T--){
      c++;
      for(int i=0;i<=M;i++)adjlist[i].clear();
        bfs_test();
        int mx=0;
    for(int i=0;i<M;i++){
        int ss = adjlist[i].size();
        mx = max(mx,ss);
    }
    cout<<"Case "<<c<<": "<<mx<<'\n';
    }

}
