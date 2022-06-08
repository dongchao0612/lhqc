#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 5;
	int *p = malloc(sizeof(int)*num);
	
	int i;
	for(i=0;i<num;i++)
		scanf("%d",&p[i]);

	for(i=0;i<num;i++)
		printf("%d\t",*(p+i));

	printf("\n");

	exit(0);
}
