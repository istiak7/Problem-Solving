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
const ll N = 1005;
VLL g[N];
bool vis[N];
int col[N];
bool ok;
int white, black, ans;
void dfs(int u)
{
	vis[u] = true;
	if (col[u] == 0)
		white++;
	else
		black++;
	for (auto v : g[u])
	{
		if (!vis[v])
		{
			col[v] = col[u] ^ 1;
			dfs(v);
		}
		else
		{
			if (col[v] == col[u])
				ok = false;
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
		int n, m;
		cin >> n >> m;
	
		while (m--)
		{
			int u, v;
			cin >> u >> v;
			g[u].pb(v);
			g[v].pb(u);
		}
		ok = true ,ans = 0;
		for (int i = 0; i < n; i++)
		{
			if (!vis[i])
			{
				white = 0, black = 0;
				dfs(i);
				if (ok)
				{
					ans += min(white, black);
					if (white == 0 || black == 0)
						ans += max(white,black) ;
				}
			}
		}
		
	    if (ok)
			cout << ans << endl;
		else
			cout << "-1" << endl;
		for (int i = 0; i < N; i++)
		{
			vis[i] = false;
			col[i] = 0;
			g[i].clear();
		}
	}
}