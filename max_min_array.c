#include<stdio.h>
int main(){
    int n ;
    printf("enter the number");
    scanf("%d",&n);
    int smax =0;
    printf("enter the array");
    int arr[100];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int max =arr[0];
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    for(int i=0;i<=n-1;i++){
        if(max>smax && max!=arr[i]){
            
            smax = arr[i];
            
        }
    }
    printf("max is : %d\n",max);
    printf("smax is : %d",smax);
    return 0;
}