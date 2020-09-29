#include "linkedlist.h"
#include <time.h>

int LENGTH(Node* header);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//create a new linked list
	srand((unsigned)time(NULL)); 
	Node* tempnode = NULL;
	int LengthOfList = (int)(rand()%20)+1;			//the length is between 1 to 20
	Node* header = CreateList();
	tempnode = header;
	for(int i =0;i<LengthOfList;i++)
	{
		Insert(tempnode,header);
		tempnode = tempnode->next;
	}
	
	//solve the question
	printf("the length is %d\n",LengthOfList);
	printf("the result be solved is %d",LENGTH(header));
	
	return 0;
}

int LENGTH(Node* header)
{
	int length = 0;
	Node* tempnode = header;
	while(tempnode->next != NULL)
	{
		length++;
		tempnode = tempnode->next;
	}
	
	return length;
}
