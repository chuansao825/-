#include <stdio.h>
#include <stdlib.h>

//define the queue
struct Queue{
	int Capacity;				//the upbound of the queue
	int Front;					//the first member
	Int Rear;					//the last member
	int Size;					//current size
	int Tag;					//mark if rear==front
	int* queue;					//the queue
};

void CreateQueue(struct Queue q);			//create a empty queue
void EnQueue( struct Queue q,int newmember) ;				//enter the queue
int DeQueue(struct Queue q);				//delete the member and return it
int AddOne(int position,int capacity);		//add one to the position and return the next position



