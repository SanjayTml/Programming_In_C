/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a6_p3
*/

//defining function macro
//Macro for maximum value
#define max(a,b,c) ({a>b?(a>c?a:c):(b>c?b:c);})
//Macro for minimum value
#define min(a,b,c) ({a<b?(a<c?a:c):(b<c?b:c);})
//Macro for mid ranges
#define mid_rage(a,b,c) ({(min(a,b,c)+max(a,b,c))/2.0;})
#include<stdio.h>
#include<stdlib.h>

int main() {
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("The mid-range is: %.6f\n",mid_rage(a,b,c));     //Calls macro for mid value and prints
    return 0;
}



