
/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a1_p2
    The corrected program for a1_p2 is as follows;
*/
#include <stdio.h>

int main() {
    int result; /* The result of our calculation */
    result = ((2 + 7) * 9)/3;
    printf("The result is %d\n", result);
    return 0;
}

/* The a1_p2 assignment problem did not have a defined result variable/data container in the output section i.e
    printf("The result is %d\n", *expected a int data container*);
    Also, we need to remove previous .c file in order to not clash with the data types and program returns of two
    different files of same extensions inside same project.
 */
