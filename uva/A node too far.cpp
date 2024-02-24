///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define clr_1(x) memset(x, -1, sizeof(x))
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).begin(), (v).end()
#define SORT(v) sort((v).begin(), (v).end())
#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize()                 \
	ios_base ::sync_with_stdio(0); \
	cin.tie(0);                    \
	cout.tie(0);
#define max_size 200001
#define M 100005
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;

using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
			 tree_order_statistics_node_update>
	ordered_set;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string fact[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;

int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
int drow[] = {-1, 0, 1, 0};
int dcol[] = {0, 1, 0, -1};
const int mx = 2e5 + 123;
const ll p2 = 2e18;
const ll N = 100005;

void bfs(int source)
{
}
int main()
{
	ll nc, Case = 1;
	ll in, ttl;
	while (cin >> nc, nc != 0)
	{
		map<ll, vector<ll>> g;
		for (int i = 0; i < nc; i++)
		{
			ll u, v;
			cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}

		while (cin >> in >> ttl)
		{
			if (in == 0 && ttl == 0)
				break;
			ll reach = 1;
			queue<int> q;
			map<ll, ll> dis;
			map<ll, bool> vis;
			dis[in] = 0;
			vis[in] = true;
			q.push(in);
			while (!q.empty())
			{
				int u = q.front();
				q.pop();
				for (int v : g[u])
				{
					if (vis[v] == false)
					{
						dis[v] = dis[u] + 1;
						if (dis[v] > ttl)
							break;
						vis[v] = true;
						q.push(v);
						reach++;
					}
				}
			}
			cout << "Case " << Case++ << ": " << g.size() - reach << " nodes not reachable from node " << in << " with TTL = " << ttl << "." << endl;
		}
	}
}