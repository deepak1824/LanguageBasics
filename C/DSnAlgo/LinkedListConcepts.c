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

void DeleteNode(LinkedList *head, int key);

void PrintList(LinkedList *head);

LinkedList *SearchNode(LinkedList *head, int key);

void ReverseList(LinkedList **head);

int FindLength(LinkedList *head);

void SortList(LinkedList *head);

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

    // ReverseList(&l_head);
    SortList(l_head);

    PrintList(l_head);
    // printf("\n");
    // DeleteNode(l_head,4);

    // PrintList(l_head);
    // LinkedList *f = SearchNode(l_head, 2);
    // printf("Found %d ",f->data);
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

void DeleteNode(LinkedList *head, int key){
    LinkedList *temp = head;

    if(temp != NULL && temp->data == key){
        head = temp->next;
        free(temp);
        return;
    }
    LinkedList *prev;
    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

LinkedList *SearchNode(LinkedList *head, int key){
    LinkedList *current = head;

    if(head == NULL) {
      return NULL;
   }
   while(current->data != key) {
      if(current->next == NULL) {
         return NULL;
      } else {
         current = current->next;
      }
   }      
   return current;
}

void ReverseList(LinkedList **head){
    LinkedList *prev = NULL;
    LinkedList *current = *head;
    LinkedList *next;

    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

int FindLength(LinkedList *head){
    int length = 0;
    LinkedList *current;
    for(current = head;current!=NULL;current = current->next){
        length++;
    }
    return length;
}

void SortList(LinkedList *head){
    LinkedList *current;
    LinkedList *next;

    int tempKey, tempData;

    int size = FindLength(head);
    int k = size;

    for(int i=0;i<size-1;i++,k--){
        current = head;
        next = head->next;
        for(int j=1;j<k;j++){
            if(current->data > next->data){
                tempData = current->data;
                current->data = next->data;
                next->data = tempData;
            }
            current = current->next;
            next = next->next;
        }
    }
}