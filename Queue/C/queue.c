#include <stdio.h>
#define SIZE 10
int queue[SIZE], front = -1, rear = -1;


int isFull(){
    if(rear == SIZE - 1){
        return 1;
    }
    return 0;
}

int isEmpty(){
    if(rear == -1 && front == -1){
        return 1;
    }

    return 0;
}

void enqueue(int data){
    if(!isFull()){
        if(isEmpty()){
            rear += 1;
            front += 1;
            queue[rear] = data;
        }else{
            rear += 1;
            queue[rear] = data;
        }
    }
}

void dequeue(){
    if(!isEmpty()){
        printf("First element in the queue is %d.", queue[front]);
        front += 1;
    }else{
        printf("Stack is empty!");
    }
}

void display(){
    if(isEmpty()){
        printf("\nUnderflow!!\n");
        return;
    }else{
        printf("The queue is:\n");
        for(int i = front; i <= rear; i++ ){
            printf("Element %d is %d.\n", i, queue[i]);
        }
    }
}

int main(){
    int oper,data;
    do{
        printf("\nOperations available:\n");
        printf("1.)Enqueue\n2.)Dequeue\n3.)Display\n");
        printf("\nEnter your choice: \n");
        scanf("%d", &oper);

        switch (oper)
        {
        case 1:
            printf("\nEnter the item you want to insert into the queue.\n");
            scanf("%d", &data);
            enqueue(data);
            break;
        
        case 2:
            dequeue();
            break;
        
        case 3:
            display();
            break;

        default:
            break;
        }
    }while(oper < 4);
}