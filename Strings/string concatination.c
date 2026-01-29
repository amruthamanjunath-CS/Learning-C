#include<stdio.h>
#include<string.h>
int main() {
    char first[25],last[25],full[50];
    int length=0,i=0,j=0;
    printf("enter your first name: \n");
    scanf("%s",first);
    printf("enter your last name: \n");
    scanf("%s",last);
    while(first[i]!= '\0') {
    full[length++]=first[i++];
    }
    full[length++]=  ' ' ;
    while(last[j]!= '\0') {
        full[length++]=last[j++];
    }
    full[length]= '\0';
    printf("Your name is:%s \n",full);
    return 0;

}