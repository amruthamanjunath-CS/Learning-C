#include<stdio.h>
int main() {
    int first[3] [3];
    int second[3] [3];
    int sum[3] [3];
    int i,j;
    printf("enter the first array elements\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&first[i] [j]);

        }
        printf("\n");
    }
    printf("enter the second array element\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&second[i] [j]);
        }
        printf("\n");

    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=first[i][j] + second[i][j];
        }
        printf("\n");
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
          printf("%d   ",  sum[i][j]);
        }
          printf("\n");
        
    }
    return 0;

}