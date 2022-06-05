#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 32

int main()
{
	printf("hello world\n");
	
	int a = 10, b = 20;
	printf("a = %d, b = %d\n",a,b);

	char ch='A';
	printf("ch = %c, ch = %d\n",ch,ch);
	
	int i = 123;
	printf("i = %4d \n",i);
	printf("i = %2d \n",i);

	float f=123.456;
	printf("f = %f \n",f);
	printf("f = %8.1f \n",f);
	printf("f = %20f \n",f);
	
	double d=123.456;
	printf("d = %lf\n",d);

	long long int l=123456;
	printf("l = %lld\n",l);

	int j = 255;
	printf("j = %o, j =  %x\n",j,j);
	printf("j = %#o, j = %#x\n",j,j);

	char str[STRSIZE]="hello world";
	printf("str = %s\n",str);
	printf("str = %5s\n",str);
	printf("str = %10.5s\n",str);
	printf("str = %-10.5s[over]\n",str);

	printf("i = %d, f =  %e\n",i,f);
	printf("i = %d, f =  %e\n",i);
	printf("i = %d, f =  %e\n",i,f,l);

	printf("[%s \t %d]\n",__FUNCTION__,__LINE__);
	//while(1);
	sleep(5);
	printf("[%s \t %d]\n",__FUNCTION__,__LINE__);

	

	exit(0);
}
