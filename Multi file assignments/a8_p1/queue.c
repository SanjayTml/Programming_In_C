/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if(queue_is_full(pq)){
        return 1;
	}
	//Creating new Node
	Node *newitem;
	newitem=(Node*)malloc(sizeof(Node));
	newitem->item=item;
	newitem->next=NULL;
    if(queue_is_empty(pq)){
        pq->front=newitem;
	}
	else{
        pq->rear->next=newitem;
	}
	pq->rear=newitem;
	pq->items++;
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    if(queue_is_empty(pq)){
        return 1;
    }
    //Creating new Node
	Node *newitem;
	newitem=(Node*)malloc(sizeof(Node));
	newitem=pq->front->next;
	*pitem=pq->front->item;
	free(pq->front);   //Freeing the memory of pq
	//If it was last item
    if(queue_is_empty(pq)){
        pq->front=NULL;
        pq->rear=NULL;
	}
	else{
        pq->front=newitem;
	}
	pq->items--;
    return 0;
}

void printq(Queue *pq){
    Node *printer;
    for(printer=pq->front;printer;printer=printer->next){
        printf("%d ",printer->item);
    }
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}
