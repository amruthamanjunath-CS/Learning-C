#include<stdio.h>
#include<stdlib.h>
int main() {
    int i,j,x;
    int seats [10][5]={0};
    while(1){
      printf("select a choice (1-3)\n");
 printf(" 1.book ticket\n 2.cancel ticket\n 3.exit\n");
 scanf("%d",&x);
 if(x<1||x>3){
   printf("invalid choice\n");
 }
else if(x==1){
 printf("enter the row and column number:\n");
    scanf("%d %d" ,& i,&j);
    if(i<0||i>9||j<0||j>4){
      printf("invalid seat number\n");
      printf("\n");
    }
    else if(seats[i][j]==0){
    seats[i][j]=1;
    printf("your seat is booked\n");
    printf("\n");
    }
    else{
    printf("seat is reserved\n");
    printf("\n");
    }
 }
 else if(x==2){
   printf("enter the row and column number to cancel:\n");
            scanf("%d %d", &i, &j);

            if(i<0||i>9||j<0||j>4) {
                printf("invalid seat number\n");
                printf("\n");
            }
    else if(seats[i][j] == 1) {
                seats[i][j] = 0;
                printf("Your ticket has been cancelled.\n");
                printf("\n");
            } else {
                printf("That seat is not booked yet!\n");
                printf("\n");
            }
        }
    else{
      printf("thank you visit again\n");
 printf ("exiting.....");
 exit(0);
    }
   }
return 0;
   }





