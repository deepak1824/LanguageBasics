#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(){

    //BIT SET
    int reg = reg | 0x80; // set bit #7 of a register called reg

    int reg1 = reg1 | 0x80000000;

    int reg2 = reg2 | (1 << 31); //(1<<31) means 1 gets shifted left 31 times to produce 0x8000000

    int reg3; 
    reg3 |= (1 << 31);  // Simplified further

    int reg4;
    reg4 |= (1 << 21) | (1 << 23);   //set bit #21 & #23

    // printf("%d\n",reg);
    // printf("%d\n",reg1);
    // printf("%d\n",reg2);
    // printf("%d\n",reg3);
    // printf("%d\n",reg4); 

    //BIT RESET
    int peg = peg & 0x7F; // reset bit #7 of a register called reg
    int pegs = pegs & ~(0x80);

    int peg1 = peg1 & ~(0x80000000);

    int peg2 = peg2 & ~(1 << 31); //(1<<31) means 1 gets shifted left 31 times to produce 0x8000000

    int peg3; 
    peg3 &= ~(1 << 31);  // Simplified further

    int peg4;
    peg4 &= ~((1 << 21) | (1 << 23));   //set bit #21 & #23

    printf("%d\n",peg);
    printf("%d\n",pegs);
    printf("%d\n",peg1);
    printf("%d\n",peg2);
    printf("%d\n",peg3);
    printf("%d\n",peg4);

    // BIT CHECKING
    // Method - 1
    while((1<<7) != (reg & (1<<7))){

    }; // wait for reg bit #7 to set

    // Method - 2

    while(!(reg & (1 <<7))){

    };  

}