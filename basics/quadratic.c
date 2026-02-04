#include<stdio.h>
#include<math.h>
int main() {
    double a,b,c,discriminant,root1,root2,imagpart,realpart;
    printf("enter the value of a,b,c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){
    printf("it is not a quadratic equation\n");
    return 0;
    }
    discriminant=b*b-4*a*c;
    if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("the roots are real and distinct\n");
       printf ("the roots are: %.2lf %.2lf",root1,root2);
    }
    else if(discriminant==0){
        root1=root2=-b/(2*a);
        printf("the roots are real and equal\n");
        printf("the roots is:%.2lf",root1);
    }
    else{
        realpart=-b/(2*a);
        imagpart=sqrt(-discriminant)/2*a;
        printf("the roots are imaginary\n");
        printf("the roots are: %.2lf+%.2lfi & %.2lf-%.2lfi" ,realpart,imagpart,realpart,imagpart);
    }
return 0;
}