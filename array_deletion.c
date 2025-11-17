#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int k ;
    printf("enter the k");
    scanf("%d",&k);
    int arr[100];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(i==k){
            for(int j = i;j<=n-1;j++){
                arr[j] = arr[j+1];
            }
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}