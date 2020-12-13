#ifndef queueg_h
#define queueg_h
 
#include <stdio.h>
#include <stdlib.h>
  
typedef int DataType;
  
typedef struct node_{
         DataType data;
	      struct node_ *next;
	       } Node;
 
 typedef struct list_{
          Node *head;
	       Node *tail;
	            Node *current;
		     } List;

 void initList(List *);
  void inQueue(List *, DataType);
   void outQueue(List *);
    Node *frontQueue(List *);
     int getLength(List *);
      void dispList(List *);
       
#endif
