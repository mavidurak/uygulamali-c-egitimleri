/*
   02.02.2021
   Ozel Veri Yapisi tanimlama
   Struct Union yapilarinin ortak kullanimi
*/

#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

#define VTTYPE_EMPTY 0
#define VTTYPE_BYTE  1
#define VTTYPE_WORD  2
#define VTTYPE_LONG  3
#define VTTYPE_FLOAT 4

typedef struct MYVAR{
   unsigned char type;
   union {
       char   chVal;
       short  shVal;
       int    iVal;
       double dfVal;
   };
}MYVAR;

int main()
{
    MYVAR tm;

    tm.type = VTTYPE_FLOAT;
    tm.dfVal = 5343.67;

    printf("MYVAR sizeof = %d\n" , sizeof(tm) );

    if( tm.type == VTTYPE_EMPTY )
       printf("Value is empty!\n");
    else
    if( tm.type == VTTYPE_BYTE )
       printf("BYTE = %X\n" , tm.chVal );
    else
    if( tm.type == VTTYPE_WORD )
       printf("Word = %d\n" , tm.shVal );

    else
    if( tm.type == VTTYPE_LONG )
       printf("Long = %lf\n" , tm.iVal );
    else
    if( tm.type == VTTYPE_FLOAT )
       printf("Float = %lf\n" , tm.dfVal );

    return 0;
}
