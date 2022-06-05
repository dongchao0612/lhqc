#include <stdio.h>
#include <stdlib.h>

#include "proj.h"
 
static int i = 100;


void func()
{
	printf("[%s], i = %d\n",__FUNCTION__,i);
	exit(0);
}

static void static_func()
{
	printf("[%s], i = %d\n",__FUNCTION__,i);
	exit(0);
}

void call_func()
{
	static_func();
}
