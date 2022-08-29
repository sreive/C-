#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 101

int main0501(void)
{
	char a[SIZE], s[SIZE];
	int len, mid, nest, top;

	gets(a);
	len = strlen(a);
	mid = len / 2 - 1;

	top = 0;

	for (int i = 0; i <= mid; i++)
		s[++top] = a[i];

	if (len % 2 == 0)
		nest = mid + 1;
	else
		nest = mid + 2;

	for (int i = nest; i <= len - 1; i++)
	{
		if (a[i] != s[top])
			break;
		top--;
	}

	if (top == 0)
		printf("YES");
	else
		printf("NO");

	return 0;
}