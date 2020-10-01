#include "linkedlist.h"
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//input the mink and maxk
	int mink , maxk;
	printf("input mink and maxk\n");
	scanf("%d%d",&mink,&maxk);
	
	int LengthOfList = 10;
	Node* tempnode = NULL;
	
	//create a list 
	Node* header = CreateList();
	tempnode = header;
	for( int i=0 ; i<LengthOfList ; i++ )
	{
		Insert( tempnode , header ) -> element =  i*4 ;
		tempnode = tempnode->next;
	}
	
	//delete the node
	Node* ptr = NULL;
	Node* node1 = NULL;			//the node before the node to be first deleted
	Node* node2 = NULL; 		//the node after the node to be deleted finally
	tempnode = header;
	while(tempnode->next!=NULL && tempnode->next->element <= mink  )
	{
		tempnode = tempnode->next;
	}
	node1 = tempnode;
	tempnode = tempnode->next;
	while( tempnode!=NULL&& tempnode->element < maxk )
	{
		ptr = tempnode->next;
		free(tempnode);
		tempnode = ptr;
	}
	node2 = tempnode;
	//reset the list
	node1->next = node2;
	//printf the list
	PrintLinkedList(header,LengthOfList);
	
	//end the program
	DeleteList(header);
	return 0;
}
