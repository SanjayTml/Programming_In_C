/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a6_p9
*/

#include <stdio.h>
#include <stdlib.h>

struct list{
	int value;
	struct list *p;
};

//Function to add value at last
struct list * push_back ( struct list * dynlist , int value )
{
		struct list * cursor , * newel ;
		cursor = dynlist ;
		newel = ( struct list *) malloc ( sizeof ( struct list ));
		if ( newel == NULL )
		{
		return dynlist ;
		}
		newel-> value = value ;
		newel-> p = NULL ;
		 if ( dynlist == NULL )
            return newel ;
		 while ( cursor-> p != NULL )
            cursor = cursor-> p ;
		 cursor-> p = newel ;
		 return dynlist ;
}

//Function to add element in the beginning
struct list * beginning ( struct list * dynlist , int value )
{
		struct list * newel ;
		newel = ( struct list *) malloc ( sizeof ( struct list ));
		if ( newel == NULL )
		{
		return dynlist ;
		 }
		  newel-> value = value ;
		 newel-> p = dynlist ;
		 return newel ;
		}

//Function to print the list
void print_list ( struct list * dynlist )
{
    struct list * newlist ;
    for ( newlist = dynlist ; newlist ; newlist = newlist-> p )
    {
         printf ("%d ", newlist->value ) ;
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

//Function to remove first element
struct list * removefirst ( struct list * dynlist )
 {
 	if (dynlist == NULL)
 		return dynlist;
struct list *new = dynlist->p;
dynlist->p = NULL;
return new;
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

//Function to replace position
struct list* positionrep(struct list *dynlist, int pos, int value)
{
    if ((pos < 0) || (dynlist[pos-1].p == NULL))
    {
        printf("Invalid position!\n");
        return dynlist;
    }
    struct list *newel;
     newel = (struct list *) malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf("Error allocating memory\n");
        return dynlist;
    }
    newel->value = value;
    newel->p = dynlist[pos - 1].p;
    dynlist[pos - 1].p = newel;

    return dynlist;
}

int main(){
    int value,pos;
    char ch;
    struct list *dynlist  = NULL;
    while(1)
    {
	scanf("%c", &ch);
	//Condition statements
		switch (ch)
		{
		case 'a':
			{
            scanf("%d", &value);
			dynlist = push_back(dynlist, value);
			break;
            }
		case 'b':
			{
            scanf("%d", &value);
			dynlist = beginning(dynlist, value);
			break;
            }
        case 'r':
			{
            dynlist = removefirst(dynlist);
			break;
            }
        case 'p':
			{
            print_list(dynlist);
			break;
            }
        case 'i':
			{
            scanf("%d",&pos);
            scanf("%d",&value);
            dynlist=positionrep(dynlist,pos,value);
			break;
            }
        case 'R':
			{
            dynlist=reverselist(dynlist);
			break;
            }
        case 'q':
			{
            dispose_list(dynlist);
			exit(1);
			break;
            }
		}
    }
    return 0;
}
