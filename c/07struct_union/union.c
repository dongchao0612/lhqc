#include <stdio.h>
#include <stdlib.h>

union test_un{
	int i;
	float f;
	double d;
	char ch;
};
int main()
{

	union test_un a;
	union test_un *p=&a;

	a.f=345.678;
	p->i=10;

	printf("size of a  = %ld\n",sizeof(a));
	
	//printf("a.f = %f\n",a.f);
	printf("a.d = %d\n",a.i);
	
	exit(0);
}
