#include <stdio.h>
int num;
void check(){
printf("Enter your number: \n");
scanf("%d",&num);
if(num>0){
   printf("%d is a natural number\n",num);
} else if(num==0){
   printf("It is zero\n",num);
}else if(num<0){
   printf("It is a negative integer\n",num);
}
}
int main(){
      int n;
      check();
      while(1){
      printf("\n Do you want to check another number\n 1.yes\n 2.No\n");
      scanf("%d",&n);
      printf("\n");
      if(n==1){
      check();
      }
   else if(n==2){
   printf("thank you\n exiting\n");
   break;
   }
   else{
      printf("Invalid choice\n");
      check();
   }
      }
      return 0;
}



