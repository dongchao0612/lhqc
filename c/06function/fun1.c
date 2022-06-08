#include <stdio.h>
#include <stdlib.h>
int fun(int n)
{		
	if (n<0)
	{	
		fprintf(stderr,"%s","input error!\n");
		exit(1);

	}
	if(n==0 ||n==1)
		return 1;
	return fun(n-1)*n;

}
int main()
{

	int n=3;
	
	scanf("%d",&n);

	long long int result = fun(n);

	printf("%d! = %ld\n",n,result);

	return 0;
}
