#include <stdbool.h>
#include <stdio.h>


#define MAX 6

int Qarr[MAX];

int front = 0;
int rear = -1;
int itemCount = 0;


int peek(){
    return Qarr[front];
}

bool isEmpty(){
    return itemCount == 0;
}

bool isFull(){
    return itemCount == MAX;
}

int size(){
    return itemCount;
}

void insertData(int data){
    if(!isFull()){
        if(rear == MAX-1){
            rear = -1;
        }
        Qarr[++rear] = data;
        itemCount++;
    }
}

int removeData(){
    int data = Qarr[front++];

    if(front == MAX){
        front = 0;
    }
    itemCount--;
    return data;
}




int main(){

    insertData(3);
    insertData(5);
    insertData(9);
    insertData(11);
    insertData(13);

    insertData(15);

    if(isFull()){
        printf("Queue is Full\n");
    }

    int num = removeData();

    printf("Element removed: %d \n", num);

    insertData(17);

    insertData(19);

    printf("Element at front: %d\n", peek());


    printf("Queue:  ");


    while (!isEmpty()){
        int n = removeData();
        printf("%d ",n);
    }
}