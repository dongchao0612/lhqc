#include <stdio.h>
#include <stdlib.h>

#define PI 			3.1415926
#define ADD 		(2 + 3)
#define MAX1(a,b)	((a) > (b) ? (a) : (b))
#define MAX2(a,b)	({typeof(a) A = a, B = b;((A) > (B) ? (A) : (B));})

#if 0
int max(int a,int b)
{
	return a > b ? a : b;
}
#endif
int main()
{
	int a, b, c;
	int i = 5, j = 3;

	a * PI;
	b + PI;
	c / PI;
	
	// PI=5;

	//printf("ADD*ADD = %d\n",ADD*ADD);
	//printf("max = %d\n",MAX(i,j*2));

	printf("i = %d, j = %d\n",i,j);
	printf("MAX = %d\n",MAX1(i++,j++));
	printf("i = %d, j = %d\n",i,j);
	printf("*************************\n");
	i = 5, j = 3;
	printf("i = %d, j = %d\n",i,j);
	printf("MAX = %d\n",MAX2(i++,j++));
	printf("i = %d, j = %d\n",i,j);
	
	exit(0);
}
