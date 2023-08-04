#include <stdio.h>
#include <stdlib.h>

struct circularqueue{
    int size;
    int front;
    int rear;
    int *arr;
};

void enqueue(struct circularqueue *q, int value)
{
    if((q->rear == q->front -1) || ((q->front == 0) && (q->rear == (q->size -1))))
    {
        printf("queue is full\n");
    }
    else
    {
        if(q->front == -1)
        {
            q->front = 0;
            q->rear = 0;
            q->arr[q->rear] = value;
        }
        else
        {
            q->rear = (q->rear +1)%q->size;
            q->arr[q->rear] = value;
        }
    }
}

void display(struct circularqueue *q)
{
    int i = q->front;

    while(i != q->rear)
    {
        printf("%d\n", q->arr[i]);
        i = (i +1) % q->size;
    }
    printf("%d\n", q->arr[q->rear]);
}

void dqueue(struct circularqueue *q)
{
    if (q->front == -1)
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
            q->front = ((q->front +1) % q->size);
        }
    }
}

int main()
{
    struct circularqueue q;
    q.size = 5;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 34);
    enqueue(&q, 54);
    enqueue(&q, 65);
    enqueue(&q, 2);
    enqueue(&q, 89);
    enqueue(&q, 3);
    enqueue(&q, 32);

    display(&q);

    printf("after deleting from queue\n");
    dqueue(&q);
    dqueue(&q);

    display(&q);
    printf("\n\n\n");

    enqueue(&q, 75);
    enqueue(&q, 65);
    display(&q);

    dqueue(&q);
    printf("\n\n\n");

    display(&q);



    return 0;
}