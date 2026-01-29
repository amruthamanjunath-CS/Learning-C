#include<stdio.h>
int main() {
    int n,i,j,temp;
    printf("Enter the number of scores to be sorted: \n");
    scanf("%d",&n);
    int scores[n];
    printf("enter the scores to be sorted: \n");
    for(i=0;i<n;i++){
    scanf("%d",&scores[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(scores[j]>scores[j+1]){
            temp=scores[j];
            scores[j]=scores[j+1];
            scores[j+1]=temp;
        }
        }
        }
    printf("   SORTED SCORES    \n");
    for(i=0;i<n;i++){
    printf("%d  ",scores[i]);
}
    return 0;
}
    

