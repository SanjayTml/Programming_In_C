
#include <stdio.h>
#include <stdlib.h>

struct stack {
unsigned int count;
int array[12]; // Container
};

int MAXSIZE = 12;
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
      bottom = bottom - 1;
      printf(" %d",data);
      return;
   } else {
      printf(" Stack Underflow");
      return;
   }
}

int push(struct stack alist, int data) {

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

int main() {
    int n;
    char ch;
    struct stack alist;
    while(1){
        scanf("%c",&ch);
        if(ch=='s'){
            scanf("%d",&n);
            getchar();
            printf("Pushing %d\n",n);
            push(alist,n);
        }
        else if(ch=='p'){
            printf("Popping");
            pop(alist);
            printf("\n");
        }
        else if(ch=='e'){
            emp(alist);
        }
        else if(ch=='q'){
            printf("Quit\n");
            break;
        }
    }

   return 0;
}
