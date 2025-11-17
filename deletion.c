#include<stdio.h>
int main(){
    int n,t,k ;
    int arr[100];
    printf("enter the size of the array: ");
    scanf("%d",&n);
    printf("ENter the target: ");
    scanf("%d",&t);
    printf("ENter the key/index: ");
    scanf("%d",&k);
    printf("Entyer the array: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = n;i>=k;i--){
        arr[i+1]=arr[i];
    }
    arr[k]=t;
    for(int i = 0;i<=n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}