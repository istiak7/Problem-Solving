#include <bits/stdc++.h>
using namespace std;
vector<int> g[200];
bool vis[200];
int dis[200];
map<int, string> mp;
void adjlist(int u, int v)
{
    g[u].push_back(v);
    g[v].push_back(u);
}

void bfs(int source)
{
    queue<int> q;
    for (int i = 1; i <= 200; i++)
        dis[i] = 1e9;
    dis[source] = 0;
    vis[source] = true;
    q.push(source);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : g[u])
        {
            if (vis[v] == false)
            {
                dis[v] = dis[u] + 1;
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int u, v;
        u = (s1[0] - 'A') + (s1[1] - 'A');
        v = (s2[0] - 'A') + (s2[1] - 'A');
        mp[u] = s1;
        mp[v] = s2;
        adjlist(u, v);
    }
    string s1, s2;
    cin >> s1 >> s2;
    int source = s1[0] - 'a' + s1[1] - 'a' ;
    int dest   = s2[0] - 'a' + s2[1] - 'a' ;

    bfs(source);
    int flag = 1 ;
    for(auto v : mp){
        if(vis[v.first]== false){
            flag = 0 ;
           cout << v.first << endl ;
         }
    }
    if(flag == 0) cout << "No route" << endl ;
    else 
        {
            cout << "route" << endl ;
        }
}