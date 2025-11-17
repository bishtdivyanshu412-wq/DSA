#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[10];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int z ;
       int j;
    printf("enter the size of second array");
    scanf("%d",&z);
    int brr[10];
    for(int i=0;i<z;i++){
        scanf("%d",&brr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(int i=0;i<z;i++){
        int flag = 0;
       for( j=0;j<n;j++){
           if(brr[i]==arr[j]){
           flag = 1;
           break;
       } 
    }
 
    if (flag == 0){
        printf("%d",brr[i]);
    }
    } 
     return 0;
}