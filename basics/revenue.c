#include<stdio.h>
int main() {
    int branches,products;
    int i,j;
    printf("enter the number of branches: \n");
    scanf("%d",&branches);
    printf("enter the number of products: \n");
scanf("%d",&products);
int unit[branches][products];
printf("enter the number of units of each product:\n");
for(i=0;i<branches;i++){
    for(j=0;j<products;j++)
    scanf("%d" ,&unit[i][j]);
}
int revenue[products];
printf("enter the revenue of each product\n");
for(i=0;i<products;i++){
    scanf("%d",&revenue[i]);
}
for(i=0;i<branches;i++){
    int total=0;
    for(j=0;j<products;j++){
        total=total+unit[i][j]*revenue[j];
    }
    printf("the revenue of branch %d is %d\n",i+1,total);
}
return 0;

}
