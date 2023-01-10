/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p8
*/

#include <stdio.h>
/*Declaring and defining the function that prints the trapezoid*/
float sum(float num[], int n);
float average(float num[], int n);
float sum(float num[], int n){
    float s;
    for(int j=0;j<=n;j++){
        s=s+num[j];
    }
    return s;
}

float average(float num[], int n){
    float s,avg;
    for(int j=0;j<=n;j++){
        s=s+num[j];
    }
    avg=s/(float)n;
    return avg;
}

int main() {
        float num[10];
        int n;
        printf("Enter Floats:\n");
        for(int i=0;i<10;i++){
            scanf("%f",&num[i]);
            n=n+1;
            if(num[i]==-99.0){
                break;
            }
        }
        printf("The sum is:%f\n",sum(num,n));//Calling the sum function and printing
        printf("The average is:%f\n",average(num,n));
        return 0;
}
