2#include <stdio.h>

int main() {
    int temp;
   int arr[45],n,i;
   printf("Enter number of array");
   scanf("%d",&n);
   printf("Emter element of array");
   for(int i=0;i<=n-1;i++){
       scanf("%d",&arr[i]);
       
   }
   if(n%2==0){
 for(int i=0;i<=n-1;i=i+2){
     temp=arr[i];
     arr[i]=arr[i+1];
     arr[i+1]=temp;
 }
   }
   else{
       for(i=0;i<n;i+=2){
           if(i!=n-1){
               int temp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1]=temp;
           }
           else{
               break;
           }
       }
   }
 for(int i=0;i<n;i++){
     printf("%d",arr[i]);
     
 }
    return 0;
}