#include "linkedlist.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Node* FindPosition(Node* header,int x);	//find the target position

int main(int argc, char *argv[]) {
	//the element in the list is integer
	
	Node* tempnode = NULL;				//store the pointer of the current node
	//create a list ordered by value
	Node* header = CreateList();
	int LengthOfList = 10;
	tempnode = header;
	for(int i =0 ; i<LengthOfList ; i++)
	{
		Insert(tempnode,header);
		tempnode = tempnode->next;
		tempnode->element = i*2;	
	}
	
	//insert the element
	int x = 0; 
	scanf("%d",&x) ;
	Node* position = FindPosition(header,x);
	Node* NewNode = Insert(position,header);
	NewNode->element = x;
	LengthOfList++;			//length of linkedlist should increase by 1
	PrintLinkedList(header,LengthOfList);
	
	return 0;
}

Node* FindPosition(Node* header,int x)
{
	Node* tempnode = header->next;
	while(tempnode->element <= x && tempnode->next!=NULL)
	{
		tempnode= tempnode->next;
	}
	if(tempnode->element > x)
	{
		return FindPreviousNode(header,tempnode);
	}
	else if(tempnode->next == NULL)
	{
		return tempnode;
	}
}
