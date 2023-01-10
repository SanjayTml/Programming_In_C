#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

#ifndef MAX
#define MAX 10
#endif // MAX

int main()
{
     stack s;
     int num,res,init;

     //initializing the struct
     s.top=-1;
     printf("Enter decimal number:\n");
     scanf("%d",&num);
     init = num;

     //Push the remainder to stack
     while((num!=0))
     {
       if(!full(&s))
          {
          push(&s,num%2);
          num=num/2;
          }
       else
          {
          printf("Stack overflow\n");
          exit(0);
          }
     }

     //Print the values on stack that represents the binary
     printf("The binary representation of %d is ",init);
     while(!empty(&s))
        {
        res=pop(&s);
        printf("%d",res);
        }
     printf("\n");
     return 0;
}

