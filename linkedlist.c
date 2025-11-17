#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node * head =0 , *newnode ,* temp;
 void node(int value){
     newnode = (struct node*)malloc(sizeof(struct node));
     newnode->data= value;
     newnode->next = 0;
     if(head == NULL){
         head = temp = newnode;
     }
     else{
         temp->next = newnode;
         temp = newnode;
     }
 }
 void display(){
     temp = head;
     while(temp!=NULL){
         printf("%d\n",temp->data);
         temp = temp->next;
     }
 }
int main(){
    while(1){
    int choice;
    printf("choose the option \n 1 : insert \n 2 : display  \n 0 : exit\n");
    scanf("%d",&choice);
    switch(choice){
      case 1 :
      int element ;
      printf("enter element to push");
      scanf("%d",&element);
      node(element);
      printf("element iserted sucessfully");
      break;
      case 2 : 
      display();
      break;
      case 3 : 
      exit(0);
      default :
      printf("enter the valid choice");
     }
 }
 return 0;
}