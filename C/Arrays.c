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

#if 0
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


//----------------Arrays and Pointers------------//

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

    int i;
    int arr[5] = {56,45,32,75,89};

    printf("Element \t memAdd \t \t Value \n");

    for(i=0;i<5;i++){
        printf("arr[%d] \t %p \t %d \n",i,&arr[i],arr[i]);
    }

    printf("\n arr \t\t\t\t %p \n",arr); // arr name is pointer to the first element

    printf("\n *arr \t\t\t\t %d \n",*arr);
    printf("\n *(arr+2) \t\t\t\t %d \n",*(arr+2)); 

    return 0;
}

#endif

//----------------Strings and Pointers------------//

#if 0
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

    char movie[] = "The Return of DISCO FIGHTER!";
    char *mp = "Deepak is the FLASH!";

    puts(mp);
    
    mp = "New Movie title";

    puts(mp);

    return 0;
}

#endif


//----------------Arrays and Pointers------------//

#if 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(){

    char movie[20];
    char *mp = movie;

    fgets(mp,20,stdin); // gets input form std input

    puts(mp);

    return 0;
}

#endif
