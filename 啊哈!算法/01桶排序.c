#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

int tong(int* a, int s1)
{
	for (int i = 0; i < s1; i++)
	{

		printf("第[%d]个数：", i);	scanf("%d", &s1);

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
	printf("您要输入几个数:");
	scanf("%d", &t);


	tong(a, t);
	
	return 0;
}

//桶排序
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

	printf("您要输入几个数:");	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("第【%d】个数:", i + 1); scanf("%d", &t);
		book[t]++;
	}
	book_t(book,SIZE);
	
	
	return 0;
}
//桶排序




//明解C语言冒泡排序

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

	printf("请输入5人的身高\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%2d号:", i + 1); scanf("%d", &height[i]);
	}

	bsort(height, 5);

	puts("按升序排列.");
	for (int i = 0; i < 5; i++)
	{
		printf("%2d号： %d\n", i + 1, height[i]);
	}

	return 0;
}

int main0104(void)
{
	int a[SIZE] = { 0 }, t, n;
	

	printf("您要输入几个数:"); scanf("%d", &n);

	for (int j = 0; j < n; j++)
	{
		printf("第【%d】个: ", j + 1);	scanf("%d", &t);
		a[t]++;//记录输入几就存放在那个位置
	}
	printf("%d\n", a[20]);
	printf("%d\n", a[100]);
	printf("%d\n", a[22]);
	printf("%d\n", a[30]);

	for (int k = SIZE; k > 0; k--)//从末尾开始遍历输出
	{
		for (int m = 0; m < a[k]; m++)//小于数组中的数才输出
		{
			printf("%d\n", k);
		}
	}
	return 0;
}