
#include <stdio.h>
#include<stdlib.h>
#define n 10
int stack[n];
int top = -1;

void push(int x){
    if(top == n-1){
        printf("stack overflow\n");
    }
    else{
        top++;
        stack[top] = x;
    }
}

void pop (){
    if (top == -1){
        printf("stack empty\n");
    }
    else{
        int item;
        item = stack[top];
        top--;
        printf("%d\n",item);
    }
}

void peek(){
    if(top == -1){
        printf("stack empty");
    }
    else{
        printf("%d",stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("no element to display");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice,element;
    while(1){
    printf("enter the choice : \n 1: push \n 2 : pop \n 3 : peek \n 4 : display \n 5: exit \n");
    scanf("%d",&choice);
    
    switch(choice){
        case (1) : 
        printf("enter elemnent to push\n");
        scanf("%d",&element);
        push(element);
        printf("element pushed sucessfully\n");
        break;
        case 2 :
        pop();
        break;
        case 3 :
        peek();
        break;
        case 4 :
        display();
        break;
        case 5 :
        printf("exiting program");
        exit(0);
        default :
        printf("enter the valid choice\n ");
      }
    }
    
    return 0;
}