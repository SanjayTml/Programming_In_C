/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a1_p4
    The corrected program for a1_p4 is as follows;
*/


#include<stdio.h>

int main() {
    int x,y,sum, prod, diff, rem;
    float div;
    x=17;
    y=4;
    sum = x+y;
    prod = x*y;
    diff = x-y;
    div = (float)x/y;
    rem = x%y;
    printf("x=%d\ny=%d\nsum=%d\nproduct=%d\ndifference=%d\ndivision=%f\nremainder of division=%d\n", x,y,sum,prod,diff,div,rem);
    return 0;

}
