/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p9
*/

#include <stdio.h>
#include<math.h>
#include<stdlib.h>

/*Declaring the functions*/
int prodminmax(int arr[], int n);

int main() {
        int *arr;
        int n;
        printf("Enter an integer:\n");
        scanf("%d",&n);
        arr=(int*) malloc(sizeof(int)*n);        //Dynamically allocating memory for the array
        printf("Enter values:\n");
        for(int i=0;i<n;i++){                   //Getting all inputs
            scanf("%d",&arr[i]);
        }
        int product=prodminmax(arr,n);          //Calling function
        printf("The product is %d",product);
        free(arr);                              //Deallocating the memory of the array
        return 0;
}

int prodminmax(int arr[], int n){
    int high,low;
    high=arr[0];
    low=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>high){                        //Checking the maximum value
            high=arr[j];
        }
        else if(arr[j]<low){                    //Checking the minimum value
            low=arr[j];
        }
    }
    int prod=high*low;
    return prod;
}
