#include "circledlist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int* result = (int*)malloc(sizeof(int)*LengthOfList);
	//initialalize the list
	Node* firstnode = CreateList();
	Node* tempnode = firstnode; 
	for(int i = 0;i<LengthOfList;i++)
	{
		switch(i){
			case 0: tempnode->code = 3;	break;
			case 1:	tempnode->code = 1;	break;
			case 2:	tempnode->code = 7;	break;
			case 3:	tempnode->code = 2;	break;
			case 4:	tempnode->code = 4;	break;
			case 5: tempnode->code = 8;	break;
			case 6: tempnode->code = 4;	break;
		}
		tempnode->idnumber = i+1;
		tempnode = tempnode->next;
	}
	
	//begin the program
	Node* currentnode = firstnode;
	Node* targetnode;
	int templength = LengthOfList;
	for(int i=0;i<templength;i++)
	{
	  targetnode = Find(currentnode,UpBoundNumber);
	  result[i] = targetnode->idnumber;
	   //reset the upbound
	  UpBoundNumber = targetnode->code;
	  currentnode = ResetList(targetnode);
	  LengthOfList--;
	}	
	
	for(int i=0;i<templength;i++)
	{
		printf("%d ",result[i]);
	}
	
	// end the program
	return 0;
}






