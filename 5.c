#include<stdio.h>
int main(){
    int num;
    int num2;
    printf("Enter n: ");
    scanf("%d",&num);
    printf("Enter r: ");
    scanf("%d",&num2);
    int n = 1;
    for(int i = num; i>0 ; i--){
        n = n * i;
    }
    int r = 1;
    
    for(int i = num2; i>0 ; i--){
        r = r * i;
    }
    
     int p = 1;
    for(int i = num-num2; i>0 ; i--){
        p = p * i;
    }
     
     int ncr = n/(r*p);
     printf("ncr = %d",ncr);
    return 0;
}