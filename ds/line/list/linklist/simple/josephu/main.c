#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define JOSE_NUM 8

struct node_st
{
    int data;
    struct node_st *next;
};
struct node_st *jose_create(int n)
{
    struct node_st *L, *newnode, *cur;
    int i = 1;
    L = malloc(sizeof(struct node_st));
    if (L == NULL)
        return NULL;
    L->data = i++;
    L->next = L;
    cur = L;
    for (; i <= n; i++)
    {
        newnode = malloc(sizeof(struct node_st));
        if (newnode == NULL)
            return NULL;
        newnode->data = i;
        newnode->next = L;
        cur->next = newnode;
        cur = newnode;
    }
    return L;
}
void jose_show(struct node_st *L)
{
    struct node_st *p;
    for (p = L; p->next != L; p = p->next)
    {

        printf("%d ", p->data);
        // sleep(1);
        // fflush(NULL);
    }
    printf("%d\n", p->data);
}
void jose_kill(struct node_st **L, int n)
{
    struct node_st *cur = *L, *node;
    int i = 1;
    while (cur != cur->next)
    {
        while (i < n)
        {
            node = cur;
            cur = cur->next;
            i++;
        }
        printf("%d ", cur->data);
        node->next = cur->next;
        free(cur);

        cur = node->next;
        i = 1;
    }
    *L = cur;
    printf("\n");
}
int main()
{
    struct node_st *L;
    int n = 3;
    L = jose_create(JOSE_NUM);
    if (L == NULL)
        exit(1);
    jose_show(L);
    jose_kill(&L, n);
    jose_show(L);
    exit(0);
}