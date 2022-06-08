#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#if 0
struct {
	int i;
	char ch;

	union {
		int a;
		int c;
	}un;
}



union {
	int a;
	double b;
	struct{
		int arr[10];
		float f;

	}c;
};
#endif 


union
{
	struct
	{
		uint16_t i;
		uint16_t j;
	}x;
	uint32_t y;
}a;

int main()
{
	a.y = 0x11223344;
	printf("%x\n",a.x.i+a.x.j);
	
#if 0
	uint32_t i = 0x11223344;
	printf("%x\n",(i >> 16) + (i & 0xFFFF));
#endif 

	exit(0);
}
