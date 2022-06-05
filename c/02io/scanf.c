#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 3

int main()
{
	int i;
	float f;
	char str[STRSIZE];
	char ch;

	printf("please enter :\n");

	//scanf("%d%f",&i,&f);
	//scanf("%s",str);
	
	
	//printf("i = %d, f = %f\n",i,f);
	//printf("str = %s\n",str);
	//puts(str);

	/*
	while(1)
	{
		int ret = scanf("%d",&i);
		if (ret != 1)
		{
			printf("Enter error!\n");
			break;
		}
		printf("i = %d\n",i);
	}
	*/

	//scanf("%d%*c",&i);//抑制符
	scanf("%d",&i);
	getchar();
	//ch = getchar();
	scanf("%c",&ch);

	printf("i = %d, ch = %c\n",i,ch);


	exit(0);
}
