#include<stdio.h>
#include<string.h>
void palindrome(char p[]);
void reverse(char p[]);
int length(char p[]);
int main(){
    char p[100];
    printf("enter the string:\n");
    scanf("%s",p);
    printf("1.to check palindrome\n 2.to reverse\n 3.to find length");
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:palindrome(p);
        break;
        case 2:reverse(p);
        printf("the reversed string is :%s",p);
        break;
        case 3:printf("the length is:%d\n",length(p));
        break;
default:printf("invalid choice\n");
    }
    return 0;
}

void palindrome(char p[]){
    char copy[100];         
    strcpy(copy, p);        
    reverse(copy);          

    if(strcmp(p,copy) == 0) 
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
}
void reverse(char p[]){
     int i = 0;
    int j = strlen(p) - 1;
    char temp;
 while(i < j) {
        temp = p[i];
        p[i] = p[j];
        p[j] = temp;
        i++;
        j--;
    }
}
int length(char p[]){
        int x= strlen(p);
        return x;
}









