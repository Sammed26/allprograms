#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int front;
    int rear;
    int size;
    int *array;
};

int isfull(struct queue *q)
{
    if ((q->rear == (q->front - 1)) || ((q->front == 0) && (q->rear == q->size -1)))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(struct queue *q)
{
    if ((q->front == -1) || (q->rear == -1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int data)
{
    if (isfull(q))
    {
        printf("queue is full\n");
    }
    else
    {
        if (q->front == -1)
        {
            q->front = 0;
            q->rear = 0;
            q->array[q->rear] = data;
        }
        else
        {
            q->rear = (q->rear + 1) % q->size;
            q->array[q->rear] = data;
        }
    }
}

void dqueue(struct queue *q)
{
    if (isempty(q))
    {
        printf("queue is empty\n");
    }
    else
    {
        if (q->front == 0 && q->rear == 0)
        {
            q->front = -1;
            q->rear = -1;
        }
        else
        {
            q->front = (q->front + 1)% q->size;
        }
    }
}

void display(struct queue *q)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d\n", q->array[i]);
    }

    /* for (int i = 0; i <= 10; i++)
     {
         printf("%d\n", q->array[i]);
     } */
}

int main()
{
    struct queue q;
    q.front = -1;
    q.rear = -1;
    q.size = 5;
    q.array = (int *)malloc(q.size*sizeof(int));

    /* if(isempty(&q))
     {
         printf("Queue is empty\n");
     }
     else
     {
         printf("Queue is not empty\n");
     } */

    enqueue(&q, 34);
    enqueue(&q, 78);
    enqueue(&q, 85);
    enqueue(&q, 2);
    enqueue(&q, 7);

    display(&q);

    printf("before dequeing\n");

    dqueue(&q);
    dqueue(&q);

    display(&q);

    return 0;
}