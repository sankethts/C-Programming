//singly linked list
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *link;
};
#if 0
//creating a node
int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;
    printf("%d\n", head->data);
    return 0;
}
#endif

#if 0
//creating a 3 node sll
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 89;
    current->link = NULL;
    head->link->link = current;
    return 0;
}
#endif

#if 1
//creating a 3 node sll, count nodes, print nodes, add_at_end(), 
void count_of_nodes(struct node *head);
void print_nodes(struct node *head);
void add_at_end(struct node *head, int data);
void add_beg(struct node **head, int data);
void add_at_pos(struct node *head, int pos, int data);
void del_first(struct node **head);
void del_last(struct node *head);
void del_pos(struct node **head, int pos);
void del_list(struct node *head);
void find_node(struct node *head, int key);
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 89;
    current->link = NULL;
    head->link->link = current;

    add_at_end(head, 56);
    add_beg(&head, 23);
    add_at_pos(head, 3, 67);
    count_of_nodes(head);
    del_first(&head);
    del_last(head);//using 2 pointers
    del_pos(&head, 3);
    // del_list(head);
    // if(head == NULL)
    // {
    //     printf("Linked list deleted successfully\n");
    //     return 0;
    // }
    print_nodes(head);
    return 0;
}
void count_of_nodes(struct node *head)
{
    int count = 0;
    if(head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    struct node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("Number of nodes: %d\n", count);
}
void print_nodes(struct node *head)
{
    if(head == NULL)//head is pointing to nothing, means there is not even single node in list
    {
        printf("Linked list is empty\n");
        return;
    }
    struct node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}
void add_at_end(struct node *head, int data)
{
    if(head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    struct node *ptr;
    ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void add_beg(struct node **head, int data)
{
    if(head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = *head;
    *head = ptr;
}
void add_at_pos(struct node *head, int pos, int data)
{
    if(head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    struct node *ptr = head;
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->link = NULL;
    while(pos != 2)
    {
        ptr = ptr->link;
        pos--;
    }
    newnode->link = ptr->link;
    ptr->link = newnode;
}
void del_first(struct node **head)
{
    if(*head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    struct node *temp = *head;
    *head = (*head)->link;
    free(temp);
    temp = NULL;
}
void del_last(struct node *head)//using 2 pointers
{
    #if 1
    if(head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    else if(head->link == NULL)//one node is there
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *temp1 = head;
        while(temp->link != NULL)
        {
            temp1 = temp;
            temp = temp->link;
        }
        temp1->link = NULL;
        free(temp);
        temp = NULL;
    }
    #endif

    #if 0
    #endif
}
void del_pos(struct node **head, int pos)
{
    //previous pointer points to the node just before the node we want to delete
    //current pointer points to the node we want to delete
    struct node *previous = *head;
    struct node *current = *head;
    if(*head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    else if(pos == 1)
    {
        *head = current->link;
        free(current);
        free(previous);
        previous = current = NULL;
        return;
    }
    else
    {
        while(pos != 1)
        {
            previous = current;
            current = current->link;
            pos--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}
void del_list(struct node *head)
{
    struct node *temp = head;
    while(temp != NULL)
    {
        temp = temp->link;
        free(head);
        head = temp;
    }
}
void find_node(struct node *head, int key)
{
    if(head == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    int count = 1;
    while(head != NULL)
    {
        if(head->data == key)
        {
            printf("The data found at position: %d\n", count);
        }
        count++;
        head = head->link;
    }
}
#endif