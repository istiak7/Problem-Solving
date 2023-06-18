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
#define print(ans)              \
	for (int i = 0; i < n; i++) \
		cout << ans[i] << " ";  \
	cout << endl;
#define endl '\n'
#define optimize()                 \
	ios_base ::sync_with_stdio(0); \
	cin.tie(0);                    \
	cout.tie(0);
#define max_size 200001
#define M 100005
#define arr array
using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
typedef deque<ll> DQ;
typedef pair<ll, pair<ll, ll> > pi;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
			 tree_order_statistics_node_update>
	ordered_set;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string fact[] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
const ll INF = 2000000000;
const ll INFLL = 9000000000000000000;
/*	vector<vector<ll> > a(n,vector<ll>(2));
		rep(i, n)cin >> a[i][0];
*/
int dx[] = {0, 0, +1, -1, -1, +1, -1, +1};
int dy[] = {+1, -1, 0, 0, -1, +1, +1, -1};
int d_row[] = {-1, 0, 1, 0};
int d_col[] = {0, 1, 0, -1};
const int mx = 2e5 + 123;

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<vector<int> > a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			a[i][j] = s[j] - '0';
		}
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int sum = a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1];
			if (sum == 3){
				cout << "NO" << endl ;
				return;
			}
		}
	}
	cout << "YES"<< endl;
}
int main()
{
	int T;
	cin >> T;
	while (T--)
		solve();
}
