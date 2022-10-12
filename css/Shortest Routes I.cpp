///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define clr_1(x) memset(x, -1, sizeof(x));
#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize()                \
   ios_base ::sync_with_stdio(0); \
   cin.tie(0);                    \
   cout.tie(0);
#define max_size 200001

using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
//// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

const int M = 1e5 + 123;
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;
ll dis[M];
vector<pair<ll, ll>> adj[M];
void addEdge(ll u, ll v, ll w)
{
   adj[u].push_back({v, w});
}

void dij(ll source, ll node)
{
   for (ll i = 1; i <= node; i++)
      dis[i] = INFLL;
   priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
   dis[source] = 0;
   q.push(make_pair(0, source));
   while (!q.empty())
   {
      pair<ll, ll> cur = q.top();
      q.pop();
      ll u = cur.second, d = cur.first;
      if (dis[u] < d)
         continue;
      for (pair<ll, ll> p : adj[u])
      {
         ll v = p.first, w = p.second;
         if (dis[v] > dis[u] + w)
         {
            dis[v] = dis[u] + w;
            q.push(make_pair(dis[v], v));
         }
      }
   }
}

void dij_test()
{
   ll n, m;
   cin >> n >> m;
   for (int i = 0; i < m; i++)
   {
      ll a, b, w;
      cin >> a >> b >> w;
      addEdge(a, b, w);
   }
   dij(1, n);
   for (ll i = 1; i <= n; i++)
      cout << dis[i] << " ";
   cout << '\n';
}

int main()
{
   dij_test();
}