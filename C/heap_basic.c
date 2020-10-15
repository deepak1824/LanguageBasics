#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, n;
    int total=0;
    float avg = 0.0;
    int *pArr = 0;

    printf("How many numbers do you want average\n");
    scanf(" %d", &n);

    pArr = (int *) malloc(n * sizeof(int));

    printf("Enter them Boss!!\n");

    for(i=0;i<n;i++){
        scanf("%d", &pArr[i]);
        total += pArr[i];
    }

    avg = (float)total / (float)n;
    printf("average is %f\n", avg);

    free(pArr);

    return 0;
}