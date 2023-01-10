#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
#define MAX 10

//Defining functions
int empty(stack *s)
{
 if(s->top==-1)
      return(1);
 return(0);
}

//Function to check if stack is full
int full(stack *s)
{
 if(s->top==MAX-1)
     return(1);
 return(0);
}

//Function to push values to stack
void push(stack *s,int x)
{
 s->top=s->top+1;
 s->data[s->top]=x;
}

//Function to get value from stack
int pop(stack *s)
{
 int x;
 x=s->data[s->top];
 s->top=s->top-1;
 return(x);
}
