#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number of elements in your array:\n");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int min=array[0];
    int max=array[0];
    i=1;
    while(i<n){
        if(array[i]<min)
        min=array[i];
        if(array[i]>max)
        max=array[i];
        i++;
    }
    printf("the minimum and maximum elements of the array are:%d & %d respectively",min,max);
    return 0;
}

    


    

