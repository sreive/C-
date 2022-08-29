#include <stdio.h>
#include <stdlib.h>

int main1001(void)
{
	char a[20][21];
	int i, j, sum, map = 0, p, q, x, y, n, m;

	printf("请输入行列数字: ");	scanf("%d %d", &n, &m);

	for (i = 0; i <= n - 1; i++)
	{
		printf("请输入【%d】行字符:", i+1); scanf("%s", &a[i]);
	}

	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; i <= m - 1; j++)
		{
			if (a[i][j] == '-')
			{
				sum = 0;

				x = i; y = j;
				while (a[x][y] != '#')
				{

					if (a[x][y] == 'G')
						sum++;

					x--;

				}

				x = i; y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] != 'G')
						sum++;

					x++;
				}

				x = i; y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
						sum++;

					y--;
				}
				x = i; y = j;
				while (a[x][y] != '#')
				{
					if (a[x][y] == 'G')
						sum++;

					y++;
				}

				if (sum > map)
				{
					map = sum;
					p = i;
					q = j;
				}
			}
		}
		
	}
	printf("将炸弹放置在(%d %d),最多可以消灭%d个敌人\n", p, q, map);
	return 0;
}