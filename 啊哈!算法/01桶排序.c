#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

int tong(int* a, int s1)
{
	for (int i = 0; i < s1; i++)
	{

		printf("��[%d]������", i);	scanf("%d", &s1);

		a[s1]++;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < a[i]; j++)
		{
			printf("%d", i);
		}
		putchar('\n');
	}
	return s1;
}

int main0101(void)
{
	int a[10] = { 0 }, t;
	printf("��Ҫ���뼸����:");
	scanf("%d", &t);


	tong(a, t);
	
	return 0;
}

//Ͱ����
void book_t(int a[],int n)
{
	
	for (int i = 0; i <SIZE; i++)
	{
		for (int j = 0; j < a[i]; j++)
		{
			printf("%d\n", i);
		}
	}
	

}

int main0102(void)
{
	int book[SIZE] = { 0 }, n, t;

	printf("��Ҫ���뼸����:");	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("�ڡ�%d������:", i + 1); scanf("%d", &t);
		book[t]++;
	}
	book_t(book,SIZE);
	
	
	return 0;
}
//Ͱ����




//����C����ð������

void bsort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j =  n - 1 - i; j > i; j--)
		{
			if (a[j-1] > a[j])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
}

int main0103(void)
{
	int i; 
	int height[5];

	printf("������5�˵����\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%2d��:", i + 1); scanf("%d", &height[i]);
	}

	bsort(height, 5);

	puts("����������.");
	for (int i = 0; i < 5; i++)
	{
		printf("%2d�ţ� %d\n", i + 1, height[i]);
	}

	return 0;
}

int main0104(void)
{
	int a[SIZE] = { 0 }, t, n;
	

	printf("��Ҫ���뼸����:"); scanf("%d", &n);

	for (int j = 0; j < n; j++)
	{
		printf("�ڡ�%d����: ", j + 1);	scanf("%d", &t);
		a[t]++;//��¼���뼸�ʹ�����Ǹ�λ��
	}
	printf("%d\n", a[20]);
	printf("%d\n", a[100]);
	printf("%d\n", a[22]);
	printf("%d\n", a[30]);

	for (int k = SIZE; k > 0; k--)//��ĩβ��ʼ�������
	{
		for (int m = 0; m < a[k]; m++)//С�������е��������
		{
			printf("%d\n", k);
		}
	}
	return 0;
}