/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p2
*/

#include <stdio.h>
#include<string.h>

/*Declaring the functions*/
void divby5(float arr[], int size);

int main() {
    int size;
    float arr[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    size = 6;
    printf("Before:\n");
    for(int i=0;i<size;i++){
        printf("%.3f ",arr[i]);     //Printing with precision 3 after decimal
    }
    divby5(arr, size);              //Calling the function
    printf("\nAfter:\n");
    for(int k=0;k<size;k++){
        printf("%.3f ",arr[k]);     //Printing with precision 3 after decimal
    }
    printf("\n");
    return 0;
}

void divby5(float arr[], int size){
    for(int j=0;j<size;j++){
        arr[j]=arr[j]/5.0;          //Dividing each value by 5.0
    }
}
