#include <stdio.h>
#include <stdlib.h>

#define LEFT	1
#define RIGHT	100	

int main()
{
	int i, sum=0;

#if 0
	i=LEFT;
	while(i<=RIGHT)
	{
		sum+=i;
		i++;
	}
	
	printf("sum = %d\n",sum);
#endif

#if 0
	i=LEFT;
	do 
	{
		sum+=i;
		i++;

	}while(i<=RIGHT);
	
	printf("sum = %d\n",sum);
#endif

#if 0
	int start,end = 10;

	printf("please input end:");
	scanf("%d",&start);
	
	do
	{	
		sum+=start;
		start++;
	}while(start<=end);

	printf("start = %d\t",start);
	printf("sum = %d\n",sum);
#endif

#if 0
	for(i = LEFT; i <= RIGHT; i++)
		sum += i;

	printf("sum = %d\n",sum);
#endif
	i=LEFT;

loop:
	sum += i;

	i++;

	if(i <= RIGHT)
		goto loop;

	printf("sum = %d\n",sum);


	exit(0);
}
