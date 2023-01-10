#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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
