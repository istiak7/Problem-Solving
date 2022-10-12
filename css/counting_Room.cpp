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
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define max_size 200001

using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
//// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);

int drow[] = {-1, 0, 1, 0};
int dcol[] = {0, 1, 0, -1};

int main()
{

    int Row, Col;
    cin >> Row >> Col;
    char grid[Row][Col];
    int row, col;
    // given input matrix
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            cin >> grid[i][j];
        }
    }

    bool vis[Row][Col];
    memset(vis, false, sizeof vis);

    int cnt = 0;
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            if (grid[i][j] == '.' && vis[i][j] == false)
            {
                cnt++;
                queue<pair<int, int>> q;
                q.push({i, j});
                vis[i][j] = true;

                while (!q.empty())
                {

                    pair<int, int> cell = q.front();
                    int x = cell.first;
                    int y = cell.second;
                    q.pop();
                    // Go to the adjacent cell
                    for (int i = 0; i < 4; i++)
                    {
                        int flag = 0;
                        int adjx = x + drow[i];
                        int adjy = y + dcol[i];

                        // if cell lies out of bounds
                        if (adjx < 0 || adjy < 0 || adjx >= Row || adjy >= Col || grid[adjx][adjy] == '#')
                            continue;
                        // if cell is already visited
                        else if (vis[adjx][adjy] == true)
                            continue;
                        // otherwise
                        else
                        {
                            q.push({adjx, adjy});
                            vis[adjx][adjy] = true;
                        }
                    }
                }
            }
        }
    }
    cout << cnt << '\n';
}
