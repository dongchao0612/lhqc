#include <stdio.h>
#include <stdlib.h>

#define NAMESIZE 128
struct{
	int i;
	char ch;
	float f;

}a,b,c,*p,*q;

struct simp_st{
	int i;
	float f;
	char ch;
};

struct birthday_st{
	int year,month,day;
};

struct student_st{
	int id;
	char name[NAMESIZE];
	struct birthday_st birth;
	/*
	struct birthday_st{
		int year,month,day;
	}birth;
	*/
	int math;
	int chinese;
	
};
void func(struct simp_st b)
{
	printf("size of b = %ld\n",sizeof(b));

}
void func1(struct simp_st* b)
{
	printf("size of b = %ld\n",sizeof(b));

}
int main()
{
	struct simp_st a={123,457.789,'A'};
	struct simp_st *p=&a;

	printf("size of a = %ld\n",sizeof(a));
	printf("size of p = %ld\n",sizeof(p));

	func(a);// ->func(a.i,a.ch,a.f);
	func1(p);

#if 0
	// struct simp_st a={123,457.789,'A'};
	
	// printf("%d\t%f\t%c\n",a.i,a.f,a.ch);
	
	// struct student_st stu={10011,"alan",{2011,11,11},89,90};
	// struct student_st *p=&stu;
	// struct student_st stu1={.math=98,.chinese=99};	

	// printf("%d\t%s\t%d-%d-%d\t%d\t%d\n",stu.id,stu.name,stu.birth.year,stu.birth.month,stu.birth.day,stu.math,stu.chinese);
	// printf("%d\t%s\t%d-%d-%d\t%d\t%d\n",p->id,p->name,p->birth.year,p->birth.month,p->birth.day,p->math,p->chinese);
	
	struct student_st arr[2]={{10011,"alan",{2011,11,11},98,97},{10012,"joh",{2012,12,12},90,86}};
	struct student_st *p=arr;
	int i;
	for(i=0;i<2;i++,p++)
		printf("%d\t%s\t%d-%d-%d\t%d\t%d\n",p->id,p->name,p->birth.year,p->birth.month,p->birth.day,p->math,p->chinese);

#endif

	exit(0);
}

