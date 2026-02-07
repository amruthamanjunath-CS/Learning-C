#include<stdio.h>
int main(){
   int n1,n2;
    printf("Enter the size of the two arrays:\n");
    scanf("%d %d",&n1,&n2);
    int array1[n1],array2[n2];
    printf("Enter the elements of first array:\n");
    for(int i=0;i<n1;i++){
scanf("%d",&array1[i]);
    }
    printf("Enter the elements of second array:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&array2[i]);
    }
    int i=0,j=0;
    
        for(i=0;i<n1-1;i++){
            for(j=0;j<n1-i-1;j++){
                if(array1[j]>array1[j+1]){
                int temp=array1[j];
                array1[j]=array1[j+1];
                array1[j+1]=temp;
            }
        }
    }
    i=0,j=0;
    
        for(i=0;i<n2-1;i++){
            for(j=0;j<n2-i-1;j++){
                if(array2[j]>array2[j+1]){
                int temp=array2[j];
                array2[j]=array2[j+1];
                array2[j+1]=temp;
            }
        }
    }
     i=0,j=0;
     int k=0,ARRAY[n1+n2];
    while(i<n1 && j<n2){
    if(array1[i] < array2[j]){
        ARRAY[k] = array1[i];
        i++;
    }
    else{
        ARRAY[k] = array2[j];
        j++;
    }
    k++;
}

while(i<n1) ARRAY[k++] = array1[i++];
while(j<n2) ARRAY[k++] = array2[j++];

printf("sorted final array is:\n");
for(int i=0;i<n1+n2;i++){
    printf("%d\t",ARRAY[i]);
}

}