#include<stdio.h>
int main(){
    int n;
    printf("enterr the number");
    scanf("%d",&n);
    int target = 9;
    int z =0;
    int k ;
    int y =0;
    printf("enter the k ");
    scanf("%d",&k);
    printf("enter the array");
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n+1;i++){
       if(i==k) {
         z = arr[i];
          arr[i] = target;
         for(int j= i;j<=n;j++){ 
            y= arr[j+1]; 
        arr[j+1] = z;
        z=y;
         }

       }
    } 
    arr[n+1] = y;
    
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}