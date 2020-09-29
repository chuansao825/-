#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void PrintLinkedList(Node* header , int LengthOfLink);
void ReserveANode(Node* header , Node* position );

int main(void) 
{
	Node* header = CreateList();	//point of the header node
	int LengthOfLink = 10;			//the length of the link
	
	//insert the nodes and create a linkedlist
	Node* now = header;				//current node
	for(int i=1 ; i<LengthOfLink+1 ; i++)
	{
		Insert(now,header);
		now = now->next;
		now->element = i;
	}
	
	//reserve the linkedlist
	now = header;
	for(int i=0 ; i<LengthOfLink-1 ; i++)
	{
		ReserveANode(header,now);
		now = now->next;
	}
		
	//test the program
	PrintLinkedList(header,LengthOfLink);
	
	//clean and the end  
	DeleteList(header);
	return 0;
}

//print the linkedlist
void PrintLinkedList(Node* header , int LengthOfLink)
{
	Node* tempnode = header->next;
	for( int i = 0 ; i<LengthOfLink ; i++ )
	{
		printf( "%d " , tempnode->element);
		tempnode = tempnode->next;
	}
}

//move the last node to behind the position 
void ReserveANode(Node* header , Node* position )
{
	Node* LastNode = GetLastNode(header);
	FindPreviousNode(header , LastNode) -> next = NULL;		//it's important
	LastNode->next = position->next;
	position->next = LastNode;
	
}


