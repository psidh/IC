#include <stdio.h>
#include <stdlib.h>
#include "../lib/node.c"

// core logic
//_________________________________________________________________


struct node *find(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;

    while (fast->p != NULL && fast->p->p != NULL)
    {
        slow = slow->p;
        fast = fast->p->p;
    }
    return slow;
}

//_________________________________________________________________

int main(){
    struct node *head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    // append(&head, 5);
    // append(&head, 6);

    struct node *middle = find(head);

    if (middle != NULL)
    {
        printf("The middle node's data is: %d\n", middle->data);
    }
    else
    {
        printf("The linked list is empty.\n");
    }

    return 0;
}