#include<stdio.h>

int main() {
    float a,b;
    printf("Input first double value:");
    scanf("%f",&a);
    printf("Input second double value:");
    scanf("%f",&b);
    printf("sum of doubles=%f\n",a+b);
    printf("differences of doubles=%f\n",a-b);
    printf("square=%f\n",a*a);
    int c,d;
    printf("\nEnter an integer value:");
    scanf("%d",c);
    printf("\nEnter next integer value:");
    scanf("%d",d);
    printf("\nsum of integers=%d",c+d);
    printf("\nproduct of integers=%d",c*d);
    char e,f;
    printf("\nEnter a character:");
    scanf("%c",e);
    getchar();
    printf("\nEnter next character:");
    scanf("%c",f);
    printf("\nsum of chars=%c",e+f);
    return 0;
}
