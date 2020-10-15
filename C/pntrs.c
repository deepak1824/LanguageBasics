#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

    int x = 5;
    int *p = &x;

    // printf("value at x %d\n",x);
    // printf("value at x %p\n",p);
    // printf("value at x %d\n",*p);
    // printf("value at x %p\n",&x);

    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n",p,"x variable",x); // variable's info
    printf("%p \t %s \t %p \n",&p,"x variable",p); // pointer's info
    
    

    printf("\n*p: %d \n",*p);    //dereferencing a pointer

    *p = 757;

    printf("\n*p: %d \n",*p);
    printf("\nx: %d \n",x);
    
    return 0;
}