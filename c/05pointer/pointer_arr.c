#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 5
int main()
{
	int i,j,k;
	char* name[LEN]={"follow me","basic","great","fortran","computer"};
	char* temp;
	
	printf("before sort:\n");
	
	for(i=0;i<LEN;i++)
		printf("%s\t",name[i]);

	
	for(i=0;i<LEN;i++)
	{
		for(j=0;j<LEN-1-i;j++)
		{
			if(strcmp(name[j],name[j+1])>0)
			{
				temp=name[j];
				name[j]=name[j+1];
				name[j+1]=temp;

			}
		}
	}
#if 0	
	for(i=0;i<LEN-1;i++)
	{
		k=i;
		for(j=i+1;j<LEN;j++)
		{
			if(strcmp(name[k],name[j])>0)
			{
				k=j;
			}
		}
		if(k!=i)
	`	{
			temp=name[i];
			name[i]=name[k];
			name[k]=temp;
		}
	}
#endif
	printf("\nafter sort:\n");
	
	for(i=0;i<LEN;i++)
		printf("%s\t",name[i]);
	printf("\n");
	exit(0);
}
