#include<stdio.h>
int main(){
    int x;
    printf("The number of days the member is late to return the book : ");
    scanf("%d",&x);
    if (x<=5)
    {
        printf("Fine is of 1 rupee");
    }
    else if (x>5 && x<=10)
    {
        printf("Fine is of 2 rupees");
    }
    else if (x>10 && x<=30)
    {
        printf("Fine is of 5 rupees");
    }
    else
    {
        printf("Your membership is cancelled");
    }
    return 0;
    
}