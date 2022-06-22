#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nohaed.h"

int main()
{
    int i;
    struct node_st *L = NULL;
    struct score_st temp;
    for (i = 0; i < 7; i++)
    {
        temp.id = i;
        snprintf(temp.name, NAMESIZE, "stu%d", i);
        temp.math = rand() % 100;
        temp.chinese = rand() % 100;
        int ret = list_insert(&L, &temp);
        if (ret != 0)
        {
            exit(0);
        }
    }
    // list_show(L);
    // list_delete(&L);
    // printf("删除后:\n");
    // list_show(L);
    int id = 3;
    struct score_st *ptr=list_find(L,id);
    // printf("查找id = %d的同学信息如下:\n", id);
    // list_find(L, id);
    if(ptr==NULL)
    {
        printf("can not find! \n ");
    }
    else
    {
        printf("查找id = %d的同学信息如下:\n", id);
        printf("%d %s %d %d\n", ptr->id, ptr->name, ptr->math, ptr->chinese);
    }

    list_destory(L);
    return 0;
}