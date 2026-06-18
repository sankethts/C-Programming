#include<stdio.h>
#define N 5
void enque(int x, int *front, int *rear, int queue[])
{
    if(*rear == N-1)//queue is full
    {
        printf("Queue is full\n");
    }
    else if(*front == -1 && *rear == -1)//if queue is empty
    {
        (*front)++;
        (*rear)++;
        queue[*rear] = x;
    }
    else
    {
        (*rear)++;
        queue[*rear] = x;
    }
}
void deque(int *front, int *rear, int queue[])
{
    if(*front == -1 && *rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if(*front == *rear)//if queue has only one value
    {
        *front = *rear = -1;
    }
    else
    {
        (*front)++;
    }
}
void display(int *front, int *rear, int queue[])
{
    if(*front == -1 && *rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(int i = *front; i <= *rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}
int main()
{
    int queue[N];
    int front = -1, rear = -1;

    enque(5, &front, &rear, queue);
    enque(10, &front, &rear, queue);
    enque(12, &front, &rear, queue);
    //deque(&front, &rear, queue);
    //deque(&front, &rear, queue);
    deque(&front, &rear, queue);
    deque(&front, &rear, queue);
    display(&front, &rear, queue);
    return 0;
}