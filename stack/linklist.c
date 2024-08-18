#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void addAtStart(int data)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;

    if (head == NULL)
    {
        node->next = NULL;
        head = node;
        tail = node;
    }
    else
    {
        node->next = head;
        head = node;
    }
}

void addAtEnd(int data)
{
    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;

    if (head == NULL)
    {
        node->next = NULL;
        head = node;
        tail = node;
    }
    else
    {
        tail->next = node;
        tail = node;
    }
}

void addAfter(int data, int n)
{

    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }

    struct Node *node = malloc(sizeof(struct Node));
    node->data = data;

    struct Node *curr = head;

    while (curr != NULL)
    {
        if (curr->data == n)
        {
            if (curr == tail)
            {
                addAtEnd(data);
                return;
            }
            node->next = curr->next;
            curr->next = node;
            break;
        }
        else
        {
            curr = curr->next;
        }
    }
    if (curr == NULL)
        printf("Data not found.");
}

void deleteAtStart()
{
    if (head == NULL)
    {
        printf("Linked List is empty.");
        return;
    }

    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        return;
    }

    head = head->next;
}

void deleteAtEnd()
{
    struct Node *curr = NULL;
    struct Node *prev = NULL;

    if (head == NULL)
    {
        printf("Linked List is empty.");
        return;
    }

    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        return;
    }

    prev = head;
    curr = head;

    while (curr != NULL)
    {
        if (curr == tail)
        {
            prev->next = NULL;
            tail = prev;
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
}

void deleteAfter(int n)
{
    struct Node *curr = NULL;

    if (head == NULL)
    {
        printf("Linked List is empty.");
        return;
    }

    curr = head;

    while (curr != NULL)
    {
        if (curr->data == n)
        {
            curr->next = curr->next->next;
            break;
        }
        else
        {
            curr = curr->next;
        }
    }
}

void printList()
{
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }

    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("NULL");
    printf("\n");
}

int main()
{
    addAtStart(10);
    addAtStart(5);
    addAtStart(25);
    addAtStart(15);
    addAtEnd(33);
    addAtEnd(133);
    addAtEnd(233);
    addAfter(100, 233);
    printList();

    deleteAtStart();
    printList();

    deleteAtEnd();
    printList();

    deleteAfter(33);
    printList();
    return 0;
}