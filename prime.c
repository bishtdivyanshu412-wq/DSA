#include<stdio.h>
int main(){
int num;
printf("Enter the number you want to check: ");
scanf("%d",&num);
int div =0;
if (num <=1){
    printf("Not prime.");
}
else{
    for(int i = 1; i<= num; i++){
        if(num%i==0){
            div = div + 1;
        }
    }
    if(div > 2){
        printf("Not prime.");
    }
    else if(div = 2){
        printf("Prime.");
    }
}
    return 0;
}