#include"myheader.h"

void display(SLL *ptr)
{
	if(ptr==NULL)
	{
		printf("SLL is empty\n");
	}

	else
	{

		printf("\n================OUTPUT====================\n");

		while(ptr!=NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->link;
		}

		printf("\n===========================================\n");
	}
}
