#include <stdio.h>
#include <stdlib.h>

# if 0

void func()
{


}

#endif

int main()
{
	int *p = NULL;

	p = (int *)malloc(sizeof(int));
	
	if(p == NULL)
		return -1;

	printf("hello world!\n");

	fclose(p);

	return 0;
}
