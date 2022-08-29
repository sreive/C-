#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

struct queue
{
	int data[SIZE];
	int head;
	int tail;
};

struct stack
{
	int data[10];
	int top;
};

int main0601(void)
{
	struct queue q1, q2;
	struct stack s;
	int book[10];
	int t;

	q1.head = 1; q1.tail = 1;
	q2.head = 1; q2.tail = 1;

	s.top = 0;

	for (int i = 0; i < 9; i++)
	{
		book[i] = 0;
	}

	printf("������С�ߵ�6����:\n");

	for (int i = 0; i < 6; i++)
	{
		printf("�ڡ�%d���ţ�", i + 1); scanf("%d", &q1.data[q1.tail]);
		q1.tail++;
	}
	printf("������С����6����:\n");
	for (int i = 0; i < 6; i++)
	{
		printf("�ڡ�%d���ţ�", i + 1);	scanf("%d", &q2.data[q2.tail]);
		q2.tail++;
	}

	while (q1.head < q1.tail && q2.head < q2.tail)
	{
		t = q1.data[q1.head];

		if (book[t] == 0)
		{
			q1.head++;
			s.top++;
			s.data[s.top] = t;
			book[t] = 1;
		}

		else
		{

			q1.head++;
			q1.data[q1.tail] = t;
			q1.tail++;
			while (s.data[s.top] != t)
			{
				book[s.data[s.top]] = 0;
				q1.data[q1.tail] = s.data[s.top];
				q1.tail++;
				s.top--;
			}
		}

		t = q2.data[q2.head];

		if (book[t] == 0)
		{
			q2.head++;
			s.top++;
			s.data[s.top] = t;
			book[t] = 1;
				
		}
		else
		{

			q2.head++;
			q2.data[q2.tail] = t;
			q2.tail++;
			while (s.data[s.top] != t)
			{
				book[s.data[s.top]] = 0;
				q2.data[q2.tail] = s.data[s.top];
				q2.tail++;
				s.top--;
			}
		}
	}

	if (q2.head == q2.tail)
	{
		printf("С��win\n");
		printf("С�ߵ�ǰ���е�����");
		for (int i = q1.head; i < q1.tail - 1; i++)
			printf(" %d", q1.data[i]);
		if (s.top > 0)
		{
			printf("\n���ϵ�����");
			for (int i = 0; i < s.top; i++)
				printf(" %d", s.data);
		}
		else
			printf("\n�������Ѿ�û������");
	}

	else
	{
		printf("С��win\n");
		printf("С����ǰ���е�����");
		for (int i = q2.head; i < q2.tail - 1; i++)
			printf(" %d", q2.data[i]);
		if (s.top > 0)
		{
			printf("\n�����ϵ�����");
			for (int i = 0; i < s.top; i++)
				printf(" %d", s.data[i]);
		}
		else
			printf("\n�������Ѿ�û������");
	}
	return 0;
}