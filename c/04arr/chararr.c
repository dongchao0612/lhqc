#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
	int i;
	// char str[N] = {'A','B'};
	char str[N] = "abc",str1[N],str2[N];
	

	scanf("%s%s%s",str,str1,str2);	
	printf("%s\t%s\t%s\n",str,str1,str2);

	// gets(str);
	// puts(str);

	// printf("size of str = %ld\n",sizeof(str));

	#if 0
	for(i=0;i<N;i++)
		printf("%c ",str[i]);

	printf("\n");
	#endif
	exit(0);
}
