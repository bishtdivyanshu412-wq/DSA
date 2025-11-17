#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head = 0 , * newnode;
void createnode(int value){
    struct node *temp;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode ->data = value;
    newnode ->next = 0;
    
    if(head == NULL){
        head = temp = newnode;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            
        }
        temp->next = newnode;
    }
}
void insertbegining(int value){
    struct node *new;
   new = (struct node*)malloc(sizeof(struct node));
   new->data = value ;
   new->next = head;
   head = new;
}
void display(){
   struct node * temp = head ;
    while(temp != NULL){
        printf("linked list element : %d\n",temp->data);
        temp = temp->next;
    }
}
int main(){
    createnode(2);
    insertbegining(1);
    createnode(3);
    createnode(4);
    createnode(5);
    display();
    return 0;
}