#include <stdio.h>
#include <stdlib.h>
//void quick_sort(int arr[], int left, int rigth);
void quick_sort(int arr[], int left, int rigth)
{
	int i = left, j = rigth;
	int temp;
	int pivot;

	//��׼������Ϊ�м�Ԫ�أ�Ҳ����ѡ������Ԫ����Ϊ��׼��
	pivot = arr[(left + rigth) / 2];

	while (i <= j)
	{
		//�ҵ���ߴ��ڵ��ڻ�׼���Ԫ��
		while (arr[i] < pivot)
		{
			i++;
		}
		//�ҵ��ұߴ��ڵ��ڻ�׼���Ԫ��
		while (arr[j] > pivot)
		{
			j--;
		}

		//�������±�С���ұߣ��򻥻�Ԫ��
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	}
	//�ݹ�������������
	if (left < j)
	{
		quick_sort(arr, left, j);
	}
	//�ݹ�����Ҳ�������
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
	printf("�����Ľ���ǣ�\n");

	for (int i = 0; i < length; i++)
	{
		printf("%d\t", arr[i]);
	}
	
	return 0;
}


