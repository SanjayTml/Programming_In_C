#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
char s[30];
struct stack *next;
};
typedef struct stack STACK;

struct top
{
int num;
STACK *top;
};
typedef struct top TOP;


void push(TOP *top, char str[30])
{
STACK *temp;
temp=malloc(1*sizeof(STACK));
temp->next = NULL;
strcpy(temp->s, str);

if(top->num==0)
{
     top->top=temp;
     top->num=1;
}
else
{
    temp->next=top->top;
    top->top=temp;
    top->num++;
}
}

void pop (TOP *top, char s[30])
{
STACK *temp;
temp=top->top;

    temp=temp->next;
    strcpy(s,top->top->s);
    free(top->top);
    top->top=temp;
    top->num--;
 }

 void create_stack(TOP *s, char str[1000])
 {
char temp1[30];
int i=0, j=0;
while(1)
{
    if(str[i]!=' ' && str[i]!='\0')
    {
        temp1[j]=str[i];
        j++;
    }
    else
    {
        temp1[j]='\0';
        push(s, temp1);
        j=0;
    }
    if(str[i]=='\0')
    {
        break;
    }
    i++;
   }
  }


void display(TOP *top)
   {
    STACK *cursor;
    cursor=top->top;

    while(cursor!=NULL)
    {
        printf("%s\n ", cursor->s);

        cursor=cursor->next;
    }
 }

 void compare(TOP *top, char *s)
 {
char s2[1000];
s2[0]='\0';
char ret[30];
int len;


pop(top,ret);
strcpy(s2, ret);

while(top->top!=NULL)
{
    len=strlen(s2);
    s2[len]=' ';
    s2[len+1]='\0';
    ret[0]='\0';
    pop(top,ret);
    strcat(s2, ret);
}

 if(strcmp(s, s2)==0)
     printf("The sentence is palindromic by words!\n");

 else
    printf("The sentence is not palindromic by words!\n");

}

int main()
{
char input[1000];
TOP top;
top.num=0;
top.top=NULL;

while(1)
{
fgets(input, 100, stdin);

input[strlen(input)-1]='\0';

if(strcmp(input, "exit")==0)
    break;

    create_stack(&top, input);


    compare(&top, input);


 }



    return 0;
}
