#include<stdio.h>
int main(){
    int n;
    printf("enter the n");
    scanf("%d",&n);
    int k;
    printf("enter the value of k");
    scanf("%d",&k);
    int z = 0;
    int y=0;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(i<=k-1){
            for(int j=n-1;j>=1;j--){
                 y = arr[j];
                 arr[j] = arr[j-1];
                 arr[j-1]= y;
            }
        }
    }

    for(int i=0;i<=n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}