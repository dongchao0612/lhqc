#include <stdio.h>
#include <stdlib.h>

// 一维数组
// 1、求fibonacci数列的前十项，并在数组中逆序存放
 
#define LEN 10
static void test1()
{
	int		i, j, temp;
	static int	fib[LEN] = { 1, 1 };

	for ( i = 2; i < LEN; i++ )
		fib[i] = fib[i - 1] + fib[i - 2];

	for ( i = 0; i < LEN; i++ )
		printf( "%d\t", fib[i] );
	printf( "\n" );

	i = 0, j = LEN - 1;
	while ( i < j )
	{
		temp	= fib[i];
		fib[i]	= fib[j];
		fib[j]	= temp;

		i++;
		j--;
	}

	for ( i = 0; i < LEN; i++ )
		printf( "%d\t", fib[i] );
	printf( "\n" );
}



// 2、数组排序：冒泡，选择法，快速排序
// 冒泡排序
static void test2()
{
	int	i, j, temp;
	int	arr[LEN] = { 12, 8, 45, 30, 98, 67, 2, 7, 68, 11 };

	printf( "冒泡排序:\nsort before:\n" );
	for ( i = 0; i < LEN; i++ )
		printf( "%d\t", arr[i] );
	printf( "\n" );

	for ( i = 0; i < LEN - 1; i++ )
	{
		for ( j = 0; j < LEN - 1 - i; j++ )
		{
			if ( arr[j] > arr[j + 1] )
			{
				temp		= arr[j];
				arr[j]		= arr[j + 1];
				arr[j + 1]	= temp;
			}
		}
	}

	printf( "sort after:\n" );
	for ( i = 0; i < LEN; i++ )
		printf( "%d\t", arr[i] );
	printf( "\n" );
}

//选择排序 
static void test3()
{
	int	i, j, temp;
	int	arr[LEN] = { 12, 8, 45, 30, 98, 67, 2, 7, 68, 11 };

	printf( "选择排序:\nsort before:\n" );
	for ( i = 0; i < LEN; i++ )
		printf( "%d\t", arr[i] );
	printf( "\n" );

	for ( i = 0; i < LEN - 1; i++ )
	{
		int k = i;
		for ( j = i + 1; j < LEN; j++ )
		{
			if ( arr[j] < arr[k] )
			{
				k = j;
			}
		}
		if ( i != k )
		{
			temp	= arr[i];
			arr[i]	= arr[k];
			arr[k]	= temp;
		}
	}

	printf( "sort after:\n" );
	for ( i = 0; i < LEN; i++ )
		printf( "%d\t", arr[i] );
	printf( "\n" );
}

// 3 、进制转换
#define SIZE 64
static void base_convert()
{
	int n[SIZE];

	int num;
	printf( "请输入待转换的数值：\n" );
	scanf( "%d", &num );

	int base;
	printf( "请输入带转换的进制：\n" );
	scanf( "%d", &base );
	
	int i = 0;
	do
	{
		n[i]	= num % base;
		num	= num / base;
		i++;
	}
	while ( num != 0 );

	for ( i--; i >= 0; i-- )
	{
		if(n[i]>=10)
			printf("%c",n[i]-10+'A');
		else
			printf( "%d", n[i] );
	}
	printf( "\n" );
}
// 4、删除法求质数
#define LS 101
static void primer()
{	
	int i,j;
	char primer[LS] = { 0 };

	for ( i = 2; i < LS; i++ )
	{
		if ( primer[i] == 0 )
		{
			for ( j = i * 2; j < LS; j += i )
			{
				primer[j] = -1;
			}
		}
	}

	for ( i = 2; i < LS; i++ )
	{
		if ( primer[i] == 0 )
		{
			printf( "%d\t", i );
		}	
	}
	printf( "\n" );
}
int main()
{
	// test1();
	// test2();
	// test3();
	// base_convert();
	primer();
	exit( 0 );
}
