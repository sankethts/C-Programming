//Doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
#if 1
struct node *add_to_empty(struct node *head, int data);
struct node *add_at_beg(struct node *head, int data);
struct node *add_at_end(struct node *head, int data);
void print_list(struct node *head);
int main()
{
    struct node *head = NULL;
    head = add_to_empty(head, 45);
    head = add_at_beg(head, 34);
    head = add_at_end(head, 57);
    print_list(head);
    
    return 0;
}
struct node *add_to_empty(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    head = temp;
    return head;
}
struct node *add_at_beg(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    temp->next = head;
    head->prev = temp;
    head = temp;
    return head;
}
struct node *add_at_end(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    struct node *tp;
    tp = head;
    while(tp->next != NULL)
    {
        tp = tp->next;
    }
    temp->prev = tp;
    tp->next = temp;
    return head;
}
void print_list(struct node *head)
{
    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
#endif