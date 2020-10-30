#include <stdio.h>
#include <stdlib.h>

/* initializing a tree*/

typedef struct BasicsBinaryTree
{
    int data;
    struct BasicsBinaryTree *left;
    struct BasicsBinaryTree *right;
}BinaryTree;

BinaryTree *newNode(int data){

    BinaryTree *node = (BinaryTree*)malloc(sizeof(BinaryTree));

    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

/* 

Depth First Traversals:
(a) Inorder (Left, Root, Right) : 4 2 5 1 3
(b) Preorder (Root, Left, Right) : 1 2 4 5 3
(c) Postorder (Left, Right, Root) : 4 5 2 3 1

*/
void printPreorder(BinaryTree *node){
    if(node == NULL){
        return;
    }
    printf("%d ",node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}

void printInorder(BinaryTree *node){
    if(node == NULL){
        return;
    }

    printInorder(node->left);
    printf("%d ",node->data);
    printInorder(node->right);

}

void printPostorder(BinaryTree *node){
    if(node == NULL){
        return;
    }
    
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ",node->data);
}



/* Level order traversal of a tree is breadth first traversal for the tree. */

int findHeight(BinaryTree *node){
    if(node == NULL){
        return 0;
    }
    else{
        int lheight = findHeight(node->left);
        int rheight = findHeight(node->right);

        if(lheight > rheight){
            return (lheight+1);
        }
        else{
            return (rheight+1);
        }
    }
}

void printGivenLevel(BinaryTree *node, int level){
    if(node == NULL){
        return;
    }
    if(level == 1){
        printf("%d ", node->data);
    }
    else if(level > 1){
        printGivenLevel(node->left, level-1);
        printGivenLevel(node->right, level-1);
    }
}

void printLevelOrder(BinaryTree *node){
    int h = findHeight(node);
    int i;
    for(i=1;i<=h;i++){
        printGivenLevel(node,i);
    }
}
int main(){
    
    BinaryTree *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("\nPreorder traversal of binary tree is \n"); 
    printPreorder(root); 

    printf("\nInorder traversal of binary tree is \n"); 
    printInorder(root);   

    printf("\nPostorder traversal of binary tree is \n"); 
    printPostorder(root);

    printf("\nLevel Order traversal of binary tree is \n");
    printLevelOrder(root);
}
