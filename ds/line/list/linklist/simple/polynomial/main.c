#include <stdio.h>
#include <stdlib.h>
struct node_st
{
    int coef;
    int exp;
    struct node_st *next;
};
struct node_st *polt_create(int arr[][2], int n)
{
    struct node_st *L;
    struct node_st *newnode, *cur;
    L = malloc(sizeof(struct node_st));

    if (L == NULL)
        return NULL;

    L->next = NULL;
    cur = L;

    int i;

    for (i = 0; i < n; i++)
    {
        newnode = malloc(sizeof(struct node_st));
        if (newnode == NULL)
            return NULL;

        newnode->coef = arr[i][0];
        newnode->exp = arr[i][1];

        newnode->next = NULL;

        cur->next = newnode;
        cur = newnode;
    }

    return L;
}
void ploy_show(struct node_st *L)
{
    struct node_st *cur;

    for (cur = L->next; cur != NULL; cur = cur->next)
    {
        printf("(%d %d)\t", cur->coef, cur->exp);
    }
    printf("\n");
}
void plot_union(struct node_st *p1, const struct node_st *p2)
{
    struct node_st *p = p1->next, *q = p2->next, *r = p1;
    while (p && q)
    {
        if ((p->exp) < (q->exp))
        {
            r->next = p;
            r = p;
            p = p->next;
        }
        else if ((p->exp) > (q->exp))
        {
            r->next = q;
            r = q;
            q = q->next;
        }
        else //(p->exp) == (q->exp)
        {
            p->coef += q->coef;
            if (p->coef)
            {
                r->next = p;
                r = p;
            }
            p = p->next;
            q = q->next;
        }
    }

    if (p == NULL)
        r->next = q;
    else
        r->next = p;
}
int main()
{
    struct node_st *p1, *p2;
    int a[][2] = {{5, 0}, {2, 1}, {8, 8}, {3, 16}};
    int b[][2] = {{6, 1}, {16, 6}, {-8, 8}};

    p1 = polt_create(a, 4);
    if (p1 == NULL)
        exit(1);
    p2 = polt_create(b, 3);
    if (p2 == NULL)
        exit(1);

    ploy_show(p1);
    ploy_show(p2);

    plot_union(p1, p2);
    ploy_show(p1);
    
    exit(0);
}