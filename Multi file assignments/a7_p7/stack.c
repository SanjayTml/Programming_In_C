#include <stdio.h>
#include<stdlib.h>
#include"stack.h"


int MAXSIZE = 11;
int bottom = -1;

int isempty() {

   if(bottom == -1)
      return 1;
   else
      return 0;
}

int isfull() {

   if(bottom == MAXSIZE)
      return 1;
   else
      return 0;
}

void pop(struct stack alist) {
   int data;
   if(!isempty()) {
      data = alist.array[bottom];
      printf(" %d",data);
      bottom = bottom - 1;
      return;
   } else {
      printf(" Stack Underflow");
      return;
   }
}

void push(struct stack alist, int data) {

   if(!isfull()) {
      bottom = bottom + 1;
      alist.array[bottom] = data;
   } else {
      printf("Pushing Stack Overflow\n");
   }
}

void emp(struct stack alist){
    printf("Emptying Stack");
    while(!isempty()) {
      pop(alist);
   }
   printf("\n");
}

