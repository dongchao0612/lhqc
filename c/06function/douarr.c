#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

void print_douarr(int *p,int length)
{
	int i;
	printf("[%s], size of p = %ld\n",__FUNCTION__,sizeof(p));
	for(i=0;i<length;i++)
	{
		printf("%d\t",p[i]);	
	}
	printf("\n");

}

// void print_douarr1(int (*p)[N],int m,int n)
void print_douarr1(int p[][N],int m,int n)
{
	int i,j;
	printf("[%s], size of p = %ld\n",__FUNCTION__,sizeof(p));
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%4d",p[i][j]);
			// printf("%4d",*(*(p+i)+j));	
		}
		printf("\n");
	}

}
float average_score(int *p,int length)
{
	int i;
	float sum=0;
	for(i=0;i<length;i++)
		sum+=p[i];

	return sum/length;
}
#if 0
// void find_num(int (*p)[N],int num)
void find_num(int p[][N],int num)
{	
	int i;
	for(i=0;i<N;i++)
		printf("%d\t" ,*(*(p+num)+i));
	printf("\n");
}
#endif
int *find_num(int (*p)[N],int num)
{	
	if (num>M-1)
		return NULL;
	return *(p+num);
}

int main()
{
	int a[M][N]={1,2,3,4,5,6,7,8,9,10,11,12};

	// printf("a[0][0] = %p\ta[1][0] = %p\ta[2][0] = %p\n",&a[0][0],&a[1][0],&a[2][0]);

	// print_douarr(&a[0][0],M*N);  // *a a[0]  *(a+0)
	// printf("[%s], size of a = %ld\n",__FUNCTION__,sizeof(a));
	// print_douarr1(a,M,N);
	
	// float average_scores = average_score(&a[0][0],M*N);
	// printf("average scores = %.3f\n",average_scores);
	
	int num=0;
	// find_num(a,num);
	int *result = find_num(a,num);
	if (result!=NULL)
	{	
		int i;
		for(i=0;i<N;i++)
		{
			printf("%d\t",result[i]);

		}
		printf("\n");
	}
	else
	{
		printf("can not find ");

	}



#if 0
	int i,j;

	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%4d",a[i][j]);	
		}
		printf("\n");
	}
#endif
	return 0;
}
