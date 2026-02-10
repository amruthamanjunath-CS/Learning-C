#include<stdio.h>
struct book{
    char name[50];
    char author[50];
    int year;
};
int main(){
    int n;
    printf("enter the number of books:\n");
    scanf("%d",&n);
    struct book booklist[n];
    for(int i=0;i<n;i++){
        printf("enter the %d book name and author along with the year of publication:\n",i+1);
        scanf("%s %s %d",booklist[i].name,booklist[i].author,&booklist[i].year);
    }
    printf("library book details\n");
    for(int i=0;i<n;i++){
    printf("book %d - %s by %s (%d)\n",i+1,booklist[i].name,booklist[i].author,booklist[i].year);
}
return 0;
}