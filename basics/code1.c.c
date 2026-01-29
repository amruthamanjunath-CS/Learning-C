#include <stdio.h>
int main() {
int a;
double b;
printf("enter the value of a: "); //enter a integer
scanf("%d",&a);
printf("enter the value of b: "); //enter a decimal number
scanf("%lf",&b);
int sum=a+b;
printf("the sum of two numbers is:%d",sum);
return 0;
}