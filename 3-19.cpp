#include "stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	//initialize a char array
	int length;
	length = 10;
	char string[length] = {'[','(','[','{','}','(',')',']',')','}'};
	
	//the flag means the truth of result:if flag==1,right match;else ,wrong match
	int flag = 1;	
	
	//create a stack
	Node* header=CreateStack();
	//start to solve
	for( int i =0;i<length;i++ )
	{
		char ch  = string[i];
		//if ch is (,{,[ ,then push in the stack
		if(ch=='{' || ch=='[' || ch=='(')
		{
			Node* newnode = CreateANode();
			newnode->ch = ch;
			Push( header,newnode );
		}
		//else pop the top node
		else
		{
			if(ch=='}')
			{
				if( header->next==NULL || Pop(header)->ch != '{' )
				{
					flag = 0;
					break;
				}
			}
			else if(ch==']') 
			{
				if( header->next==NULL || Pop(header)->ch != '[' )
				{
					flag = 0;
					break;
				}
			}
			else if(ch==')')
			{
				if( header->next==NULL || Pop(header)->ch != '(' )
				{
					flag = 0;
					break;
				}
			}
		//end
		}
	}
	//check the flag
	if(flag == 1)
		printf("right match\n");
	else
		printf("wrong match\n");
		
	
	
	
	return 0;
	                                                                                                                                                                                                           
}
