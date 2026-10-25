#include<stdio.h>

int main(){
    int n;
    printf("Enter the value for which you want to calculate factorial : ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    printf("factorial of given no. is: %d",fact);
    return 0;
}