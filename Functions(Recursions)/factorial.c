#include<stdio.h>
int fact(int n){
    if (n==0)
    return 1;
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    printf("enter the number to find factorail:\n");
    scanf("%d",&n);
    int factorial=fact(n);
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}



