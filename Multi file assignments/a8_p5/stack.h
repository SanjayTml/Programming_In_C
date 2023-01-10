//Struct definitions
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

//Prototyping the functions
void push(TOP *top, char str[30]);
void pop (TOP *top, char s[30]);
void create_stack(TOP *s, char str[1000]);
void display(TOP *top);
void compare(TOP *top, char *s);

