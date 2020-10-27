#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* g for "global" variable of this file, 
and static for "private variable" of this file 
*/

typedef struct Linked_List_node
{
    struct Linked_List_node *next;
    int data;
}LinkedList_t;


static LinkedList_t *g_head = NULL;

void AllocateHead(int n){
    g_head = malloc(sizeof(*g_head));
    g_head->data = n;
    g_head->next = NULL;
}

void AddToBeg(int n){
    if(g_head == NULL){
        AllocateHead(n);
    }
    else{
        LinkedList_t *new_elm = malloc(sizeof(LinkedList_t));

        new_elm->next = g_head; // set this node's next to the older head
        new_elm->data = n;      // Copy the data

        g_head = new_elm;       // Head becomes this element since we wanted to add to beginning 
    }
}

void AddToEnd(int n){
    if(g_head == NULL){
        AllocateHead(n);
    }
    else{
        LinkedList_t *tail = g_head;    // Need to get to the tail first
        while(tail->next != NULL){
            tail = tail->next;
        }
        LinkedList_t *new_elm = malloc(sizeof(LinkedList_t));
        new_elm->next = NULL;
        new_elm->data = n;
        tail->next = new_elm;           // Simply add new element to the tail
    }
}

/*Function to reverse a singly linked list by iterating through the list*/
void ReverseList(LinkedList_t **data){
    LinkedList_t *prev = NULL;
    LinkedList_t *g_head = *data;
    LinkedList_t *next;

    while (g_head){
        next = g_head->next;        // previous node is made NULL
        g_head->next = prev;        // data is assigned to head node
        prev = g_head;
        g_head = next;
    }
    *data = prev;
}

/*
Function to detect a loop in a singly linked list by iterating through the list by using two pointers
Slow pointer -> steps through each node
Fast pointer -> Skips every other node
*/


bool CheckLoop(LinkedList_t *head){
    LinkedList_t *slow = head, *fast = head;
    
    /*
    checking to see if the current position or 
    the successive position is pointing to a NULL.
    */
    while((slow != NULL) && (fast->next != NULL) && (fast != NULL)){
        slow = slow->next;          //slow pointer
        fast = fast->next->next;    //fast pointer
        if(slow == fast){           //comparing to see if the slow and fast pointers meet at a node.
            return true;            
        }
    }
    return false;
}


void RemoveDuplicates(LinkedList_t *head){           //we are never deleting the head node
    LinkedList_t *current = head;                   //current node
    LinkedList_t *pointer1, *duplicate;

    while(current->next != NULL){                   //traversing the list pointed by current
        pointer1 = current;                         // the current node is copied into pointer1

        while(pointer1->next != NULL){              // traversing the list pointed by pointer1                                   
            if(pointer1->next->data == current->data){  //Checking for duplicates by comparing the current data and pointer1 data of next node
                duplicate = pointer1->next;             // copy the address of pointer1 node (which contains duplicate data) into duplicate
                pointer1->next = pointer1->next->next;  //placing the new address i.e. the next node address into pointer to which it will be pointing next
                free(duplicate);                        //free the duplicate node (which contains duplicate data)
            }
            pointer1 = pointer1->next;                  //move to the next node
        }
        current = current->next;                        //current pointing to next node
    }
}


bool isPalindrome(LinkedList_t *head){
    LinkedList_t *reverse = Reverse(head);      // calling function to reverse a list
    return CheckPalindrome(head,reverse);       // calling function to check if list palindrome
}

LinkedList_t *Reverse(LinkedList_t *head1){
    LinkedList_t *temp = NULL;

    while(head1->next != NULL){
        LinkedList_t *rnode = (LinkedList_t*)malloc(sizeof(LinkedList_t));      // new node create to copy the current list in reverse order
        rnode->data = head1->data;      // copy head data into new node
        rnode->next = temp;             //reversing the list by making the first node the last node
        temp = rnode;
        head1 = head1->next;            //traverse till the end of the list
    }
    return temp;
}

bool CheckPalindrome(LinkedList_t *list1, LinkedList_t *list2){
    while(list1->next != NULL && list2->next != NULL){
        if(list1->data != list2->data){
            return false;
        }
        list1 = list1->next;
        list2 = list2->next;
    }
    if(list1->next == NULL && list2->next){
        return true;
    }
}


void DeleteNode(LinkedList_t *head, LinkedList_t *N){
    if(head == N){
        if(head->next == NULL){
            return;
        }
        head->data = head->next->data;

        N = head->next;

        head->next = head->next->next;

        free(N);
        return;
    }
    LinkedList_t *prev = head;
    while (prev->next != NULL && prev->next != N){
        prev = prev->next;
    }
    if(prev->next == NULL){
        return;
    }
    prev->next = prev->next->next;
    free(N);
    return;
}



int main(){


}