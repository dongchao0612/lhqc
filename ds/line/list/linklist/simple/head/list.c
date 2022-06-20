#include <stdio.h>
#include <stdlib.h>
#include "list.h"

list *list_create()
{
    list *head = malloc(sizeof(list));
    if (head == NULL)
    {
        return NULL;
    }
    head->next = NULL;

    return head;
}

int list_insert_at(list *head, int i, datatype *data)
{
    int j = 0;
    list *p = head, *q;
    if (i < 0)
        return -1;

    while (j < i)
    {
        printf("j < i\n");
        p = p->next;
        j++;
    }

    if (p != NULL)
    {

        q = malloc(sizeof(list));

        if (q == NULL)
        {
            return -2;
        }
        q->data = *data;
        q->next = NULL;

        q->next = p->next;
        p->next = q;

        return 0;
    }
    else
    {
        return -3;
    }
}

int list_order_insert(list *head, datatype *data)
{
    list *p = head, *q;
    while (p->next != NULL && p->next->data < *data)
    {
        p = p->next;
    }
    q = malloc(sizeof(list));
    if (q == NULL)
        return -1;

    q->data = *data;
    q->next = p->next;
    p->next = q;

    return 0;
}

int list_delete_at(list *head, int i, datatype *data)
{
    int j;
    list *p = head,*q;

    *data=-1;

    if (i < 0)
        return -1;
    while (j < i)
    {
        j++;
        p = p->next;
    }
    if (p != NULL)
    {
        q=p->next;
        p->next=q->next;
        *data=q->data;
        free(q);
        q=NULL;
        return 0;
    }
    else
        return -2;
}

int list_delete(list *head, datatype *data)
{
    list *p = head, *q;
    while (p->next != NULL && p->next->data != *data)
    {
        p = p->next;
    }

    if (p->next == NULL)
        return -1;
    else
    {
        q = p->next;
        p->next = q->next;
        free(q);
        q = NULL;

        return 0;
    }
}

int list_isempty(list *head)
{
    return (head->next == NULL) ? 0 : 1;
}

void list_display(list *head)
{
    list *p = head->next;
    if (head == NULL)
        return;

    for (; p != NULL; p = p->next)
    {
        printf("%d ", p->data);
    }
    printf("\n");

    return;
}

void list_destory(list *head)
{
    list *p = head->next, *next;
    for (; p != NULL; p = p->next)
    {
        next = p->next;
        free(next);
    }
    return;

    free(head);
}