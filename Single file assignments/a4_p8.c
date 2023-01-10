/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a4_p8
*/

#include <stdio.h>
#include<stdlib.h>

/*Declaring the functions*/
void output(int arr[][30], int n);              //Function that prints the matrix
void diagonal(int arr[][30], int n);            //Function that prints the upper triangle items

int main() {
        int arr[30][30];
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){                   //Getting inputs for the matrix
            for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            }
        }
        /*Calling the Functions*/
        output(arr, n);
        diagonal(arr, n);
        return 0;
}

void output(int arr[][30], int n){
    printf("The entered matrix is:\n");
    for(int i=0;i<n;i++){                       //Printing the values in matrix form
        for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void diagonal(int arr[][30], int n){
    int a;
    a=n-1;
    printf("Under the secondary diagonal:\n");
    for(int i=1;i<n;i++){                       //Printing the upper triangle items
        for(int j=a;j<n;j++){
        printf("%d ",arr[i][j]);
        }
        a--;
    }
    printf("\n");
}
