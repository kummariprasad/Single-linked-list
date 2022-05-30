#include"myheader.h"
// add beg
SLL *add_beg(SLL *ptr)
{
	SLL *new=NULL;
	
	new=calloc(1,sizeof(SLL));

	if(new==NULL)
	{
		printf("Memory allocation failed\n");
		return ptr;
	}

	printf("Enter the Data:");
	scanf("%d",&new->data);

	new->link=ptr;
	ptr=new;
	

	return ptr;
}
