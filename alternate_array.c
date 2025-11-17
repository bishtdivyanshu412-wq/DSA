#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
    for(int i=0;i<=n-1;i++){
        if(i==0 || i%2==0){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp ;
        }
        else{
            continue;
        }
       }
    }
    else{
        for(int i=0;i<=n-1;i++){
            if(i==0 || i%2==0){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            else if(i==n-2){
                break;
            }
            else{
                continue;
            }
        }
    }
    

    for(int i=0;i<=n-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}