#include<stdio.h>
#include<stdlib.h>

struct Node{

	int data;
	struct Node *link;
};

typedef struct Node SLL;

SLL *add_beg(SLL*);
void display(SLL*);
SLL *add_end(SLL*);
SLL *del_first(SLL*);
SLL *del_last(SLL*);
SLL *del_data(SLL*,int);
SLL *search(SLL*,int);
int no_of_nodes(SLL *,int*);
SLL *reverse(SLL*);
SLL *insert_data(SLL*,int);
SLL *del_node_pos(SLL*,int);
SLL *del_node_bottom(SLL*,int);
SLL *sorting(SLL*);
SLL *removeduplicates(SLL*);
void middle_node(SLL*);
void middle_pointer(SLL*);
SLL *rev_rec(SLL*,SLL*);
