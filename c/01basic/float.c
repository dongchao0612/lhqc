#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int func(float f)
{
	if(f < 0 )
		return -1;
	//else if(f == 0)
	else if (fabs(f - 0) <1e-6)
		return 0;
	else
		return 1;

}
int main()
{
	float f=0;
	
	printf("result = %d\n",func(f));
	
	exit(0);
}	
