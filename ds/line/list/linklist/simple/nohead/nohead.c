#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nohaed.h"

int list_insert(struct node_st **L, struct score_st *data)
{
    struct node_st *new = malloc(sizeof(struct node_st));
    if (new == NULL)
        return -1;

    new->data = *data;
    new->next = *L;
    *L = new;

    return 0;
}
void list_show(struct node_st *L)
{
    struct node_st *cur;
    for (cur = L; cur != NULL; cur = cur->next)
    {
        printf("%d %s %d %d\n", cur->data.id, cur->data.name, cur->data.math, cur->data.chinese);
    }
}
int list_delete(struct node_st **L)
{
    struct node_st *cur = *L;
    if (*L == NULL)
    {
        return -1;
    }
    *L = (*L)->next;
    free(cur);

    return 0;
}
struct score_st* list_find(struct node_st *L, int id)
{
    struct node_st *cur = L;
    for (; cur != NULL; cur = cur->next)
    {
        if (cur->data.id == id)
        {
            return &(cur->data);
            //printf("%d %s %d %d\n", cur->data.id, cur->data.name, cur->data.math, cur->data.chinese);
            return 0;
        }
    }
    return NULL;
}
int  list_destory(struct node_st *L)
{
    if(L==NULL)
        return ;
    struct node_st *cur;
    for(cur=L;cur!=NULL;cur=L)
    {
        L=cur->next;
        free(cur);
    }
}