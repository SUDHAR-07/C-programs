#include <stdio.h>
#include <stdlib.h>

typedef struct SLL
{
    /* data */
    int data;
    struct SLL *next;
} S;

S *start = NULL, *newnode, *end, *shadow, *tptr;

void insertNode(int gd)
{
    newnode = (S *)malloc(sizeof(S));
    newnode->data = gd;
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        for (tptr = start; tptr != NULL && tptr->data < gd; shadow = tptr, tptr = tptr->next)
            ;
        if (tptr == start)
        {
            newnode->next = tptr;
            start = newnode;
        }
        else if (tptr == NULL)
        {
            shadow->next = newnode;
        }
        else
        {
            newnode->next = tptr;
            shadow->next = newnode;
        }
    }
}

void display()
{
    for (tptr = start; tptr != NULL; tptr = tptr->next)
    {
        printf("%d ", tptr->data);
    }
}
int main()
{
    int num;
    while (1)
    {
        /* code */
        scanf("%d", &num);
        if (num == -1)
        {
            break;
        }
        insertNode(num);
    }
    display();
}