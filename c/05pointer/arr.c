#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[]={5,1,7,2,8,3};
	int y;
	int *p=&a[1];

	y=(*--p)++;
	printf("y = %d\n",y);
	printf("a[0] = %d\n",a[0]);

#if 0
	int *p=(int [3]){1,2,3};
	int i;
	for(i=0;i<3;i++)
		printf("%p - > %d\t",&p[i],p[i]);
	printf("\n");
	
#endif

#if 0
	int a[3];
	int *p=a;
	int i;


	for(i=0;i<sizeof(a)/sizeof(*a);i++)
		printf("%p - > %d\t",&a[i],a[i]);
	printf("\n");

	for(i=0;i<sizeof(a)/sizeof(*a);i++)
		scanf("%d",p++);
	p=a;
	for(i=0;i<sizeof(a)/sizeof(*a);i++,p++)
		printf("%p - >%d\t",p,*p);
	printf("\n");

#endif

#if 0
	int a[3]={1,2,3};
	int *p = a;
	int i;

	printf("%p,%p\n",a,a+1);
	printf("%p,%p\n",p,p+1);

	for(i=0;i<sizeof(a)/sizeof(*a);i++)
	{
		// printf("%p - > %d\t",a+i,a[i]);
		// printf("%p - > %d\t",p+i,p[i]);
		printf("%p - > %d\t",p+i,*(p+i));
	}
	printf("\n");
#endif
	exit(0);
}
