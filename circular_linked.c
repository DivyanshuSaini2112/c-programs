#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function to insert a node at the beginning of a circular linked list
struct node *insertatbeg(struct node *tail, int data)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;

    // If the list is empty
    if (tail == NULL)
    {
        newnode->next = newnode; // Point to itself, as it's the only node
        return newnode;          // New node becomes the tail
    }
    else
    {
        newnode->next = tail->next; // New node points to head
        tail->next = newnode;
        tail = tail->next; // Tail points to new node
        return tail;       // Tail remains unchanged
    }
}

// Function to print the circular linked list
void printList(struct node *tail)
{
    if (tail == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    struct node *temp = tail->next; // Start from head (tail->next)
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != tail->next); // Loop until we reach the starting node
    printf("\n");
}

int main()
{
    struct node *tail = NULL;

    // Insert elements into the circular linked list
    tail = insertatbeg(tail, 10);
    tail = insertatbeg(tail, 20);
    tail = insertatbeg(tail, 30);
    tail = insertatbeg(tail, 40);
    tail = insertatbeg(tail, 50);

    // Print the circular linked list
    printf("Circular Linked List:\n");
    printList(tail);

    return 0;
}
