#include "queue.h"

void CreateQueue(struct Queue)
{
	Queue->queue = (int*)malloc( sizeof(int)*Queue->Capacity );
	Queue->Size = 0;
	Queue->Front = 1;
	Queue->Rear = 0;
	Queue->Tag = 0;
}

void EnQueue( struct Queue q,int newmember)
{
	if(q->Tag==1)
		printf("the queue has been full\n");
	else
	{
		q->Rear = AddOne(q->Rear,q->Capacity);
		q->Size++;
		q->queue[q->Rear] = newmember;
		
		//check if it is full
		if(q->Rear+1 == q->Front)
			q->tag = 1;
	}
}

int DeQueue(struct Queue q)
{
	if(q->Tag == 0)	
		printf("the queue has been empty\n");
	else
	{
		q->Front = AddOne(q->Front);
		q->Size--;
		
		//check if it is empty
		if(q->Rear+1 == q->Front)
			q->tag = 0;
	}
}

int AddOne( int position,int capacity ) 
{
	if( position== capacity-1)
		return 0;					//return to the beginning
	else 
		return ++position;
}
