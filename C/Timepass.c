//--------------Parallel Arrays-------------//

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