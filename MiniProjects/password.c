#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char password[9];
int strength();
int main(){
    while(1){
    printf("enter the password\n");
    scanf("%s",password);
   int result= strength();
    if(!result){
        printf("please try again\n");
        printf("\n");
    }
        else
        break;
}
    
    return 0;
}
int strength(){
    int digit=0, alphabet=0, upper=0, symbol=0;
    int x=strlen(password);
    
    if(x>8||x<8){
        printf("password should have 8 elements\n");
        return 0;
    }

    for(int i=0;password[i]!='\0';i++){
        if(isdigit(password[i])){
         digit=1;
        break;
        }
    }
    if(!digit){
        printf("password should have atleast one number\n");
        return 0;
        }
    

    for(int i=0;password[i]!='\0';i++){
        if(isalpha(password[i])){
             alphabet=1;
            break;
        }
    }
        if(!alphabet){
        printf("password should have atleast one alphabet\n");
        return 0;
        }
    

    for(int i=0;password[i]!='\0';i++){
        if(isupper(password[i])){
            upper=1;
        break;
        }
    }
        if(!upper){
        printf("password should have atleast one upper case letter\n");
        return 0;
        }
    

    for(int i=0;password[i]!='\0';i++){
       if(!isalnum(password[i])){
        symbol=1;
        break;
       }
    }
       if(!symbol){
       printf("the password should have atleast one symbol\n");
       return 0;
    }

    printf("THE PASSWORD IS STRONG\n");
    return 1;

}
    
        
       



    



