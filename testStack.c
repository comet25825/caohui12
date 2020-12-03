#include "stack.h"

int main(int argc, char **argv)
{
    List *list = (List *)malloc(sizeof(List));
    initList(list);
    push(list, 2);
    push(list, 4);
    push(list, 7);
    push(list, 8);
    dispList(list);
    Node *tmp = getTop(list);
    printf("The getTop result: %d\n", tmp->data);
    pop(list);
    dispList(list);
    pop(list);
    dispList(list);
    printf("The list: %d\n", getLength(list));

    return 0;
}
