#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count =0;
struct student{
    int roll;
    char name[100];
    float marks;
} s[50];
void add();
void search();
void update();
void show();
int main(){
    int choice;
    printf("good morning! How can we help you?\n");
    while(1){
    printf(" 1.add\n 2.search\n 3.update\n 4.show all \n 5.exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: add();
        break;
        case 2: search();
        break;
        case 3: update();
        break;
        case 4:show();
        break;
        case 5:printf("thank you\n exiting....\n");
        exit(0);
        break;
        default:printf("invalid choice please choose a valid one\n");
    }
}
return 0;
}
void add(){
    printf("Enter roll number: ");
scanf("%d", &s[count].roll);
while(getchar() != '\n');  

printf("Enter name: ");
scanf(" %[^\n]", s[count].name); 

printf("Enter marks: ");
scanf("%f", &s[count].marks);

    count++;
}
void search(){
    int roll_number;
    int found=0;
    printf("enter the roll number to search\n");
    scanf("%d",&roll_number);
    for(int i=0;i<count;i++){
        if (s[i].roll==roll_number){
            printf("student found\n");
            printf("roll number:%d\n name:%s\n marks:%.2f\n",s[i].roll,s[i].name,s[i].marks);
            found=1;
            break;
        }
    }
    if(found!=1)
    printf("student not found\n");
}
void update(){
    int choice;
    int roll_number;
    printf("enter the roll number\n");
    scanf("%d",&roll_number);
    printf("what you need to update\n 1.name\n 2.marks\n");
    scanf("%d",&choice);
    if(choice==1){
    for(int i=0;i<count;i++){
        if(s[i].roll==roll_number){
            char new_name[100];
            while(getchar() != '\n');  
            printf("enter the name to update:\n");
            scanf("%[^\n]",new_name);
            strcpy(s[i].name, new_name);
            printf("updated\n");
            break;
        }
        }
    }
    else
    for(int i=0;i<count;i++){
        if(s[i].roll==roll_number){
            int marks;
            printf("enter the new marks\n");
            scanf("%d",&marks);
            s[i].marks=marks;
            printf("updated");
        }
        break;
    }
}
void show(){
    printf("student details:\n");
    for(int i=0;i<count;i++){
        printf("student %d details\n 1.roll:%d\n 2.name:%s\n 3.marks:%.2f\n",i+1,s[i].roll,s[i].name,s[i].marks);
    }
    
}
        
    

        
        
        
    
    
    
    



    
    
    
    
