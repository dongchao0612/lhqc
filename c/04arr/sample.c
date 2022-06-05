#include <stdio.h>
#include <stdlib.h>

#define M 3

int main()
{
	// int arr[M] = {1,2};
	// static int arr[M];
	static int arr[] = {1,2,3,4,5,6};
	int LEN = sizeof(arr)/sizeof(arr[0]);

	printf("size of arr  = %ld, length of arr = %d\n",sizeof(arr),LEN);
	printf("arr = %p\n",arr);

	int i;
	#if 0
	for(i=0;i<M;i++)
		scanf("%d",&arr[i]);
	#endif
	
	#if 0
	arr[3]=10; //数组越界不检查
	printf("arr[3] = %d\n",arr[3]);
	#endif

	for(i = 0;i < LEN;i++)
		printf("a[%d] = %d\t&a[%d] = %p\n",i,arr[i],i,&arr[i]);

	exit(0);
}
