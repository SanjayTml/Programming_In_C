/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p10
*/

#include <stdio.h>
#include<stdlib.h>

/*Declaring the function*/
int series(int n);

int main() {
    int n;
    scanf("%d",&n);             //Gets input
    series(n);                  //Calls the function series(int n)
    return 0;
}

/*Defining the function*/
int series(int n){
    int item;
    if(n==1){                   //Terminates by printing 1
        printf("1");
    }
    else if(n==0){              //For the input equal to zero, print zero
        printf("0");
    }
    else {                      //Prints the element and recalls the function for next element
        printf("%d,",n);
        item=series(n-1);
        return item;
    }
    return 0;
}
