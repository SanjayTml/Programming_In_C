/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a6_p4
*/

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    int prod =0;
    scanf("%d",&n);
    int x[n],y[n];      //Initializing arrays of size n
    //Getting inputs
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&y[i]);
    }
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    for(int i=0;i<n;i++){
        printf("%d\n",x[i]*y[i]);
    }
    #endif // INTERMEDIATE

    //Calculating scalar product
    for(int i=0;i<n;i++){
        prod = prod + x[i]*y[i];
    }
    printf("The scalar product is:%d\n",prod);
    return 0;
}



