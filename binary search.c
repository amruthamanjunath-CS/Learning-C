#include<stdio.h>
int main() {
    int high,low,key,mid,n,i,found=0;
    printf("enter the number of elements in array: \n");
    scanf("%d",&n);
    int array[n];
    printf("enter the elements of the array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    low=0;
    high=n-1;
    
    printf("enter the key element:\n");
    scanf("%d",&key);
    while(low<=high) {
        mid=(high+low)/2;
    if(key==array[mid]){
        printf("element found\n");
        found=1;
        break;
    }
    else if(key>array[mid]){
    low=mid+1;
     } else{
    high=mid-1;
     }
    }
if(found) 
printf("element found\n");
else
printf("element not found\n");
return 0;
}

