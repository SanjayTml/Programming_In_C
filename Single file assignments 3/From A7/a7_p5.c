/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a7_p5
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

//Declaring functions
void aqsrt(int *arr, int n);
int asorting(const void *,const void *);
void dqsrt(int *arr, int n);
int dsorting(const void *,const void *);
void out();

int main() {
    int n;
    char ch;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //Declaring and initializing function pointer
    void (*function[])(int *,int) = {aqsrt,dqsrt,out};
    getchar();
    //Loop to check conditions
    while(1){
        scanf("%c",&ch);
        getchar();
        if(ch=='a'){
            function[0](arr,n);
        }
        else if(ch=='d'){
            function[1](arr,n);
        }
        else if(ch=='e'){
            function[2](arr,n);
        }
        for(int j=0;j<n;j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
    return 0;
}

//Defining Functions
int asorting(const void *va, const void *vb){
    const int *a = (const int*) va;
    const int *b = (const int*) vb;
    if(*a < *b){
        return -1;
    }
    else if(*a > *b){
        return 1;
    }
    else{
        return 0;
    }
}

//Function calling qsort with asorting function
void aqsrt(int arr[],int n){
    qsort(arr, n, sizeof(arr[0]), asorting);
}

int dsorting(const void *va, const void *vb){
    const int *a = (const int*) va;
    const int *b = (const int*) vb;
    if(*a < *b){
        return 1;
    }
    else if(*a > *b){
        return -1;
    }
    else{
        return 0;
    }
}

//Function calling qsort with dsorting function
void dqsrt(int arr[],int n){
    qsort(arr, n, sizeof(arr[0]), dsorting);
}

void out(){
    exit(0);
}
