#ifndef NOHAED_H__
#define NOHAED_H__

#define NAMESIZE 32

struct score_st
{
    int id;
    char name[NAMESIZE];
    int math;
    int chinese;
};
struct node_st
{
    struct score_st data;
    struct score_st *next;
};

int list_insert(struct node_st **L, struct score_st *data);
void list_show(struct node_st *L);
int list_delete(struct node_st **L);
struct score_st *list_find(struct node_st *L, int id);
int  list_destory(struct node_st *L);
#endif