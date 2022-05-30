#include"myheader.h"
// add end
SLL *add_end(SLL *ptr)
{
	SLL *new=NULL,*temp=NULL;

	new=calloc(1,sizeof(SLL));

	if(new==NULL)
	{
		printf("Memory allocation failed\n");
		return ptr;
	}

	printf("Enter the Data:");
	scanf("%d",&new->data);

	if(ptr==NULL)
	{
		ptr=new;
	}

	else
	{
		temp=ptr;

		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=new;
	}

	return ptr;
}
