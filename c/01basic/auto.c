#include <stdio.h>
#include <stdlib.h>

int i=0;

void print_star()
{
	for (i = 0; i < 5; i++)
    {
		printf("*");
    }
	printf("\n");
	printf("[%s], i = %d\n",__FUNCTION__,i);
}

int main()
{
	for(i = 0;i<5;i++)
		print_star();
	printf("[%s], i = %d\n",__FUNCTION__,i);
	exit(0);
}

#if 0
int i = 100;

void func(int i)
{
	printf("i = %d\n",i);
}

int main()
{
   	int i  = 3;
	func(i);
	{
		int i=5;
		printf("i = %d\n",i);
	}
	printf("i = %d\n",i);

	exit(0);
}
#endif

#if 0
void func()
{
	static int x = 0;

	x = x + 1;
	
	printf("*x = %p, x = %d\n",&x,x);
}

int main()
{	
	#if 0
	auto int i;
	int j;
	static int k;
	printf("i = %d, j = %d, k = %d\n",i,j,k);
	
	#endif

	func();
	func();
	func();
	
	exit(0);
}
#endif
