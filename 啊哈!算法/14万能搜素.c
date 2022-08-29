#include <stdio.h>
#include <stdlib.h>

int n, m, p, q, min = 99999999;
int a[51][51], book[51][51];

void dfs2(int x, int y, int step)
{
	int next[4][2] = { {0,1},
		{1,0},
		{0. - 1},
		{-1,0}
	};

	int tx, ty;

	if (x == p && y == q)
	{
		if (step < min)
			min = step;

		return;
	}

	for (int k = 0; k <= 3; k++)
	{
		tx = x + next[k][0];
		ty = y + next[k][1];

		if (tx<1 || tx>n || ty<1 || ty>m)
			continue;
	}

	if (a[tx][ty] == 0 && book[tx][ty] == 0)
	{
		book[tx][ty] = 1;
		dfs2(tx, ty, step + 1);
		book[tx][ty] = 0;
	}
	return;

}

int main1401(void)
{
	int strtx, strty;
	printf("请输入行列: ");	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
			scanf("%d", &a[i][j]);
	}

	printf("请输入起点和终点坐标："); scanf("%d %d %d %d ", &strtx, &strty, &p, &q);

	book[strtx][strtx] = 1;
	dfs2(strtx, strty, 0);

	return 0;
}