#include <stdio.h>
#include <stdlib.h>

// void print_arr(int *p,int length)
void print_arr(int p[],int length)
{	
	int i;

	// printf("[%s], size of p = %ld\n",__FUNCTION__,sizeof(p));
	
	for(i=0;i<length;i++)
		printf("%d\t",*(p+i));
	printf("\n");
	
}
void fun(int *p,int length)
{
	int i = 0,j = length-1;
	
	while(i<j)
	{	
		int temp=p[i];
		p[i]=p[j];
		p[j]=temp;

		i++,j--;
	}

}
int main()
{
	int a[]={1,3,5,7,9};

	int length = sizeof(a)/sizeof(*a);
	
	// printf("[%s], size of a  = %ld\n",__FUNCTION__,sizeof(a));

	print_arr(a,length);
		
	fun(a,length); // 数组逆序
	
	print_arr(a,length);

#if 0
	for(i=0;i<sizeof(a)/sizeof(*a);i++)
		printf("%d\t",a[i]);
	printf("\n");
#endif
	return 0;
}
