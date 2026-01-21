#include<stdio.h>
int rev=0;
int reverse(int n){
    if(n==0)
    return rev;
    else{
         rev=rev*10+(n%10);
        return reverse(n/10);
    }
}
int main(){
    int n;
    printf("enter the number to check:\n");
    scanf("%d",&n);
    if(n==reverse(n))
    printf("the number is palindrome\n");
    else{
    printf("the number is not palindrome\n");
    }
    return 0;
}
    
