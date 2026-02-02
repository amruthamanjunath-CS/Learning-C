#include<stdio.h>
#include<stdarg.h>
int add(int count, ...);
int main(){
    int (*Fp)(int, ...);
    Fp=add;
    int total=Fp(7,1,2,3,4,5,6,7);
printf("the total sum of the entered numbers is:%d\n",total);
  return 0;  
}
int add(int count, ...){
    va_list args;
    int total = 0;
    va_start(args, count);
    for (int i = 0; i < count; i++){
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}
