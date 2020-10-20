#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/* Find the highest bit that has been set in a uint32 variable */
#if 0
/* Basic Method */
uint32_t FindHighestBit(uint32_t num){
    for(int i = 31;i>=0;i--){
        if(num & (1 << i)){
            return i;
        }
    }
    return 0;
}

/* Method - 2  This is Faster due to use of Look-up Table*/
int FindHighestBit2_16(uint16_t num);
int FindHighestBit2_8(uint8_t num);

int FindHighestBit2(uint32_t num){
    uint16_t high = (num >> 16);
    uint16_t low = (num >> 0);
    if (high){
        return FindHighestBit2_16(high);
    }
    else{
        return FindHighestBit2_16(low);
    }
}

int FindHighestBit2_16(uint16_t num){
    uint8_t high = (num >> 8);
    uint8_t low = (num >> 0);
    if (high){
        return FindHighestBit2_8(high);
    }
    else{
        return FindHighestBit2_8(low);
    }
}
int FindHighestBit2_8(uint8_t num){
    const int8_t table[256] = {-1, // NO bit set
                                0, // 1
                                1, // 2
                                1, // 3
                                2  // 4
                            };
    return table[num];
}
#endif


/* Invert bit at bit position N */

#if 0
uint32_t invert_bit(uint32_t num, uint32_t pos){
    return (num ^ (1 << pos));
}
#endif


/* Swap Nibbles in a 8-bit integer, "nibble" is a 4-bit value */

#if 0
uint32_t swap_nibble(uint32_t num){
    uint8_t high_nib = (num >> 4);
    uint8_t low_nib = (num & 0x0F);
    return (low_nib << 4) | (high_nib);
}
#endif


/* Given an integer, swap all odd bits with even bits.
Ex - 56(00111000) ----> 52(00110100) 
*/
#if 0
uint32_t BitsSwap(unsigned int num){
    //Get all even bits of num
    //0xAAAAAAAA has all even bits = 1 & odd bits = 0
    unsigned int even_bits = num & 0xAAAAAAA;

    //Get all odd bits of num
    //0x55555555 has all even bits = 0 & odd bits = 1
    unsigned int odd_bits = num & 0x55555555;

    even_bits >>= 1;    //right shift even bits
    odd_bits <<= 1;     //left shift odd bits

    return (even_bits | odd_bits);
}
#endif

/* Bit Flip to Convert integer A to B 
Figure out which bits are different using XOR Each 1 in XOR represent a bit that 
is different between A & B. So we need to count the number of bits in A^B that are 1 
*/


#if 0
//Method - 1

int bitFlip(int x, int y){
    int count = 0;
    for(int z = x^y; z!=0; z = z >> 1 ){
        count += z & 1;
    }
    return count;
}
//Method - 2 insted of shifting z repeatedly while checking,
//we can continuously flip the least significant bit and count how long it takes z to reach 0

int bitFlip2(int x, int y){
    int count = 0;
    for(int z = x^y; z!=0; z = z & (z-1)){
        count++;
    }
    return count;
}
#endif



/* Bit Insertion between specified positions
Given two 32-bit integers X and Y and two bit positions a and b.
insert Y into X such that Y start at bit b and ends at a.

Ex: X = 00100000(32)  Y = 1100(12), a=0, b=4, Ans: X = 00101100(44)

We need to clear the bits from a to b, then we can shift Y so that it
lines up with bits a through b. Finally we merge Y and X.
*/

#if 0

int bitsInsert(int x, int y, int a, int b){
    /* Create a mask value to clear bit a through b in x
     * Ex: a = 0, b = 4. Result should be 11100000.
     * For simplicity, we use just 8 bits for example.
     */
    int allOnes = ~0;
    
    //Insert 1's before position b, then all 0's.
    int left = allOnes << (b+1);    // left = 11100000

    //insert 1's after bit position a.
    int right = ((1 << a) - 1);     //right = 00000000

    int mask_num = left | right; // mask = 11100000

    int clear_X = x & mask_num; //clear bits a through b
    int shift_Y = y << a;       // MOve Y into correct position

    return clear_X | shift_Y;
}
#endif


/* Next Largest Integer
Given a positive integer, we have to print next largest integer
with the same number of 1 bits in their binary representation
*/

#if 1

int nextGreater(int x){
    
    int c = x;
    int c0 = 0;
    int c1 = 0;

    while (((c & 1) == 0) && (c != 0)){
        c0++;
        c >>= 1;
    }

    while(((c &1) == 1)){
        c1++;
        c >>= 1;
    }

    if(c0 + c1 == 31 || c0 + c1 == 0){
        return -1;
    }

    int p = c0 + c1; 

    x |= (1 << p);
    x &= ~((1 << p) - 1);
    x |= (1 << (c1 - 1)) - 1;
    return x;
}
#endif


int main(){

    // uint32_t x = 0b01000000;
    // printf("%d\n",FindHighestBit(x));
    // printf("%d\n",FindHighestBit2(x)); // Please Look into it

    // uint32_t x = 0b01000000;
    // uint32_t y = 6;
    // printf("%d\n",x);
    // printf("%d\n",invert_bit(x,y));

    // uint32_t x = 0b11000000;
    // printf("%d\n",x);
    // printf("%d\n",swap_nibble(x));

    // unsigned int x = 56; // 00111000
    // printf("%u\n", x);
    // printf("%u\n", BitsSwap(x));    // output should be 52(00110100)
    // return 0;

    // int x = 0b11000000;
    // int y = 0b00111000;

    // printf("x:%d  y:%d\n",x,y);
    // printf("%d\n",bitFlip(x,y));
    // printf("%d\n",bitFlip2(x,y));

    // int x = 0b00100000;
    // int y = 0b1100;
    // int a = 0;
    // int b = 4;

    // printf("%d\n",x);
    // printf("%d\n",bitsInsert(x,y,a,b));


    int x = 16167663;
    printf("%d\n",x);
    printf("%d\n",nextGreater(x));
}


