/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a7_p1
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){
    int value; char ch;
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

