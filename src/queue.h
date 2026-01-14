#ifndef _H_QUEUE
#define _H_QUEUE

#include <stdbool.h>
#include "token.h"

typedef struct CharQueue
{
    char values[MAX_TOKEN_LEN];
    int front;
    int rear;
} CharQueue;

int peek(CharQueue *q);

bool is_empty(CharQueue *q);

bool is_full(CharQueue *q);

void enqueue(CharQueue *q, char data);

int dequeue(CharQueue *q);

#endif