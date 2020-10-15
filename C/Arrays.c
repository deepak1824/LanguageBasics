//-------------Basic Arrays--------------//
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

    int i;
    int meatBalls[5];
    int total =0;

    for(i=0;i<5;i++){
        printf("meatball on day %d\n", i+1);
        scanf("%d",&meatBalls[i]);
    }
    for(i=0;i<5;i++){
        total += meatBalls[i];
    }



    int avg = total/5;
    printf("ate %d meatballs, thats an avg of %d\n",total,avg);
    return 0;
}

#endif



//--------------Parallel Arrays-------------//

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

    int i;
    int player[5] = { 58,66,71,87,34};
    int goals[5] = {13,17,24,19,37};
    int gamesPlayed[5] = {75,57,26,49,82};
    float ppg[5];
    float bestPPG = 0.0;
    int bestP;

    for(i=0;i<5;i++){
        ppg[i] = (float)goals[i]/(float)gamesPlayed[i];
        printf("%d \t %d \t %d \t %.2f\n",player[i],goals[i],gamesPlayed[i],ppg[i]);

        if(ppg[i] > bestPPG){
            bestPPG = ppg[i];
            bestP = player[i];
        }
    }
    printf("\n the best player is %d\n",bestP);
    return 0;
}

#endif

//----------------Sorting Arrays------------//

#if 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

    //Bubble Sort

    int i, temp, swapped;

    int n = 10;
    int goals[n];

    for(i=0;i<n;i++){
        goals[i] = (rand()%25)+1;
    }
    printf("Original List\n");
    for(i=0;i<n;i++){
        printf("%d \n",goals[i]);
    }
    while(1){
        swapped = 0;
        for(i=0;i<n-1;i++){
            if(goals[i]>goals[i+1]){
                temp = goals[i];
                goals[i] = goals[i+1];
                goals[i+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
    printf("Sorted List\n");
    for(i=0;i<n;i++){
        printf("%d \n",goals[i]);
    }
    return 0;
}

#endif