/**********************************

Dinamik Memory Tahsisi

**********************************/

#include <stdio.h>
#include <stdlib.h>
//#pragma pack(1)

/*
//HEAP
  global variables
  +
  dynamic memory




//STACK
  Runtime variable allocation
  LIFO


//SHARED MEMORY
  dynamic memory
*/



//FULLTEXT SEARCH
//20 byte
//Ahmetxxxxxxxxxxx
//Süleymanxxxxxxxx


char szBuffer[100];


int main()
{

    char *p = malloc( 100 ); //100 bayt tahsis et

    if( p != NULL ) {

       memset( p , 0 , 100 ); //ilgili pointerin gösterdiði yerden itibaren 100 bayt 0 karakteri ile doldur
       memset( p , 'A' , 20 );
       char *t = malloc( 100 );
       if( t != NULL ) {

          memset( t , 0 , 100 );
          //memcpy( t , p , 10 );

          strcpy( t , p );
          //strncpy( t , p , 10 );

          printf( "p=%s\nt=%s\n" , p , t );

          free(t);
       }
       free( p );
    }

    return 0;
}
