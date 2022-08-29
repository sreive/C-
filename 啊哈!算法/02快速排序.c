#include <stdio.h>
int a[101], n;

void quicksort(int lenft ,int righe)
{
	if (lenft > righe)
		return;

	int temp = a[lenft];//基准数，刚开始输入的第一位数左边第一位
	int i = lenft;//左边（0）
	int j = righe;//右边（n）

	while (i != j)
	{
		while (a[j] >= temp && i < j)
			j--;

		while (a[i] <= temp && i < j)
			i++;

		if (i < j)
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	a[lenft] = a[i];
	a[i] = temp;

	quicksort(lenft, i - 1);
	quicksort(i + 1, righe);

}
int main0201(void)
{
	int t;

	printf("您要输入几个数:"); scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("第【%d】个数:", i); scanf("%d", &a[i]);
	}

	quicksort(0, n);

	for (int i = 1; i <= n; i++)
		printf("%d\n", a[i]);

	return 0;
}