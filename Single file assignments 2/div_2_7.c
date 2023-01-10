/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a2_p8
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if (a%2==0 && a%7==0) {
        printf("The number is divisible by 2 and 7\n");
    }
    else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}
