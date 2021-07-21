#include <stdlib.h>
#include <stdio.h>
int test1=5;

struct Node
{
    int data;
    struct Node *next;
};

void add(struct Node *first, int element)
{
    struct Node *p = first;
    struct Node *t;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = element;
    t->next = NULL;

    while (p != NULL)
    {
        if (p->next == NULL)
        {
            p->next = t;
            break;
        }
        p = p->next;
    }
}

void display(struct Node *first)
{
    struct Node *p = first;
    int count = 0;
    while (p != NULL)
    { //while(p)//while(p!=0)
        printf("%d ", p->data);
        count++;

        p = p->next;
    }
   
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    struct Node *t, *last, *first;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;
    static int test=5;
    for (int i = 1; i < 5; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;

        last->next = t;
        last = t;
    }

    display(first);
    printf("first done\n");
    add(first, 6);
    printf("add done\n");

    display(first);
}