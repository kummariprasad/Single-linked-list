#include"myheader.h"

SLL *search(SLL *ptr,int data)
{
	SLL *temp=NULL;

	int cnt=0;

	if(ptr==NULL)
	{
		printf("SLL is empty\n");
		return ptr;
	}
	else
	{
		temp=ptr;
		while(temp!=NULL)
		{
			cnt++;

			if(temp->data==data)
			{
				printf("\n%d found at position:%d\n",temp->data,cnt);
				break;
			}	
			
			temp=temp->link;
		}

	}
}
