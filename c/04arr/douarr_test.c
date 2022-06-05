#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3
#define K 2

//  二维数组：
// 1、行列互换
static void change()
{
	int a[M][N]={{1,2,3},{4,5,6}},b[N][M];
	int i,j;
	
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",a[i][j]);
			b[j][i]=a[i][j];
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}

// 2、求最大值及其所在位置
static void max()
{
	int a[M][N]={{43,4,23},{89,9,7}};
	int i,j;
	int max=a[0][0],row=0,colum=0;

	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				row=i;
				colum=j;
			}
		}
	}
	
	printf("max = %d, row = %d, colum = %d\n",max,row,colum);
}


// 3、求各行各列的和
static void sum()
{
	int a[M+1][N+1]={{43,4,23},{89,9,7}};
	int i,j;
	for(i=0;i<M+1;i++)
	{
		for(j=0;j<N+1;j++)
		{
			printf("%4d ",a[i][j]);
		}
		printf("\n");
	}
	printf("**********************\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			a[M][N] += a[i][j];
			a[M][j] += a[i][j];
			a[i][N] += a[i][j];
		}
	}

	for(i=0;i<M+1;i++)
	{
		for(j=0;j<N+1;j++)
		{

			printf("%4d ",a[i][j]);
		}
		printf("\n");
	}
}
// 4、矩阵乘积
static void multiply()
{
    int a[M][N] = {1,2,3,4,5,6};
    int b[N][K] = {1,0,0,1,1,0};
    int c[M][K] = {0};
	int i,j,k;

    for( i = 0; i < M; i++)
    {
        for( j = 0; j < K; j++)
        {
            for( k = 0; k < N; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

	 for(i = 0; i < M; i++)
    {
        for( j = 0; j < K; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
		

}
int main()
{
	// change();
	// max();
	// sum();
	multiply();
	exit(0);
}
