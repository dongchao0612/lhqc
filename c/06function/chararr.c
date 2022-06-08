#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define STRSIZE	 128

char * mystrcpy1(char* dest,const char* src)
{
	char* ret=dest;
	int i;
	for(i=0;src[i] !='\0' ;i++)
	{
		dest[i]=src[i];	
	}
	return ret;
}
char * mystrcpy2(char* dest,const char* src)
{
	char* ret=dest;
	int i=0;
	while(src[i] !='\0')
	{
		dest[i]=src[i];	
		i++;
	}
	return ret;
}

char * mystrncpy1(char* dest,const char* src,int n)
{
	char* ret=dest;
	int i;
	for(i=0;src[i] !='\0' && i<n ;i++)
	{
		dest[i]=src[i];	
	}
	dest[i]='\0';
	return ret;
}
char * mystrncpy2(char* dest,const char* src,int n)
{
	char* ret=dest;
	int i=0;
	while(src[i] !='\0' && i<n )
	{
		dest[i]=src[i];	
		i++;
	}
	dest[i]='\0';
	return ret;
}
int main()
{
	char str1[]="helloworld";
	char str2[STRSIZE]="";
	
	mystrcpy1(str2,str1);
	printf("mystrcpy1\t");
	puts(str2);
	
	strcpy(str2,"");
	
	mystrcpy2(str2,str1);
	printf("mystrcpy2\t");
	puts(str2);
	
	puts("**************");
	strcpy(str2,"");
	
	mystrncpy1(str2,str1,5);
	printf("mystrncpy1\t");
	puts(str2);
	
	strcpy(str2,"");
	
	mystrncpy2(str2,str1,3);
	printf("mystrncpy2\t");
	puts(str2);
	
	return 0;
}
