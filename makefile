SLL:main.o add_beg.o display.o add_end.o del_first.o del_last.o del_data.o search.o no_of_nodes.o reverse.o insert_data.o del_based_pos.o del_node_bottom.o sorting.o removeduplicate.o middlenode.o middlenodebypointer.o reverserbyrecursion.o 
	cc main.o add_beg.o display.o add_end.o del_first.o del_last.o del_data.o search.o no_of_nodes.o reverse.o insert_data.o del_based_pos.o del_node_bottom.o sorting.o removeduplicate.o middlenode.o middlenodebypointer.o reverserbyrecursion.o -o SLL 
main.o: main.c
	cc -c main.c
add_beg.o: add_beg.c
	cc -c add_beg.c
display.o: display.c
	cc -c display.c
add_end.o: add_end.c
	cc -c add_end.c
del_first.o: del_first.c
	cc -c del_first.c
del_last: del_last.c
	cc -c del_last.c
del_data: del_data.c
	cc -c del_data.c
search.o: search.c
	cc -c search.c
no_of_nodes: no_of_nodes.c
	cc -c no_of_nodes.c
reverse.o: reverse.c
	cc -c reverse.c
insert_data.o: insert_data.c
	cc -c insert_data.c
del_based_pos.o: del_based_pos.c
	cc -c del_based_pos.c
del_node_bottom.o: del_node_bottom.c
	cc -c del_node_bottom.c
sorting.o: sorting.c
	cc -c sorting.c
removeduplicate.o: removeduplicate.c
	cc -c removeduplicate.c 
middlenode.o: middlenode.c
	cc -c middlenode.c
middlenodebypointer.o: middlenodebypointer.c
	cc -c middlenodebypointer.c
reversebyrecursion.o: reverserbyrecursion.c
	cc -c reverserbyrecursion.c
