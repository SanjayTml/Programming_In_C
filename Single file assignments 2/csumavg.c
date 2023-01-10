/*
   CH-230-A
   a3_p8.c
   Sanjay Timilsena
   stimilsena@jacobs-university.de
*/

#include <stdio.h>
/*Declaring the sum and average functions*/
float sumNum(float n[],int count);
float avgNum(float n[],int count);

int main(){
    float n[10];
    int i=0,count=0;
    while(i<10){
        scanf("%f",&n[i]);
        if(n[i]==-99.0){
            break;}
        count++;
        i++;

    }
    printf("Sum of numbers: %f\n",sumNum(n,count));//Calling and printing the sum function
    printf("Average of numbers: %f\n",avgNum(n,count));//Calling and printing the average function

    return 0;
}
/*Defining the sum function*/
float sumNum(float n[],int count){
    float sum;
    for(int i=0;i<count;i++){
        sum+=n[i];
    }
    return sum;
}

/*Defining the average function*/
float avgNum(float n[],int count){
    float sum,avg;
    for(int j=0;j<count;j++){
        sum+=n[j];
    }
    avg=sum/(float)count;
    return avg;
}
