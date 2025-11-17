#include<stdio.h>
#include<string.h>
#define n 10
int stack[n];
int top = -1;
int count =0;
void push(char ch){
    if(top == n-1){
        printf("stack full");
    }
    else{
        top ++;
        stack[top] = ch;
    }
}
void find(){
    if(top == -1){
        printf("stack empty");
    }
    else{
      for(int i = top ;i>=0;i--){
          if(stack[i] == ')' || stack[i] == '('){
              count++;
          }
      }  
    }
}
//void display(){
   // for(int i=top;i>=0;i--)
//}
int main(){
  push('(');
  push('(');
  push('a');
  push('b');
  push('c');
  push(')');
  find();
  //display();
  if(count %2 == 0){
      printf(" bracket equal");
  }
  else{
      printf(" not balance ");
  }
  return 0;
}
