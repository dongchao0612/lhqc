#ifndef LIST_H__
#define LIST_H__
typedef int datatype;
typedef struct node_st
{
    datatype data;
    struct node_st *next;
} list;

list *list_create();

int list_insert_at(list *head, int i, datatype *data);

int list_order_insert(list *head, datatype *data);

int list_delete_at(list *head, int i, datatype *data);

int list_delete(list *head, datatype *data);

int list_isempty(list *head);

void list_display(list *head);

void list_destory(list *head);

#endif