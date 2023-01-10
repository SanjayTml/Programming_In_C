

/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a1_p1
    The corrected program for a1_p1 is as follows;
*/


#include <stdio.h>

int main() {
    double result; /* The result of our calculation */
    result = (3.0 + 1.0)/5.0;
    printf("The value of 4/5 is %lf \n", result);
    return 0;
}

/* The program in the a1_p1 was giving wrong result because instead of the double data type of 'result'
    the calculation was made in integers. So, adding a decimal converts the int data (3,1 and 5) to float/double
    (3.0,1.0 and 5.0) and gives correct output 0.8000.
*/
