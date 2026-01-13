#include "queue.h"

int peek(CharQueue q)
{
    return q.values[q.front];
}

bool is_empty(CharQueue q)
{
    return q.item_count == 0;
}

bool is_full(CharQueue q)
{
    return q.item_count == MAX;
}

void insert(CharQueue q, char data)
{
    if(!is_full(q))
    {
        if(q.rear == MAX - 1)
        {
            q.rear = -1;            
        }       

        q.values[++q.rear] = data;
        q.item_count++;
   }
}

int remove_data(CharQueue q)
{
    int data = q.values[q.front++];
	
    if(q.front == MAX)
    {
        q.front = 0;
    }
	
   q.item_count--;
   return data;  
}