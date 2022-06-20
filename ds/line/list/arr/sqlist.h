#ifndef SQLIST_H__
#define SQLIST_H__

#define DATASIZE 1024
typedef int datatype;

typedef struct node_st
{
    datatype data[DATASIZE];
    int last;
} sqlist;

sqlist *sqlist_create();

void sqlist_create1(sqlist **L);

int sqlist_insert(sqlist *L, int i, datatype *data);

int sqlist_delete(sqlist *L, int i);

int sqlist_find(sqlist *L, datatype *data);

int sqlist_isempty(sqlist *L);

int sqlist_setempty(sqlist *L);

int sqlist_getnum(sqlist *L);

void sqlist_display(sqlist *L);

int sqlist_destroy(sqlist *L);

int sqlist_union(sqlist *L1, sqlist *L2);

#endif