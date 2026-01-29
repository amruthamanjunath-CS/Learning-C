#include<stdio.h>
int fib(int n){
    if(n==0)
    return 0;
    if (n==1)
    return 1;
    else
        return fib(n-1)+fib(n-2);
    
}
    int main(){
        int n;
        printf("enter the number:\n");
        scanf("%d",&n);
        int fibo=fib(n);
        printf("the fibonacci of %d is %d",n,fibo);
        return 0;
    }
