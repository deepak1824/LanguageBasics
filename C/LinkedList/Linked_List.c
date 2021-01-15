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
    printf("NULL\n");
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

void deleteList(LinkedList **head){

    LinkedList *prev = *head;

    while(*head){
        *head = (*head)->next;
        printf("Deleting %d\n",prev->data);
        free(prev);
        prev = *head;
    }
}

//Takes a non-empty list and removes the front node, and returns the data which was in that node.
int Pop(LinkedList **head){
    
    if(*head == NULL){
        return -1;
    }
    
    LinkedList *headRef = *head;
    int res = headRef->data;
    (*head) = (*head)->next;

    free(head);

    return res;

}

int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    LinkedList *head =  NULL;
    for(int i=0;i<n;i++){
        Append(&head,arr[i]);
    }

    printList(head);
    


    return 0;
}