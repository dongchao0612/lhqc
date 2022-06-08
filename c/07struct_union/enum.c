#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum day
{
	MON = 1,
	TUS,
	THR,
	WES,
	FRI = 1,
	SAT,
	SUN
};

enum
{
	STATE_RUNNING = 1,
	STATE_CANCLED ,
	STATE_OVERS

};

struct job_st
{
    int id;
    int state;
    time_t start, end;
};
int main()
{
	struct job_st job1;

	job1.state = STATE_OVER;

	switch (job1.state)
	{
		case STATE_RUNNING:
			break;
		case STATE_CANCELLED:
			break;
		case STATE_OVER:
			break;
		default:
		exit(1);
	}


#if 0
	enum day a=MON;
	printf("a = %d\n",a);
	enum day b = FRI;
	printf("b = %d\n",b);
#endif
	exit(0);
}
