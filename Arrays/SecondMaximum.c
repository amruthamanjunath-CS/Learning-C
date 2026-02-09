#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter th elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
        max=arr[i];
    }
}
int secMax;
for(int i=0;i<n;i++){
    if(arr[i]!=max)
    secMax=arr[i];
}
for(int i=0;i<n;i++){
if(arr[i]>secMax && arr[i]<max)
        secMax=arr[i];
}
    
    printf("Second maximum number =%d",secMax);
    return 0;
}