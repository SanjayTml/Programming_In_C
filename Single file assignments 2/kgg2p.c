/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p6
*/

#include <stdio.h>
    int main() {
        int kg,g;
        float to_pounds(int kg, int g){ //Function that converts kg and g to pound
            float pounds=(kg*2.2)+(g*2.2/1000.0);
            return pounds;
        }
        scanf("%d",&kg);
        scanf("%d",&g);
        printf("Result of conversion: %f\n", to_pounds(kg,g)); //Calling and printing the function
    return 0;
    }
