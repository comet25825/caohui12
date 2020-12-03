#include "stack.h"

void initList(List *list){
    list->head = NULL;
    list->tail = NULL;
    list->current = NULL;
    return;
}

void push(List *list, dataType data){
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;

    if(list->head == NULL){
	list->tail = node;
    }else{
	node->next = list->head;
    }
    list->head = node;

    return;
}

void pop(List *list){
    list->head = list->head->next;

    return;
}

Node *getTop(List *list){
    Node *node = (Node *)malloc(sizeof(Node));
    node = list->head;

    return node;
}

int getLength(List *list){
    Node *node = (Node *)malloc(sizeof(node));
    node = list->head;
    int i = 0;
    while(node != NULL){
	node = node->next;
	i++;
    }

    return i;
}

void dispList(List *list){
    Node *node = (Node *)malloc(sizeof(Node));
    node = list->head;
    int i = 0;
    while(node != NULL){
	printf("The %dth node: %d\n", i + 1, node->data);
	node = node->next;
	i++;
    }
    printf("Display finished!\n");

    return;
}

int priority(char x){
    switch(x){
	case '+' : break;
	case '-' : break;
	case '=' : return 1;
        case '*' : break;
	case '/' : return 2;
	case '(' : return 3;
    }
}

double compute(double x, double y, char op){
    switch(op){
	case '+': return x + y;
        case '-': return x - y;
	case '*': return x * y;
	case '/': return x / y;
    }
}

int operate(){
    char s2[500];
    char node[1001];
    char op;
    double s1[500];
    int top1 = -1, top2 = -1;
    double x, y;
    gets(node);
    for(int i = 0; i < strlen(node); i++){
	if(node[i] >= '0' && node[i] <= '9'){
	    double value = 0;
	    while(node[i] >= '0' && node[i] <= '9'){
		value = 10*value + node[i] - '0';
		i++;
	    }
	    if(node[i] == '.'){
		int r = 10;
		i++;
		while(node[i] >= '0' && node[i] <= '9'){
		    value = value + (node[i] - '0')/r;
		    r = 10 * r;
		    i++;
		}
	    }
	    s1[++top1] = value;
	}
        if(node[i] == ')'){
	    while(s2[top2] != '('){
		y = s1[top1--];
	        x = s1[top1--];
	        op = s2[top2--];
	        s1[++top1] = compute(x, y, op);
	    }
	    top2--;
	}
        else{
	    while(top2 != -1 && s2[top2] != '(' && priority(s2[top2])){
		y = s1[top1--];
	        x = s1[top1--];
	        op = s2[top2--];
	        s1[++top1] = compute(x, y, op);
	    }
	    s2[++top2] = node[i];
	}
    }
    return s1[top1];
}
