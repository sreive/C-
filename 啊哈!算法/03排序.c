#include <stdio.h>
#include <stdlib.h>

//Ͱ����
int main0301(void)
{
	int a[1001] = { 0 }, n, t;

	printf("��Ҫ���뼸����: "); scanf("%d", &n);

	for (int i = 0; i < n;i++)
	{
		printf("�ڡ�%2d����:", i + 1); scanf("%d", &t);
		a[t] = 1;
	}

	for (int i = 0; i < 1001; i++)
	{
		if (a[i] == 1)
			printf("%d\n", i);
	}
	
	return 0;
}

int main0302(void)
{
	int a[101], n, t;
	printf("��Ҫ���뼸���飺"); scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("�ڡ�%d�����飺", i + 1); scanf("%d", &a[i]);
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	printf("%d", a[0]);
	for (int i = 1; i < n; i++)
	{
		if (a[i] != a[i - 1])
		{
			printf("%d\n", a[i]);
		}
	}
	return 0;
}