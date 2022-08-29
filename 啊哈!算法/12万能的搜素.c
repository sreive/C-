#include <stdio.h>
#include <stdlib.h>

int a[10], book[10], n;

void dfs(int step)
{
	int i;
	if (step == n + 1)
	{
		for (i = 1; i <= 9; i++)
			printf("%d", a[i]);
		putchar('\n');
		return;
	}

	for (i = 1; i <= n; i++)
	{
		if (book[i] == 0)
		{
			a[step] = i;
			book[i] = 1;

			dfs(step + 1);
				book[i] = 0;
		}
	}
	return;
}


int main1201(viod)
{
	printf("请输入（1-9）之间的整数：");
	scanf("%d", &n);
	dfs(1);

	return 0;
}