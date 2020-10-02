#include "circledlist.h" 
Node* CreateList()
{
	Node* tempnode;
	Node* firstnode = CreateANode();			//the firstnode
	tempnode = firstnode;
	for( int i = 1;i<LengthOfList;i++ )
	{
		tempnode->next = CreateANode();
		tempnode = tempnode->next;	
	}
	Node* lastnode = tempnode;	 				//the last node
	lastnode->next = firstnode;					//make it circular
	
	return firstnode;
}

Node* CreateANode()
{
	Node* node = (Node*)malloc( sizeof(Node) );
	node->next = NULL;
	return node;
}

Node* Find( Node* currentnode , int UpBoundNumber )
{
	//we can mod the upboundnumber with the lengthoflist to simplify the program
	int newupbound = UpBoundNumber % LengthOfList;	
	Node* tempnode = currentnode;
	for( int i=0;i<newupbound-1;i++ )
	{
		tempnode = tempnode->next;
	}
	
	return tempnode;
} 

Node* ResetList(Node* currentnode)
{
	//find the previous node and the next
	Node* previousnode , *nextnode;
	nextnode = currentnode->next;
	Node* tempnode = currentnode;
	while(tempnode->next != currentnode)
	{
		tempnode = tempnode->next;
	}
	previousnode = tempnode;
	
	//reset the list
	previousnode->next = nextnode;
	free(currentnode);
	return nextnode;
}

