#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
struct Node{
	int element;
	struct Node* next;			//the pointer to the next node
};
int IsEmpty( Node* header );				//check if the list is empty
int IsLast(Node* position);					//check if the position is the last node
Node* Find( Node* header,Node* position );								
Node* CreateList();							//create a empty list and return the header
Node* Insert( Node* position,Node* header );	//insert a node after the position node and return the new node
void Delete();
void DeleteList( Node* header );			//delete the all list
Node* GetLastNode(Node* header);			//get the point of the last node
Node* FindPreviousNode(Node* header , Node* position);		//find the previous node
void PrintLinkedList(Node* header , int LengthOfLink);		//print the whole list
#endif
