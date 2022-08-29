#include <stdio.h>
int a[101], n;

void quicksort(int lenft ,int righe)
{
	if (lenft > righe)
		return;

	int temp = a[lenft];//��׼�����տ�ʼ����ĵ�һλ����ߵ�һλ
	int i = lenft;//��ߣ�0��
	int j = righe;//�ұߣ�n��

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

	printf("��Ҫ���뼸����:"); scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("�ڡ�%d������:", i); scanf("%d", &a[i]);
	}

	quicksort(0, n);

	for (int i = 1; i <= n; i++)
		printf("%d\n", a[i]);

	return 0;
}