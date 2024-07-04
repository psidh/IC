

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *p;
};

void append(struct node **head_ref, int new_data)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *last = *head_ref;

    new_node->data = new_data;
    new_node->p = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->p != NULL)
    {
        last = last->p;
    }

    last->p = new_node;
    return;
}