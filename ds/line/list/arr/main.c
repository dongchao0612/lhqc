#include <stdio.h>
#include <stdlib.h>
#include "sqlist.h"

int main()
{
    int i;
    sqlist *list = NULL;
    sqlist *list1 = NULL;
    datatype arr[] = {12, 23, 34, 45, 56};
    datatype arr1[] = {89, 90, 78, 67, 56, 45};

    list = sqlist_create();
    // sqlist_create1(&list);
    if (list == NULL)
    {
        fprintf(stderr, "sqlist_create is failed!\n");
        exit(1);
    }
    printf("%d %d\n", sqlist_isempty(list), __LINE__);
    list1 = sqlist_create();
    if (list1 == NULL)
    {
        fprintf(stderr, "sqlist_create is failed!\n");
        exit(1);
    }

    int err = 0;
    for (i = 0; i < sizeof(arr) / sizeof(*arr); i++)
    {
        err = sqlist_insert(list, 0, &arr[i]);

        if (err != 0)
        {
            if (err == -1)
                fprintf(stderr, "The arr is full!\n");
            else if (err == -2)
                fprintf(stderr, "The pos want to insert is wrong!\n");
            else
                fprintf(stderr, "ERROR!\n");
            exit(1);
        }
    }

    for (i = 0; i < sizeof(arr1) / sizeof(*arr1); i++)
    {
        err = sqlist_insert(list1, 0, &arr1[i]);

        if (err != 0)
        {
            if (err == -1)
                fprintf(stderr, "The arr is full!\n");
            else if (err == -2)
                fprintf(stderr, "The pos want to insert is wrong!\n");
            else
                fprintf(stderr, "ERROR!\n");
            exit(1);
        }
    }
    printf("%d %d\n", sqlist_isempty(list), __LINE__);
    
    printf("list:\t");
    sqlist_display(list);
    printf("list1:\t");
    sqlist_display(list1);

#if 0
    int ret = sqlist_delete(list,1);
    sqlist_display(list);
#endif
    sqlist_union(list, list1);
    printf("list + list1:\t");
    sqlist_display(list);

    sqlist_destroy(list);
    sqlist_destroy(list1);

    exit(0);
}