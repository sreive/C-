#include <stdio.h>
#include <stdlib.h>

int main1001(void)
{
	char a[20][21];
	int i, j, sum, map = 0, p, q, x, y, n, m;

	printf("��������������: ");	scanf("%d %d", &n, &m);

	for (i = 0; i <= n - 1; i++)
	{
		printf("�����롾%d�����ַ�:", i+1); scanf("%s", &a[i]);
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
	printf("��ը��������(%d %d),����������%d������\n", p, q, map);
	return 0;
}