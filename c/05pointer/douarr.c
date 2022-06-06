#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a[2][3] = {1,2,3,4,5,6};
	int i,j;
	int *p = *a;
	int (*q)[3] = a;
	
	printf("&q = %p\t&q+1 = %p\n",q,q+1);
	printf("&a = %p\t&a+1 = %p\n",a,a+1);
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%p -> %d\t",*(q+i)+j,*(*(q+i)+j));
		printf("\n");
	}

#if 0
	// p=a; (w)
	// p=*a;
	p=&a[0][0];

	for(i=0;i<6;i++)
		printf("%d\t",p[i]);
	printf("\n");
#endif


#if 0
	printf("&a = %p\t&a+1 = %p\n",a,a+1);

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			// printf("%p -> %d\t",&a[i][j],a[i][j]);
			printf("%p -> %d\t",*(a+i)+j,*(*(a+i)+j));
		}
		printf("\n");
	}
#endif
	exit(0);
}
