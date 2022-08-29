#include <stdio.h>
#include <stdlib.h>
//void quick_sort(int arr[], int left, int rigth);
void quick_sort(int arr[], int left, int rigth)
{
	int i = left, j = rigth;
	int temp;
	int pivot;

	//基准点设置为中间元素，也可以选择其他元素作为基准点
	pivot = arr[(left + rigth) / 2];

	while (i <= j)
	{
		//找到左边大于等于基准点的元素
		while (arr[i] < pivot)
		{
			i++;
		}
		//找到右边大于等于基准点的元素
		while (arr[j] > pivot)
		{
			j--;
		}

		//如果左边下标小于右边，则互换元素
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	//递归遍历左侧子序列
	if (left < j)
	{
		quick_sort(arr, left, j);
	}
	//递归遍历右侧子序列
	if (i < rigth)
	{
		quick_sort(arr, i, rigth);
	}
}

int main02201(void)
{
	//printf("Hello\n");
	int arr[] = { 72,108,111,118,101,70,105,115,104,67,46,99,111,109,190 };

	int length;
	length = sizeof(arr) / sizeof(arr[0]);
	
	quick_sort(arr, 0, length - 1);
	printf("Hello\n");
	printf("排序后的结果是：\n");

	for (int i = 0; i < length; i++)
	{
		printf("%d\t", arr[i]);
	}
	
	return 0;
}


