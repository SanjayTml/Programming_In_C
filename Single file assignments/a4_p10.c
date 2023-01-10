/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p10
*/

#include <stdio.h>
#include<math.h>                    //Math library/header file

/*Declaring the functions*/
void proddivpowinv(float a, float b, float* prod, float* div, float* pwr, float* invb);

int main() {
        float a,b,prod,div,pwr,invb;
        printf("Enter two values:\n");
        scanf("%f",&a);
        scanf("%f",&b);
        proddivpowinv(a,b,&prod,&div,&pwr,&invb);       //calling the function
        printf("Product =%f\n",prod);
        printf("Division =%f\n",div);
        printf("Power =%f\n",pwr);
        printf("Inverse of b =%f\n",invb);
        return 0;
}

void proddivpowinv(float a, float b, float* prod, float* div, float* pwr, float* invb){
    *prod=a*b;              //returning product by pointer
    *div=a/b;               //returning division by pointer
    *pwr=pow(a,b);          //returning the power by pointer
    *invb=1/b;              //returning the inverse by pointer
}
