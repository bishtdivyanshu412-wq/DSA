#include<stdio.h>
int main(){
    int n;
    int arr[100];
    int product[100];
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    printf("Enter elemts of the array: ");
    for(int i = 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<=n-1;i++){
        for(int j =1;j<=n-2;j++){
            if(i==j){
                continue;
            }
            else{
            product[i]= arr[i]*arr[j];
            }
        }
    }
    printf("Calculating...........\n");
    int max = product[0];
    for(int i = 0 ; i<=n-1;i++){
        if(product[i]>max){
            if(product[i] == 0){
                continue;
            }
            else{
            max = product[i];
            }
        }
    }
    printf("%d",max);
        return 0;
    }
    

