#include <bits/stdc++.h>
using namespace std;
#define Row 9
#define Col 9

int d_row[] = {-2, -1, 1, 2, -2, -1, 1, 2};
int d_col[] = {-1, -2, -2, -1, 1, 2, 2, 1};

int dis[Row][Col];
bool isValid(bool vis[][Col],
			 int row, int col)
{
	if (row <= 0 || col <= 0 || row >= Row || col >= Col)
		return false;
	if (vis[row][col])
		return false;
	return true;
}
void bfs(bool vis[][Col],
		 int row, int col)
{
	queue<pair<int, int>> q;
	vis[row][col] = true;
	dis[row][col] = 0;
	q.push({row, col});
	while (!q.empty())
	{
		pair<int, int> cell = q.front();
		int x = cell.first;
		int y = cell.second;
		q.pop();
		for (int i = 0; i < 8; i++)
		{
			int adjx = x + d_row[i];
			int adjy = y + d_col[i];
			if (isValid(vis, adjx, adjy))
			{
				q.push({adjx, adjy});
				vis[adjx][adjy] = true;
				dis[adjx][adjy] = dis[x][y] + 1;
			}
		}
	}
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int x1, y1, x2, y2;
		x1 = (s1[0] - 'a') + 1, x2 = (s2[0] - 'a') + 1;
		y1 = s1[1] - '0', y2 = s2[1] - '0';
		bool vis[Row][Col];
		memset(vis, false, sizeof vis);
		bfs(vis, x1, y1);
		cout << "To get from " << s1 << " to " << s2 << " takes " << dis[x2][y2] << " knight moves." << endl;
		memset(dis,0,sizeof dis);
	}
}