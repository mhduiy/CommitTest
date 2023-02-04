#include<stdio.h>

void mySwap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}

int main()
{
	printf("Hello World\n");
	return 0;
}
