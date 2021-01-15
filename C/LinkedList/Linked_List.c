#include <stdio.h>
#include <stdlib.h>

//structure for linked list node
typedef struct Node
{
    int data;
    struct Node *next;
}LinkedList;


//Helper function to create and return a linked list node
LinkedList *newNode(int data){
    LinkedList *link = (LinkedList*)malloc(sizeof(LinkedList));
    link->data = data;
    link->next = NULL;
    return link;
}

void printList(LinkedList *head){
    LinkedList *ptr = head;
    while(ptr){
        printf("%d-> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

/*push method to Takes a list and a data value and creates a new link with the given data
and pushes it onto the front of the list. */
void Push(LinkedList **head, int data){
    LinkedList *link = (LinkedList*)(malloc(sizeof(LinkedList)));
    link->data = data;
    link->next = *head;
    *head = link;
}

void Append(LinkedList **head, int data){
    LinkedList *current = *head;
    if(current == NULL){
        Push(head,data);
    }
    else{
        while(current->next != NULL){
            current = current->next;
        }
        Push(&(current->next),data);
    }
}



int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    LinkedList *head =  NULL;
    for(int i=n-1;i>=0;i--){
        Append(&head,arr[i]);
    }

    printList(head);

    return 0;
}