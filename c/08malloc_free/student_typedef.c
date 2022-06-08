#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMEMAX 1024

typedef struct student_st
{
	int id;
	char* name;
	int math;
	int chinese;
}STU;
void stu_set(STU* stu,STU* temp)
{


	stu->id=temp->id;
	stu->name=malloc(strlen(temp->name)+1);
	if(stu->name==NULL)
		exit(1);
	strcpy(stu->name,temp->name);
	stu->math=temp->math;
	stu->chinese=temp->chinese;

}
void stu_show(STU* stu)
{
	printf("%d\t%s\t%d\t%d\n", stu->id, stu->name, stu->math, stu->chinese);
}
void stu_changename(STU* stu,char *newname)
{
	free(stu->name);
	stu->name=malloc(strlen(newname)+1);
	strcpy(stu->name, newname);
}
void menu()
{
	printf("\nplease enter the num(q for qiut):");
	printf("\n1: set\n2: change name\n3: show\n\n");
	
}
int main()
{
	STU stu,temp;
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
				temp.name=malloc(NAMEMAX);
				printf("please enter for stu[id name maths chinese]:\n");
				scanf("%d%s%d%d", &temp.id, temp.name, &temp.math, &temp.chinese);
				stu_set(&stu, &temp);
				break;
			case 2:
				printf("please enter new name:\n");
				char newname[NAMEMAX];
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
