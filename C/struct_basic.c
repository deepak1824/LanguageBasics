#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int uID;
    char Fname[25];
    char Lname[25];
    int age;
    float weight;
}user;

int main(){

    user dee;
    user nai;

    dee.uID = 1;
    nai.uID = 2;

    puts("Enter ther first name of user\n");
    gets(dee.Fname);

    puts("Enter ther Second name of user\n");
    gets(nai.Fname);

    printf("User 1 id \n", dee.uID);
    printf("User 2 first %s \n", nai.Fname);
    

    return 0;
}