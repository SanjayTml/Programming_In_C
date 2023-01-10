
#ifndef MAX
#define MAX 10
#endif // MAX

//struct definitions
typedef struct stack
{
 int data[MAX];
 int top;
}stack;

//prototyping functions
int empty(stack *s);
int full(stack *s);
void push(stack *s,int x);
int pop(stack *s);

