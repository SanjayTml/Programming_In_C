/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p6
*/

#include <stdio.h>
#include <stdlib.h>
/*Declaring the functions*/
void greatest(int arr[], int n);           //Function that prints two greatest values

int main() {
        signed int *arr;
        int n;
        printf("Enter an integer:\n");
        scanf("%d",&n);
        arr = (int *) malloc(sizeof(int)*n);        //Allocating memory dynamically
        if(arr==NULL){                              //Checking for any memory allocation errors
            printf("Memory Allocation Error!");
            exit(1);
        }
        printf("Enter the values:\n");
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        greatest(arr, n);                           //Calling the function
        free(arr);                                  //Free up the dynamically allocated memory
        return 0;
}

void greatest(int arr[], int n){
    int a,b;
    a=arr[0];
    b=arr[1];
    for(int j=2;j<n;j++){                           //Compares first item with all other except second
        if(arr[j]>a){
            a=arr[j];                               //Stores greatest value in a
        }
        else if(arr[j]>b){
            b=arr[j];                               //Stores second greatest value
        }
    }
    if(a!=arr[0]){                                  //To check if first item is second greatest value
        if(arr[0]>b){
            b=arr[0];
        }
    }
    printf("Two greatest values in array are %d and %d\n",a,b);
}

