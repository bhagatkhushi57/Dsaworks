#include<stdio.h>


int fact(int n){
    if(n==0 || n==1 ) {
        return 1;
    }
    return  n*fact(n-1);
}


int main(){
    int n;
    printf("Enter the value for which you want to calculate factorial: ");
    scanf("%d",&n);
    int result = fact(n);
    printf("Your output value: %d",result);
    return 0;
}