#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 字符数组：
// 1、单词计数
#define STRSIZE 128

int main()
{
	char str[STRSIZE];
	int count=0,flag = 0,i;

	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] == ' '|| str[i] == '\t')
		{
			flag=0;
		}
		else //str[i] is a char
		{
			if(flag==0)
			{
				count++;
				flag=1;
			}
		}
	}
	printf("cout = %d\n",count);

	exit(0);
}
