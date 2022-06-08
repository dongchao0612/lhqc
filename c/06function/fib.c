#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
	if(n < 1)
	{
		fprintf(stderr,"%s","input error!\n");
		exit(1);
	}

	if(n == 1||n == 2)
		return 1;
	
	return fib(n-1)+fib(n-2);
}

int main()
{
	int n;
	scanf("%d",&n);

	// int result = fib(n);
	// printf("fib(%d) = %d\n",n,result);

	int i;
	for(i = 1;i <= n;i++)
		printf("%d\t",fib(i));
	printf("\n");

	return 0;
}
