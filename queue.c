#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

  void initList(List *list){
            list->head = NULL;
	         list->tail = NULL;
		       list->current = NULL;
		         
		             return;
			       }
 
 void inQueue(List *list, DataType data){

          Node *node = (Node *)malloc(sizeof(Node));
	       node->data = data;
	            node->next = NULL;
		     

		         if(list->head == NULL){
			              list->head = node;
				           }else{
					                //node->next = list->head;
					                list->tail->next = node;

							     }
			      list->tail = node;
			       
			           return;
				    }
 
 void outQueue(List *list){
          list->head = list->head->next;
	   
	       return;
	        }
 
 Node *frontQueue(List *list){
          Node *node = (Node *)malloc(sizeof(Node));
	      node = list->head;
	       
	           return node;;
		    }
 
 int getLength(List *list){
          Node *node = (Node*)malloc(sizeof(Node));
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
	printf("the %dth node: %d\n", i + 1, node->data);
	node = node->next;
	i++;
    }
    printf("display finished\n");

    return;
}
