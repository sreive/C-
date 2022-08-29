#include <stdio.h>
#include <stdlib.h>
typedef struct node sn;
struct node
{
	int data;
	struct node* nest;
};

int main0701(void)
{
	sn* head, * p, * q, * t;
	int n, a;

	printf("您要输入几个数："); scanf("%d", &n);
	head = NULL;
	for (int i = 0; i < n; i++)
	{
		printf("第【%d】个数：", i + 1); scanf("%d", &a);
		p = (sn*)malloc(sizeof(sn));
		p->data = a;
		p->nest = NULL;
		if (head == NULL)
			head = p;
		else
			q->nest = p;
		q = p;

	}

	printf("请在插入一个数："); scanf("%d", &a);
	t = head;
	while (t != NULL)
	{
		if (t->nest->data >= a)
		{
			p = (sn*)malloc(sizeof(sn));

			p->data = a;
			p->nest = t->nest;
			t->nest = p;
			break;
		}
		t = t->nest;
	}

	t = head;
	while (t != NULL)
	{
		printf("%d\n", t->data);
		t = t->nest;
		
	}
	free(p);

	/*int* p = (int*)malloc(sizeof(int));
	*p = 10;
	
	printf("%d\n", *p);*/
	return 0;
}