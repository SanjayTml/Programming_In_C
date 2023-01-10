
/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a1_p3
    The corrected program for a1_p3 is as follows;
*/

#include <stdio.h>
int main() {
float result; /* The result of the division */
int a = 5;
float b = 13.5;
result = a / b;
printf("The result is %f\n", result);
return 0;
}

/* Firstly, there was an # missing in the first line of code before include.
    Secondly, the data type for b was incorrect, it was int so changed into float.
    Thirdly, the calling/indexation of data type in output was incorrect, it was %d
    which stands for integer so changed into %f for float.
    */
