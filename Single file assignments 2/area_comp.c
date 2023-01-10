
/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a2_p4
*/



#include<stdio.h>

int main() {
    float a,b,h,area;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&h);
    area=a*a;
    printf("square area=%f\n",area);
    area=a*b;
    printf("rectangle area=%f\n",area);
    area=(1.0/2)*a*h;
    printf("triangle area=%f\n",area);
    area=(1.0/2)*h*(a+b);
    printf("trapezoid area=%f\n",area);
    return 0;
}
