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
		printf("请输入第【%d】个数：",i+1); scanf("%d", &q.data[q.tail]);
		q.tail++;
	}

	while (q.head < q.tail)
	{
		//打印队首并将队首出队
		printf("%d", q.data[q.head]);
		q.head++;
		//先将新队首的数添加到队尾
		q.data[q.tail] = q.data[q.head];
		q.tail++;
		//再将队首出队
		q.head++;
	}

	return 0;
}