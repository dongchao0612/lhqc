#include <stdio.h>
#include <stdlib.h>

/*
 *	const int a;
 *	int const a;
 *
 *	const int *p;
 *	int const *p;
 *
 *	int *const p;
 *
 *	const int *const p;
 *
 */

int main()
{
	int i=10,j=20;
	const int * const p=&i;
	// p=&j;  // 错误
	// *p=30; // 错误
	
#if 0
	// 指针常量
	int i=10,j=20;
	int* const p=&i;

	// p=&j; //错误
	*p=20;
	
	printf("i = %d\n",*p);

#endif

#if 0 
	// 常量指针
	int i=10,j=20;
	const int *p=&i;

	i=30; //正确
	// *p=40; //错误
	// p=&j;  //正确
	
	printf("i = %d\n",*p);
#endif

#if 0
	const float pi = 3.14;

	// pi=3;   error 
	float * p =&pi;
	
	*p = 3; // wall

	printf("pi = %lf\n",pi);
#endif
	exit(0);
}
