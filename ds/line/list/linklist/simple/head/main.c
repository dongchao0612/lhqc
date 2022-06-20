#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main()
{
    int i;
    list *head = NULL;
    datatype arr[] = {12, 9, 23, 2, 34, 6, 45};
    head = list_create();
    if (head == NULL)
    {
        fprintf(stderr, "list_create is failed!\n");
        exit(1);
    }
    
    // printf("%d %d\n", list_isempty(head), __LINE__);

    int err = 0;
    for (i = 0; i < sizeof(arr) / sizeof(*arr); i++)
    {
        // err = list_insert_at(head, 0, &arr[i]);
        err = list_order_insert(head, &arr[i]);

        if (err != 0)
        {
            if (err == -1)
                fprintf(stderr, "The pos want to insert is wrong!\n");
            else if (err == -2)
                fprintf(stderr, "malloc is wrong!\n");
            else if (err == -3)
                fprintf(stderr, "head is NULL!\n");
            else
                fprintf(stderr, "ERROR!\n");
            exit(1);
        }
    }
    // printf("%d %d\n", list_isempty(head), __LINE__);
    list_display(head);

    datatype data = 12;
    // int ret = list_delete(head ,&data);
    // printf("ret = %d\n",ret);

    list_delete_at(head, 2, &data);
    if (err)
    {
        exit(1);
    }
    list_display(head);
    printf("delete data = %d\n",data);
    list_destory(head);

    return 0;
}