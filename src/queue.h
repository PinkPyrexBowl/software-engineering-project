#ifndef _H_QUEUE
#define _H_QUEUE

#include <stdbool.h>

#define MAX (50U)

typedef struct CharQueue
{
    char values[MAX];
    int front;
    int rear;
    int item_count;
} CharQueue;

int peek(CharQueue q);

bool is_empty(CharQueue q);

bool is_full(CharQueue q);

void insert(CharQueue q, char data);

int remove_data(CharQueue q);

#endif