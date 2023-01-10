/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a5_p11
*/

#include <stdio.h>
#include<stdlib.h>

/*Declaring the function*/
int check_prime(int n,int divider);

int main() {
    int x,v;
    scanf("%d",&x);                         //Gets input
    v=check_prime(x,x/2);                   //Calls the function check_prime(int n,int divider)
    if(v==1){
        printf("%d is prime\n",x);
    }
    else{
        printf("%d is not prime\n",x);
    }
    return 0;
}

/*Defining the function*/
int check_prime(int n, int divider){
    if(n<2){
        return 0;
    }
    else{
        if(divider==1){                                 //When factorial comes to 1 return 1
            return 1;
        }
        else if(n%divider==0){                          //When factorial comes before 1 return 0
            return 0;
        }
        else{
            return check_prime(n,divider-1);                   //Decrease the divider and keep checking for next factorial
        }
    }
}
