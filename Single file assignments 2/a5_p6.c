/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p6
*/

#include <stdio.h>
#include<stdlib.h>


int main() {
    int n,pos;
    float *arr;
    scanf("%d",&n);
    getchar();
    arr=(float*) malloc(sizeof(float)*n);       //Allocating the memory of arr dynamically
    if(arr==NULL){                              //Checking for memory allocation error
        printf("Memory allocation error!\n");
        exit(0);
    }
    for(int i=0;i<n;i++){                       //Getting the input
        scanf("%f",&arr[i]);
    }
    for(int j=0;j<n;j++){
        if(arr[j]<0){
            pos=&arr[j]-&arr[0];                //Grabbing the position of first negative value
            break;
        }
    }
    printf("Before the first negative value: %d elements\n",pos);     //Printing the position i.e no. of +ve elements
    free(arr);                                  //Deallocating the memory for arr
    return 0;
}

