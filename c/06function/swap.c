#include <stdio.h>
#include <stdlib.h>

int print_value(int a,int b)
{
	printf("a = %d\tb = %d\n",a,b);

	return 0;
}

void swap(int* a,int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	
	return ;

}
int main()
{
	int a = 10, b = 20;
	
	print_value(a,b);
	swap(&a,&b);
	print_value(a,b);

	return 0;
}
