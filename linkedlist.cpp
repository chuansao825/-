#include "linkedlist.h"
int IsEmpty( Node* header )
{
	return header->next == NULL;
}

int IsLast(Node* position)
{
	return position->next == NULL;
}

Node* Find( Node* header,Node* position )
{
	Node* target = header->next;
	while( target!=position )
	{
		target = target->next;
	}

	return target;
}

Node* CreateList()
{
	Node* header = (Node*)malloc(sizeof(Node));
	header->next = NULL; 
	return header; 
}

Node* Insert( Node* position,Node* header )
{
	Node* tempnode;
	tempnode = (Node*)malloc(sizeof(Node));
	
	tempnode->next = position->next;
	position->next = tempnode;
	
	return tempnode;
}

void Delete()
{
	
}

void DeleteList( Node* header )
{
	Node* temp;
	Node* position;
	position = header;
	
	while( position != NULL )
	{
		temp = position->next;
		free(position);
		position = temp;
	}
}

Node* GetLastNode(Node* header)
{
	Node* tempnode = header;
	while( tempnode->next != NULL )
	{
		tempnode = tempnode->next;
	}
	return tempnode;
}


Node* FindPreviousNode(Node* header , Node* position)
{
	Node* tempnode = header;
	while(tempnode->next != position || tempnode->next==NULL)
	{
		tempnode = tempnode->next;
	}
	return tempnode;
}


void PrintLinkedList(Node* header , int LengthOfLink)
{
	Node* tempnode = header->next;
	for( int i = 0 ; i<LengthOfLink ; i++ )
	{
		printf( "%d " , tempnode->element);
		tempnode = tempnode->next;
	}
}
