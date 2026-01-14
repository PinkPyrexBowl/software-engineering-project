#include "queue.h"

int peek(CharQueue *q)
{
    return q->values[q->front];
}

bool is_empty(CharQueue *q)
{
    return false;
}

bool is_full(CharQueue *q)
{
    return false;
}

void enqueue(CharQueue *q, char data)
{
    if (is_full(q))
    {
        return;
    }

    if (q->rear == MAX_TOKEN_LEN)
    {
        q->rear = 0;
    }

    q->values[q->rear++] = data;
}

int dequeue(CharQueue* q)
{
    if (is_empty(q))
    {
        return 0;
    }

    char data = q->values[q->front++];

    if (q->front == MAX_TOKEN_LEN)
    {
        q->front = 0;
    }

    return data;
}