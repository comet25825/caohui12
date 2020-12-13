#include "queue.h"
  
int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
        initList(list);
	inQueue(list, 4);
	inQueue(list, 6);
	inQueue(list, 8);
	inQueue(list, 10);
	dispList(list);
	Node *tmp = frontQueue(list);
	printf("getTop result: %d\n", tmp->data);
        outQueue(list);
	dispList(list);
	outQueue(list);
	dispList(list);
	printf("the list: %d\n", getLength(list));
	return 0;
}
