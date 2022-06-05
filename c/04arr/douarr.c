#include <stdio.h>
#include <stdlib.h>

#define	M 2
#define N 3
int main()
{
	int arr[M][N] = {{1,2,3},{4,5,6}};
	int i,j;

	printf("size of arr = %ld\n",sizeof(arr));
	printf("arr = %p, arr+1 = %p\n",arr,arr+1);

	#if 0
	for(i=0;i<M;i++)
		for(j=0;j<N;j++)
			scanf("%d",&arr[i][j]);
	#endif

	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
			printf("%p -> %d ",&arr[i][j],arr[i][j]);
		printf("\n");
	}
	
	exit(0);
}
