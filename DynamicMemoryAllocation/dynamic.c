#include<stdio.h>
#include<stdlib.h>
void table();
int main(){
    table();
    while(1){
    int choice;
    printf("\n");
    printf("\nDo you need to print it for one more number?\n 1.YES\n 2.NO\n");
    scanf("%d",&choice);
    if(choice==1)
    table();
    else{
        printf("Exiting..\n");
    break;
    }
}
return 0;
}
void table(){
    int num,choice,newnum,i;
    printf("Enter which number's multiple you need to store:\n");
    scanf("%d",&num);
    int *digit=calloc(10,sizeof(int));
    if (digit == NULL) {
    printf("Initial memory allocation failed\n");
    return;
   }
   else{
        for(i=0;i<10;i++){
        digit[i]=num*(i+1);
        printf("%d\t",digit[i]);
        }
    }
    printf("\nWe have printed the multiples of %d upto 10..Do you need to change?\n",num);
    printf(" 1.YES\n 2.NO\n");
    scanf("%d",&choice);
    if(choice==1){
    printf("How many multiples do you need to print:\n");
    scanf("%d",&newnum);
    int*temp=realloc(digit,newnum*sizeof(int));
    if(temp!=NULL){
    digit=temp;
        for(int i=0;i<newnum;i++){
        digit[i]=num*(i+1);
        printf("%d\t",digit[i]);
  }
    free(digit);
}
else{
printf("Memory allocation failed\n");
}
return;
    }
    else
    free(digit);
    return;
}