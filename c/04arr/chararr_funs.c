#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define STRSIZE 32
/*
 *
 * strlen & sizeof
 * strcpy & strncpy
 * strcat & strncat
 * strcmp & strncmp
 */
int main()
{
	char str[STRSIZE]="hello";
	// printf("strlen(str) = %ld\tsizeof(str) = %ld\n",strlen(str),sizeof(str));
	
	// strcpy(str,"abcde");
	// strncpy(str,"abcde",STRSIZE);
	
	// strcat(str," ");
	// strcat(str,"world!");
	
	// strncat(str," " ,STRSIZE);
	// strncat(str,"word!",STRSIZE);
	
	// puts(str);
	
	char str1[STRSIZE]="helloa";

	// printf("%d\n",strcmp(str,str1));
	printf("%d\n",strncmp(str,str1,5));
	
	exit(0);
}
