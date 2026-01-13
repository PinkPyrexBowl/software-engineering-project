#ifndef _H_QUEUE
#define _H_QUEUE

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX (50U)

typedef struct CharQueue
{
    char values[MAX];
    int front = 0;
    int rear = -1;
    int item_count = 0;
} CharQueue;

int peek(CharQueue q);

bool is_empty(CharQueue q);

bool is_full(CharQueue q);

void insert(CharQueue q, char data);

int remove_data(CharQueue q);

#endif