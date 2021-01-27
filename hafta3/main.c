#include <stdio.h>
#include <stdlib.h>

#define otopark 1        //birinci bit 1 demektir
#define otopark (1<<1)   //birinci biti 1 sola kaydir 2. bit 1 oldu
#define otopark (1<<2)
#define otopark (1<<3)

unsigned char b = 65;

int main()
{
/*  Asagidaki islemde bir bayt içindeki
    dusuk 4 bit ile yuksek 4 biti yer degistirmeye
    calisiyoruz

    01010110 = 86 deger
    00001111 = 15 mask

    00000110 = tmp

    00000101 b >>= 4;
    01100000 (tmp << 4 )

    00000101 | or
    01100000
    */

    //asagidaki kodda 1 bayt icindeki
    //11001100 11 olan bitleri birbirleri ile yer degistiriyoruz

    unsigned char tmp1 = b & 12;
    unsigned char tmp2 = b & 192;
    b = b & 51;
    b |= (tmp1 << 4);
    b |= (tmp2 >> 4);

    printf("b = %d tmp1 = %d tmp2 = %d\n" , b  , tmp1 , tmp2 );
    return 0;
}
