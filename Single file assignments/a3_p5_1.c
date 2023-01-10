/*
    CH-230-A by Dr. Kinga Lipskoch
    Name: Sanjay Timilsena
    Username: stimilsena
    Mail: s.timilsena@jacobs-university.de
    Problem: a3_p5
*/

#include <stdio.h>
    int main() {
        char c;
        int n;
        int i;
        double temp[100];
        printf("Enter Character:\n");
        scanf("%c",&c);
        getchar();
        printf("Enter integer:\n");
        scanf("%d",&n);
        getchar();
        double sum;
        printf("Enter Temperatures:\n");
        for(i=1;i<=n;i++){
            scanf("%lf",&temp[i]);
            sum=sum+temp[i];
        }
        if (c=='s'){
            printf("The sum of the temperatures is:%lf\n",sum);
        }
        else if(c=='p') {
            printf("The list of temperatures:\n");
            for(i=1;i<=n;i++){
                printf("%lf\n",temp[i]);
            }
        }
        else if(c=='t') {
            double F;
            printf("The temperatures in Fahrenheit:\n");
            for(i=1;i<=n;i++){
                F=(9/5.0)*temp[i]+32.0;
                printf("%lf",F);
            }
        }
        else {
            double mean=sum/(double)n;
            printf("The arithmetic mean of all temperatures is:\n",mean);
        }
        return 0;
}
