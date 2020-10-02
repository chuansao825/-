#ifndef _CIRCLEDLIST_H
#define _CIRCLEDLIST_H

#include <stdio.h>
#include <stdlib.h>
struct Node{
	Node* next;
	int code;			//the code of the member
	int idnumber;
};
static int LengthOfList = 7;		//length of circle
static int UpBoundNumber = 20;						//the upboundnumber


Node* Find( Node* currentnode , int UpBoundNumber );
Node* CreateList();				//create a lsit which length as LenghOfList
Node* CreateANode();			//
Node* ResetList(Node* currentnode);				//free the current node and reset the list ,return the next node

#endif
