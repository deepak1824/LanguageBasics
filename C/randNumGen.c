#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

    int i;
    int diceRoll;

    srand(45);

    for(i=0;i<20;i++){
        printf("%d \n",(rand()%6)+1);
    }

    return 0;
}
