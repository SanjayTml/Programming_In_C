
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

//Declaring struct
struct person {
    char name[30];
    int age;
};

//Declaring functions
void (*function)(struct person *,int, int);
void bubble_sort(struct person n_list[], int, int);

int main() {
    int n,criteria=0;
    scanf("%d",&n);
    struct person n_list[n];
    printf("Please enter the names followed by their age:\n");
    //Getting inputs
    for(int i = 0; i<n; i++){
        getchar();
        fgets(n_list[i].name, sizeof(n_list[0].name), stdin);
        n_list[i].name[strlen(n_list[i].name)-1]='\0';
        scanf("%d",&n_list[i].age);
    }
    //Assigning function pointer to bubble_sort function
    function=bubble_sort;
    function(n_list,criteria,n);
    for(int j=0;j<n;j++){
        printf("{%s, %d}; ",n_list[j].name,n_list[j].age);
    }
    printf("\n");
    //Changing criteria for age
    criteria=1;
    function(n_list,criteria,n);
    for(int j=0;j<n;j++){
        printf("{%s, %d}; ",n_list[j].name,n_list[j].age);
    }
    printf("\n");
    return 0;
}

//Defining function
void bubble_sort(struct person n_list[], int criteria, int n)
{
  struct person t   ;
  int c,d;

  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
    //For ordering according to name
      if(criteria==0){
        if (strcmp(n_list[d].name, n_list[d+1].name)>0)
            {
                t = n_list[d];
                n_list[d] = n_list[d+1];
                n_list[d+1] = t;
            }
        else if (strcmp(n_list[d].name, n_list[d+1].name)==0)
            {
                if (n_list[d].age > n_list[d+1].age){

                    t = n_list[d];
                    n_list[d] = n_list[d+1];
                    n_list[d+1] = t;
                }
            }
      }
      //For ordering according to age
      else if(criteria==1){
        if (n_list[d].age > n_list[d+1].age)
            {
                t = n_list[d];
                n_list[d] = n_list[d+1];
                n_list[d+1] = t;
            }
        else if (n_list[d].age == n_list[d+1].age)
            {
                if (strcmp(n_list[d].name, n_list[d+1].name)>0){
                    t = n_list[d];
                    n_list[d] = n_list[d+1];
                    n_list[d+1] = t;
                }
            }
      }
    }
  }
}
