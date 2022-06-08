#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE 128

struct student_st
{
	int id;
	char name[NAMESIZE];
	int math;
	int chinese;
};
void stu_set(struct student_st* stu,struct student_st* temp)
{
	*stu = *temp;
#if 0
	stu->id=temp->id;
	strcpy(stu->name,temp->name);
	stu->math=temp->math;
	stu->chinese=temp->chinese;
#endif
}
void stu_show(struct student_st* stu)
{
	printf("%d\t%s\t%d\t%d\n", stu->id, stu->name, stu->math, stu->chinese);
}
void stu_changename(struct student_st* stu,char *newname)
{
	strcpy(stu->name, newname);
}
void menu()
{
	printf("\nplease enter the num(q for qiut):");
	printf("\n1: set\n2: change name\n3: show\n\n");
	
}
int main()
{
	struct student_st stu,temp;
	int choice;

	
	while(1)
	{
		menu();
		int ret = scanf("%d", &choice);
		if (ret!=1)
			exit(1);	
				
		switch (choice)
		{
			case 1:
				printf("please enter for stu[id name maths chinese]:\n");
				scanf("%d%s%d%d", &temp.id, temp.name, &temp.math, &temp.chinese);
				stu_set(&stu, &temp);
				break;
			case 2:
				printf("please enter new name:\n");
				char newname[NAMESIZE];
				scanf("%s", newname);
				stu_changename(&stu,newname);
				break;
			case 3:
				stu_show(&stu);
				break;
			default:
				printf("input error\n");
				exit(1);
				break;
		}
	}

#if 0
	printf("please enter for stu[id name maths chinese]:\n");
	scanf("%d%s%d%d", &temp.id, temp.name, &temp.math, &temp.chinese);
	stu_set(&stu,&temp);

	stu_show(&stu);

	printf("please enter new name:\n");
	char newname[NAMESIZE];
	scanf("%s", newname);
	stu_changename(&stu,newname);

	stu_show(&stu);
#endif
	exit(1);
}
