
/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a2_p6
*/



#include<stdio.h>

int main() {
    double x,y;
    printf("\nEnter a double value:");
    scanf("%lf",&x);
    printf("\nEnter another double value:");
    scanf("%lf",&y);
    double *ptr_one = &x;
    double *ptr_two = &x;
    double *ptr_three = &y;
    printf("\nThe value of pointer one=%p",ptr_one);
    printf("\nThe value of pointer two=%p",ptr_two);
    printf("\nThe value of pointer three=%p",ptr_three);
    return 0;
}
