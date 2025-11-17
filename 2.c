#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int count = 0;
    int store = 0;
    while(n!=0){
        int rem  = n%10;
        if(rem == 0){
            rem = 1;
        }
        count = count *10+ rem;
        n = n/10;
    }
    while(count!=0){
        int res = count %10;
        store = store *10+ res;
        count = count /10;
    }
    printf("number is %d ",store);
    return 0;
}