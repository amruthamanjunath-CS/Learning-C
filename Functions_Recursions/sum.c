#include<stdio.h>
int sum(int n){
    if (n==1)
    return 1;
    else
    return n+sum(n-1);
}
int main(){
    int n;
    printf("how many n natural numbers sum do you need to find?\n");
    scanf("%d",&n);
    int add=sum(n);
    printf("the sum of the first %d numbers is %d",n,add);
    return 0;
}