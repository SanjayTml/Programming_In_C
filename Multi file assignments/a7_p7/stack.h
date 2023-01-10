// A structure to represent a stack
struct stack {
    unsigned int count;
    int array[12];
};

int isempty();
int isfull();
void pop(struct stack alist);
void push(struct stack alist, int data);
void emp(struct stack alist);

