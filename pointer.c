#include <stdio.h>

void func(int *pvalue);

int main(void)
{
	int value = 10;
	printf("\nvalue = %d\n&value = %p\n",value,&value);
	func(&value);
	printf("value = %d\n",value);
	return 0;
}

void func(int *pvalue)
{
	printf("pvalue = %p\n",pvalue);
	*pvalue = 101;
	return;
}
