#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int k;
    printf("enter the value of k");
    scanf("%d",&k);
    int arr[n];
    int brr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        brr[i] = arr[i];
    }
    
    for(int i=0;i<=n-1;i++){
        if(i<=k-1){
            arr[i] = arr[n-1];
        }
        arr[i+1] = brr[i];
    }
    for(int i=0;i<=n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}