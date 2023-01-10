/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a6_p1
*/

//defining function macro
#define swap(a,b,t) {t hold = a;a = b;b = hold;}
#include <stdio.h>
#include<stdlib.h>

int main() {
    int a,b;
    double x,y;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%lf",&x);
    scanf("%lf",&y);
    swap(a,b,int);          //swapping integers calling function macro
    swap(x,y,double);        //swapping doubles calling function macros
    printf("After swapping:\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%.6f\n",x);
    printf("%.6f\n",y);
    return 0;
}

