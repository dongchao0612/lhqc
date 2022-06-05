#include <stdio.h>
#include <stdlib.h>

int main()
{
#if 0
	int a = 9, b = 10;

	if(b++ < a)
		printf("1\n");
	else
		printf("0\n");
	
	printf("a = %d, b = %d \n",a,b);

	printf("%d\n",(++b < a, ++a, b++));
#endif

#if 0
	int a =1, b = 1, c = 2;

	if( a==b )
	{
		if(b ==c)
			printf("a = b =c \n");
	}
	else 
		printf("a != b \n");
#endif

#if 0
	/*	成 绩 分 级
	 * score	[90,100]	A
	 *			[80,90)		B
	 *			[70,80)		C
	 *			[60,70)		D
	 *			[0,60)		E
	 */
	
	int score;
	printf("please input  a score:[0~100]:");
	scanf("%d",&score);

	if (score<=0 || score >100)
	{
		fprintf(stderr,"input error!\n");
		exit(1);
	}
		
	if(score >= 90)
		puts("A");
	else if(score >= 80)
		puts("B");
	else if(score >= 70)
		puts("C");
	else if(score >= 60)
		puts("D");
	else
		puts("E");
	
	
	#if 0 
	if (score<=0 || score >100)
	{
		fprintf(stderr,"input error!\n");
		exit(1);
	}
		
	if (score >= 90 && score <= 100)
		puts("A");
	if (score >= 80 && score < 90)
		puts("B");
	if (score >= 70 && score < 80)
		puts("C");
	if (score >= 60 && score < 70)
		puts("D");
	if (score >= 0 && score < 60)
		puts("E");
	#endif
	
#endif 

	int year;

	printf("请输入一个年份:");
    scanf("%d", &year);
    
	if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
        printf("%d 是闰年\n", year);
    else
        printf("%d 不是闰年\n", year);	
	
	exit(0);
}
