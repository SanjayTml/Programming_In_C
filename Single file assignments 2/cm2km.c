/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p3
*/

#include<stdio.h>

int main() {
    int cm;
    float convert(int cm){  //A function that converts cm to km
        float km=cm/100000.0;
        return km;
    };
    scanf("%d",&cm);
    printf("Result of conversion: %f\n", convert(cm)); //Printing the called function
    return 0;
}
