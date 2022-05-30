#include"myheader.h"

void print(void)
{
	printf("\n===============MENU================\n");


	printf("\n0:exit\n1:Add_end\n2:Display\n3:Add_beg\n4:Del_first\n5:Del_last\n6:Del_data\n7:Search\n8:No_of_Nodes\n");
	printf("9:Reverse\n10:insert_data_based_position\n11:Del_Based_position\n12:Del_node_pos_bottom\n13:sorting\n14:Remove_Duplicates\n15:Find_Middle_node\n");
	printf("16:Find_Middle_Node_by_pointer\n17:Reverse_by_recursion\n");

	printf("\n===================================\n");
}

int main()
{

	SLL *head=NULL,*prev=NULL;

	int choice,index,cnt=1,pos,data;

	while(1)
	{
		print();
		printf("Enter the Choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 0:exit(0);
			case 1:head=add_end(head);
			       break;
			case 2:display(head);
			       break;
			case 3:head=add_beg(head);
			       break;
			case 4:head=del_first(head);
			       break;
			case 5:head=del_last(head);
			       break;
			case 6:printf("Enter the Data to be deleted:");
			       scanf("%d",&data);
			       head=del_data(head,data);
			       break;
		        case 7:printf("Enter the Data to be search:");
			       scanf("%d",&data);
			       search(head,data);
			       break;
			case 8:no_of_nodes(head,&cnt);
			       printf("\nNo of nodes present in list:%d\n",cnt);
			       break;
			case 9:head=reverse(head);
			       break;
			case 10:printf("Enter the position to insert:");
			        scanf("%d",&index);
			        head=insert_data(head,index);
				break;
			case 11:printf("Enter the position to Delete:");
			        scanf("%d",&index);
			        head=del_node_pos(head,index);
				break;
			case 12:printf("Enter the position to Delete from bottom:");
			        scanf("%d",&index);
			        head=del_node_bottom(head,index);
				break;
			case 13:head=sorting(head);
				break;
			case 14:head=removeduplicates(head);
				break;
			case 15:middle_node(head);
				break;
			case 16:middle_pointer(head);
				break;
			case 17:head=rev_rec(head,prev);
				break;

			default:printf("invalid choice\n");
		}
	}
}
