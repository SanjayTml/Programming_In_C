/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a7_p2
*/

#include<stdio.h>
#include<stdlib.h>

struct list{
	char ch;
	struct list *p;
	struct list *back;
};


//Function to add element in the beginning
struct list * beginning ( struct list * dynlist , char ch )
{
		struct list * newel;
		newel = (struct list *) malloc(sizeof(struct list));
		if (newel == NULL)
		{
		return dynlist;
		 }
        newel-> ch = ch;
        newel-> back = NULL;
        newel-> p = dynlist;
        if (dynlist != NULL){
            dynlist->back = newel;
        }
        return newel;
}

//Function to print the list
void print_list ( struct list * dynlist )
{
    struct list * newlist ;
    for ( newlist = dynlist ; newlist ; newlist = newlist-> p )
    {
         printf ("%c ", newlist->ch ) ;
    }
    printf("\n");
}


//Function to free memory allocation
void dispose_list ( struct list * dynlist )
{
    struct list * anything ;
    while ( dynlist != NULL )
    {
        anything = dynlist-> p ;
        free ( dynlist ) ;
        dynlist = anything ;
    }
}


//Function to reverse the list
struct list * reverselist ( struct list * dynlist )
{
		struct list * prev=NULL , *next=NULL, *holder ;
		holder = dynlist ;
		while ( holder != NULL ){
			 next = holder-> p ;
			 holder->p = prev;
			 prev = holder;
			 holder = next;
		}

		 return prev ;
}


struct list * DeleteNode( struct list *head, char ch )
{
    int count=0;
    for ( struct list *current = head; current; )
    {
        if ( current->ch == ch )
        {
            count++;
            struct list *tmp = current;

            if ( current->p )
            {
                current->p->back = current->back;
            }

            if ( current->back )
            {
                current->back->p = current->p;
                current = current->p;
            }
            else
            {
                head = current->p;
                current = head;
            }

            free(tmp);
        }
        else
        {
            current = current->p;
        }
    }

    if(count==0){
        printf("The element is not in the list!\n");
    }
    return head;
}

int main(){
    int n;
    char ch;
    struct list *dynlist  = NULL;
    while(1)
    {
	scanf("%d", &n);
	getchar();
	//Condition statements
		switch (n)
		{
		case 1:
			{
            scanf("%c", &ch);
			dynlist = beginning(dynlist, ch);
			break;
            }
		case 2:
			{
            scanf("%c", &ch);
			dynlist=DeleteNode(dynlist,ch);
			break;
            }
        case 3:
			{
            print_list(dynlist);
			break;
            }
        case 4:
			{
            print_list(reverselist(dynlist));
			break;
            }

        case 5:
			{
            dispose_list(dynlist);
			exit(1);
			break;
            }
		}
    }
    return 0;
}
