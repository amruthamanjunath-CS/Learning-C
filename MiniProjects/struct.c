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
    printf("Good morning! How can we help you?\n");
    while(1){
    printf(" \n 1.Add\n 2.Search\n 3.Update\n 4.Show all \n 5.Exit\n");
    printf("Enter your choice\n");
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
        case 5:printf("Thank you\n Exiting....\n");
        exit(0);
        break;
        default:printf("Invalid choice please choose a valid one\n");
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

printf("Details added\n");
    count++;
}
void search(){
    int roll_number;
    int found=0;
    printf("Enter the roll number to search\n");
    scanf("%d",&roll_number);
    for(int i=0;i<count;i++){
        if (s[i].roll==roll_number){
            printf("Student found,the details are:\n");
            printf(" Roll number:%d\n Name:%s\n Marks:%.2f\n",s[i].roll,s[i].name,s[i].marks);
            found=1;
            break;
        }
    }
    if(found!=1)
    printf("Student not found:check again\n");
}
void update(){
    int choice;
    int roll_number;
    printf("Enter the roll number\n");
    scanf("%d",&roll_number);
    printf("What you need to update\n 1.Name\n 2.Marks\n");
    scanf("%d",&choice);
    if(choice==1){
    for(int i=0;i<count;i++){
        if(s[i].roll==roll_number){
            char new_name[100];
            while(getchar() != '\n');  
            printf("Enter the name to update:\n");
            scanf("%[^\n]",new_name);
            strcpy(s[i].name, new_name);
            printf("Name updated\n");
            break;
        }
        }
    }
    else
    for(int i=0;i<count;i++){
        if(s[i].roll==roll_number){
            int marks;
            printf("Enter the new marks\n");
            scanf("%d",&marks);
            s[i].marks=marks;
            printf("Marks updated\n");
        }
        break;
    }
}
void show(){
    printf("Student details:\n");
    for(int i=0;i<count;i++){
        printf("Student %d details\n 1.Roll:%d\n 2.Name:%s\n 3.Marks:%.2f\n",i+1,s[i].roll,s[i].name,s[i].marks);
    }
    
}
        
    

        
        
        
    
    
    
    



    
    
    
    
