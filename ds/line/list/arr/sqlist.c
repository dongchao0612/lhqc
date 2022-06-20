#include <stdio.h>
#include <stdlib.h>

#include "sqlist.h"

sqlist *sqlist_create()
{
    sqlist *L = malloc(sizeof(sqlist));
    if (L == NULL)
        return NULL;

    L->last = -1;

    return L;
}
void sqlist_create1(sqlist **L)
{
    *L = malloc(sizeof(**L));
    if (*L == NULL)
        return;
    (*L)->last = -1;
    return;
}

int sqlist_insert(sqlist *L, int i, datatype *data)
{
    if (L->last == DATASIZE - 1)
        return -1;
    if (i < 0 || i > L->last + 1)
        return -2;

    int j;
    for (j = L->last; i <= j; j--)
        L->data[j + 1] = L->data[j];

    L->data[i] = *data;
    L->last++;

    return 0;
}

int sqlist_delete(sqlist *L, int i)
{
    if (i < 0 || i > L->last)
        return -1;
    int j;
    for (j = i + 1; j <= L->last; j++)
    {
        L->data[j - 1] = L->data[j];
    }
    L->last--;

    return 0;
}

int sqlist_find(sqlist *L, datatype *data)
{
    if (sqlist_isempty(L) == 0)
        return -1;
    int i;
    for (i = 0; i < L->last; i++)
    {
        if (L->data[i] == (*data))
            return i;
    }
    return -2;
}

int sqlist_isempty(sqlist *L)
{
    return (L->last == -1) ? 0 : 1;
}

int sqlist_setempty(sqlist *L)
{
    L->last = -1;
    return 0;
}

int sqlist_getnum(sqlist *L)
{
    return (L->last + 1);
}

void sqlist_display(sqlist *L)
{
    int i;
    if (L->last == -1)
        return;
    for (i = 0; i <= L->last; i++)
        printf("%d ", L->data[i]);
    printf("\n");
    return;
}

int sqlist_destroy(sqlist *L)
{
    free(L);
    return 0;
}

int sqlist_union(sqlist *List1, sqlist *List2)
{
    // list1 -> 12 23 34 45 56
    // list2 -> 78 89 56 23 10
    int i;
    for (i = 0; i <= List2->last; i++)
    {
        int ret = sqlist_find(List1, &(List2->data[i]));
        if (ret < 0)
        {
            sqlist_insert(List1, 0, &(List2->data[i]));
        }
    }
    return 0;
}
