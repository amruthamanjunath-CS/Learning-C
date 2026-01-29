#include<stdio.h>

    struct patient{
    char patname[25];
    char disease[25];
    char docname[25];
    char degree[25];
    int ID;
    int age;
    };
    int main(){
        struct patient p[4];
        for(int i=0;i<4;i++){
    printf("\n enter your name: \n");
    scanf("%s",p[i].patname);
    printf("enter your ID\n");
    scanf("%d",&p[i].ID);
    printf("enter your age\n");
    scanf("%d",&p[i].age);
    printf("enter the disease name:\n");
    scanf("%s",p[i].disease);
    printf("enter the doctor name\n");
    scanf("%s",p[i].docname);
    printf("enter doctors specalization\n");
    scanf("%s",p[i].degree);
        }
    for(int i=0;i<4;i++){
    printf("%s %d %d %s %s %s \n",p[i].patname,p[i].ID,p[i].age,p[i].disease,p[i].docname,p[i].degree);
        }
    
    return 0;
        
    }

