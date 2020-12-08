#include <stdio.h>

int maxSize = 8;
int stack[8];
int top = -1;


int isEmpty();

int isFull();

int peek();

int pop();

int push(int data);



int main(){

    push(47);
    push(81);
    push(34);
    push(9);
    push(25);
    push(18);
    push(27);
    push(3);
    push(2);
    pop(2);
    pop(3);
    

    printf("Element at top of the stack: %d\n" ,peek());
    printf("Elements: \n");

    // print stack data 
   while(!isEmpty()) {
      int data = pop();
      printf("%d\n",data);
   }

   printf("Stack full: %s\n" , isFull()?"true":"false");
   printf("Stack empty: %s\n" , isEmpty()?"true":"false");
   
   return 0;
}

int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(top == maxSize){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(){
    return stack[top];
}

int pop(){
    int data;
    if(!isEmpty()){
        data = stack[top];
        top = top - 1;
        return data;
    }else{
        printf("Could not retrieve data, Stack is Empty!!\n");
    }
}

int push(int data){
    if(!isFull()){
        top = top + 1;
        stack[top] = data;
    }else{
        printf("Could not retrieve data, Stack is Full!!\n");
    }
}
