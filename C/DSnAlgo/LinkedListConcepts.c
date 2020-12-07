#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}LinkedList;

static LinkedList *l_head = NULL;

void AllocateHead(int data);

void InsertFirst(int data);

void InsertLast(int data);

void DeleteNode(LinkedList *head, LinkedList *N);

void PrintList(LinkedList *head);

int main(){

    InsertFirst(10);
    InsertFirst(20);
    InsertFirst(30);
    InsertFirst(40);
    InsertFirst(50);
    InsertLast(1);
    InsertLast(2);
    InsertLast(3);
    InsertLast(4);
    InsertLast(5);

    PrintList(l_head);
    return 0;
    
}


void AllocateHead(int data){
    l_head = malloc(sizeof(*l_head));
    l_head->data = data;
    l_head->next = NULL;
}


void InsertFirst(int data){
    if(l_head == NULL){
        AllocateHead(data);
    }
    else{
        LinkedList *newNode = malloc(sizeof(LinkedList));
        newNode->next = l_head;
        newNode->data = data;
        l_head = newNode;
    }
}

void InsertLast(int data){
    if(l_head ==NULL){
        AllocateHead(data);
    }
    else{
        LinkedList *tail = l_head;
        while(tail->next!=NULL){
            tail = tail->next;
        }
        LinkedList *newNode = malloc(sizeof(LinkedList));
        newNode->next = NULL;
        newNode->data = data;
        tail->next = newNode;
    }
}

void PrintList(LinkedList *head){
    while(head != NULL){
        printf("%d  ",head->data);
        head = head->next;
    }
}