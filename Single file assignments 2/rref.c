/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p10
*/

#include <stdio.h>
/*Declaring the functions*/
float product(float a, float b);                    //Function that gives the product
void productbyref(float a, float b, float *p);      //Function that gives the product with reference
void modifybyref(float *a, float *b);               //Function that returns the change by reference

int main() {
        float a,b;
        float *ptr_a=&a,*ptr_b=&b;
        float *p;
        p=&a; //Just to initialize
        printf("Enter two floats:\n");
        scanf("%f",&a);
        scanf("%f",&b);
        printf("Product of two:%f\n",product(a,b));
        productbyref(a,b,p);
        modifybyref(ptr_a,ptr_b);
        return 0;
}

float product(float a, float b){
    float prod;
    prod=a*b;
    return prod;
}

void productbyref(float a, float b, float *p){
    float prod;
    prod=a*b;
    p=&prod;
    printf("Product by ref:\n");
    printf("%f\n",*p);
}

void modifybyref(float *a, float *b){
   *a+=3;
   *b+=11;
    printf("Modified by ref:\n");
    printf("%f\n",*a);
    printf("%f\n",*b);
}
