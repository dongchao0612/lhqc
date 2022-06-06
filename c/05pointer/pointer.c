#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=1;
	int* p = &i;
	int** q = &p;
	// float *q;
	// double *d;
	// char *c;

	//int *p;
	// p = &i;
	
	// printf("size of i  = %ld\tsize of p = %ld\n",sizeof(i),sizeof(p));
	// printf("size of i  = %ld\tsize of q = %ld\n",sizeof(i),sizeof(q));
	// printf("size of i  = %ld\tsize of d = %ld\n",sizeof(i),sizeof(d));
	// printf("size of i  = %ld\tsize of c = %ld\n",sizeof(i),sizeof(c));
	
	printf("size of i = %d\n", sizeof(i));
	printf("size of p = %d\n", sizeof(p));
	printf("size of q = %d\n", sizeof(q));
	printf("\n");

	printf("i = %d\n", i);
	printf("&i = %p\n", &i);
	printf("\n");

	printf("p = %p\n", p);
	printf("&p = %p\n", &p);
	printf("*p = %d\n", *p);
	printf("\n");

	printf("q = %p\n", q);
	printf("&q = %p\n", &q);
	printf("*q = %p\n", *q);
	printf("**q = %d\n", **q);


	exit(0);
}
