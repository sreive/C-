#include <stdio.h>
#include <stdlib.h>

int fun(int x)
{
	int num = 0;
	int f[10] = { 6,2,5,5,4,5,6,3,7,6 };

	while (x / 10 != 0)
	{
		num += f[x % 10];
		x = x / 10;
	}
	num += f[x];
	return num;
	
}

int main1101(void)
{
	int a, b, c, m, sum = 0;

	printf("请输入火柴棍个数："); scanf("%d", &m);

	for (a = 0; a <= 1111; a++)
	{
		for (b = 0; b <= 1111; b++)
		{
			c = a + b;

			if (fun(a) + fun(b) + fun(c) == m - 4)
			{
				printf("%d+%d=%d\n", a, b, c);
				sum++;
			}
		}
	}

	printf("总共可以拼出%d个等式\n", sum);

	return 0;
}