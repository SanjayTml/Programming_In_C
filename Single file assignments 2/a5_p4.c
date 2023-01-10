/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p4
*/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

/*Declaring the functions*/
void divby5(float arr[], int n);

int main() {
    int n;
    float *arr;
    scanf("%d",&n);
    getchar();
    arr=(float*) malloc(sizeof(float)*n);       //Dynamically allocating the memory of the arr
    if(arr==NULL){                          //Checking for memory allocation error
        printf("Dynamic Memory Allocation Error!");
        exit(0);
    }
    printf("Input values:\n");
    for(int l=0;l<n;l++){
        scanf("%f",&arr[l]);
    }
    printf("Before:\n");
    for(int i=0;i<n;i++){
        printf("%.3f ",arr[i]);     //Printing with precision 3 after decimal
    }
    divby5(arr, n);              //Calling the function
    printf("\nAfter:\n");
    for(int k=0;k<n;k++){
        printf("%.3f ",arr[k]);     //Printing with precision 3 after decimal
    }
    printf("\n");
    free(arr);                      //Deallocating the memory of arr
    return 0;
}

void divby5(float arr[], int n){
    for(int j=0;j<n;j++){
        arr[j]=arr[j]/5.0;          //Dividing each value by 5.0
    }
}
