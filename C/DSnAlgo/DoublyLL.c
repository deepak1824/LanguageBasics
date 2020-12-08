#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}DoublyLinkedList;

static DoublyLinkedList *head = NULL;

DoublyLinkedList *CreateNewNode(int data){
    DoublyLinkedList *newNode = malloc(sizeof(DoublyLinkedList));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void InsertFirst(int data){
    DoublyLinkedList *newNode = CreateNewNode(data);

    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}


void InsertLast(int data){
    DoublyLinkedList *temp = head;
    DoublyLinkedList *newNode = CreateNewNode(data);

    if(head == NULL){
        head = newNode;
        return;
    }
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void PrintList(DoublyLinkedList *head){
    while(head != NULL){
        printf("%d  ",head->data);
        head = head->next;
    }
}


int main(){
    InsertFirst(54);
    InsertFirst(98);
    InsertFirst(12);
    InsertFirst(32);
    InsertFirst(87);
    InsertLast(2);
    InsertLast(22);
    InsertLast(222);
    InsertLast(12);
    InsertLast(112);

    PrintList(head);
    

    return 0;
}