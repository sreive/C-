#include <stdio.h>
#include <stdlib.h>
#define SIZE 100


int main0401(viod)
{
	int q[] = { 6,3,1,7,5,8,9,2,4 }, head, tail;
	head = 0;
	tail =9;
	while (head < tail)
	{
		printf("%d\n", q[head]);
		head++;

		q[tail] = q[head];
			tail++;

		head++;
	}

	return 0;
}
struct queue
{
	int data[SIZE];
	int head;
	int tail;
};

int main0402(void)
{
	struct queue q;
	q.head = 0;
	q.tail = 0;
	for (int i = 0; i < 9; i++)
	{
		printf("������ڡ�%d��������",i+1); scanf("%d", &q.data[q.tail]);
		q.tail++;
	}

	while (q.head < q.tail)
	{
		//��ӡ���ײ������׳���
		printf("%d", q.data[q.head]);
		q.head++;
		//�Ƚ��¶��׵�����ӵ���β
		q.data[q.tail] = q.data[q.head];
		q.tail++;
		//�ٽ����׳���
		q.head++;
	}

	return 0;
}