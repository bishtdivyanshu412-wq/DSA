#include<stdio.h>
#define n 7
int queue[n];
int front = -1 , rear = -1; 
void enqueue(int x){
    if(rear == n-1){
        printf("queue overflow\n");
    }
    else if(front == -1 && rear == -1){
        front  = rear = 0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){
    if(front == -1 && rear == -1){
        printf("queue empty\n");
    }
    else if(front == rear ){
        printf("dequeue element : %d\n",queue[front]);
        front = rear = -1;
    }
    else {
        printf(" deqeue element : %d\n",queue[front]);
        front++;
    }
}
void display(){
    if(front == -1 && rear == -1){
        printf("queue empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf(" queue element  : %d\n",queue[i]);
        }
    }
}
int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    dequeue();
    dequeue();
    dequeue();
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    display();
    return 0;
}