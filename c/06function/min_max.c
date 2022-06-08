#include <stdio.h>
#include <stdlib.h>

int Max(int a,int b,int c)
{
	int temp;
	temp = a > b ? a : b;
	return temp > c ? temp : c;
}

int Min(int a,int b,int c)
{

	int temp;
	temp = a <b ? a : b;
	return temp < c ? temp : c;
}

int dist(int a,int b,int c)
{

	int min = Min(a,b,c);
	int max = Max(a,b,c);
	
	return max-min;
}

int main()
{
	int a=3,b=5,c=10;
	
	int result = dist(a,b,c);
	
	printf("result = %d\n",result);

	return 0;
}
