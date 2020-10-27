#include <stdio.h>
#include <stdlib.h>

typedef struct Doubly_LL
{
    struct Doubly_LL *next;         // Next Node
    struct Doubly_LL *prev;         // Prev Node
    int data;
}LinkedList_t;

static LinkedList_t *g_head = NULL;

LinkedList_t *CreateNewNode(int n){
    LinkedList_t *nnode = malloc(sizeof(LinkedList_t));
    nnode->data = n;
    nnode->next = NULL;
    nnode->prev = NULL;
    return nnode;
}


void AddToBeg(int n){
    LinkedList_t *nnode = CreateNewNode(n);

    if(g_head == NULL){
        g_head = nnode;
        return;
    }
    g_head->prev = nnode;
    nnode->next = g_head;
    g_head = nnode;
}

void AddToEnd(int n){
    LinkedList_t *temp = g_head;
    LinkedList_t *nnode = CreateNewNode(n);

    if(g_head == NULL){
        g_head = nnode;
        return;
    }
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = nnode;
    nnode->prev = temp;
}


int main(){

}