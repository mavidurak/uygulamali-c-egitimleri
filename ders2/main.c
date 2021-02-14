/*
    05.01.2021
    Bitsel islemler
 */
#include <stdio.h>
#include <stdlib.h>

#define BIT1 1
#define BIT2 2
#define BIT3 4
#define BIT4 8
#define BIT5 16
#define BIT6 32
#define BIT7 64
#define BIT8 128

//or (veya)
//a  0 0 1 0 1 0 0 0 = 40
//b  0 1 0 0 0 0 0 0 = 64
//c  0 1 1 0 1 0 0 0 = 104

//and (ve)
//a  0 1 1 0 1 0 0 0 = 104
//b  0 1 0 0 0 0 0 0 = 64
//c  0 1 0 0 0 0 0 0 = 64

//xor (degilise veya )
//a  0 1 1 0 1 0 0 0 = 104
//b  0 1 0 0 0 0 0 0 = 64
//c  0 0 1 0 1 0 0 0 = 40

//~ (terscevirme) butun bitlerde 1 ler 0 , 0 lar 1 olur
//a  0 1 1 0 1 0 0 0
//a  1 0 0 1 0 1 1 1

//~ (terscevirme ardindan ve islemi)
//a  0 1 1 0 1 0 0 0 = 104
//b  1 0 1 1 1 1 1 1 = 64 un ters cevrilmis hali
//c  0 0 1 0 1 0 0 0 = 40

int main()
{

    unsigned char a = 104;
    unsigned char b = BIT6;
    unsigned char c = 255;
    unsigned char d = 0;

    c |= BIT4; //4 uncu biti 1 yap
    c |= BIT6; //6 inci biti 1 yap
    c &= ~BIT4; //4 uncu biti 0 yap

    printf("c = %d\n\n" , c );

    if( c & BIT1 ) {
        printf( "Bit1 = 1\n" );
    }
    if( c & BIT2 ) {
        printf( "Bit2 = 1\n" );
    }
    if( c & BIT3 ) {
        printf( "Bit3 = 1\n" );
    }
    if( c & BIT4 ) {
        printf( "Bit4 = 1\n" );
    }
    if( c & BIT5 ) {
        printf( "Bit5 = 1\n" );
    }
    if( c & BIT6 ) {
        printf( "Bit6 = 1\n" );
    }
    if( c & BIT7 ) {
        printf( "Bit7 = 1\n" );
    }
    if( c & BIT8 ) {
        printf( "Bit8 = 1\n" );
    }

    return 0;
}
