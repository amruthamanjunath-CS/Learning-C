#include<stdio.h>
#include<stdlib.h>
int main() {
    int i,j,x;
    int seats [3][3]={0};
    while(1){
 printf("1.book ticket\n 2.exit\n");
 scanf("%d",&x);
if(x==1){
 printf("enter the row and column number\n");
    scanf("%d %d" ,& i,&j);
    if(seats[i][j]==0){
    seats[i][j]=1;
    printf("your seat is booked\n");
    printf("\n");
    }
    else{
    printf("seat is reserved\n");
    printf("\n");
    }
 }
    if(x==2){
 printf ("exiting.....");
 exit(0);

 }

}

return 0;
}




