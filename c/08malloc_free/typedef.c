#include <stdio.h>
#include <stdlib.h>

/*
#define INT int
typedef int INT;

INT i;	--> int i;


define IP  int *
typedef int *IP;

IP p,q;	-->	int *p, q;
IP p;	--> int *p, *q;

typedef int ARR[6];  --> int [6]  ->>	ARR
ARR a;	-->	 int a[6];


struct node_st
{
	int i;
	float f;
};
typedef struct node_st NODE;
NODE a;	-->	struct node _st a;
NODE *p;	-->struct node_st *p;

typedef struct node_st * NPDEP;
NPDEP p;	-->	struct node_st *p;


typedef struct
{
	int i;
	float f;
}NPDE, *NODEP;

typedef int FUNC(int)  ->int(int)  ->FUNC;
FUNC f --> int f(int);

typedef int *FUNCP(int);   //指针函数
DUNCP p;	--> int *p(int);

typedef int *(*FUNCP(int));  //指向指针函数的指针
FUNCP P;  --> int *(*p)(int);



*/
typedef int INT;

int main()
{
	INT i = 100; // int i;
	printf("i = %d\n",i);
	
	exit(0);
}	
