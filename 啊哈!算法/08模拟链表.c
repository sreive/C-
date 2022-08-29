#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int main0801(void)
{
	int data[SIZE] = { 0 }, right[SIZE] = { 0 };
	int n, t, len=NULL;
	
	printf("您要输入几个数："); scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("请输入第【%d】个数", i + 1); scanf("%d", &data[i]);
		len = n;
	}

	for (int i = 0; i < n; i++)//初始化数组 right
	{
		if (i != n)
			right[i] = i + 1;
		else
			right[i] = 0;
	}

	len++; 
	printf("请再输入一个数：");		scanf("%d", &data[len]);

	t = 1;
	while (t != 0)
	{
		if (data[right[t]] > data[len])
		{
			right[len] = right[t];
			right[t] = len;
			break;
		}
		t = right[t];
	}

	t = 1;
	while (t != 0)
	{

		printf("%d\n", data[t]);//有数组越界
		t = right[t];
	}

	return 0;
}