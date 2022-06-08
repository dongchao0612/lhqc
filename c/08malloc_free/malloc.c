#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;

	p = malloc(sizeof(int));

	if(p==NULL) {
		printf("[%d]\tp = null\n",__LINE__);
		exit(1);
	}

	*p=1;

	printf("&p = %p\t*p = %d\n",p,*p);

	free(p);
	p=NULL;

	if(p==NULL)
		printf("[%d]\tp = null\n",__LINE__);
	
	*p=123;
	printf("&p = %p\t*p = %d\n",p,*p);
	
	exit(0);
}
