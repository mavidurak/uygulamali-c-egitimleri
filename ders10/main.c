/*
-----16.03.2021-----
 Pointer Pointers Example
*/
#include <stdio.h>
#include <stdlib.h>
//[p]->[p1]->a

void Test( void **p ) {
    *p = malloc(1200);
}

int main()
{
/*
    char a = 65;
    char   *p1 = &a;
    char **p = &p1;
    char ***p = &p;
*/
    char *tp = NULL;
    Test( &tp );
    if( tp != NULL )
       free( tp );
    else
       printf( "Hata\n" );

    //*p1 = 5;
    //**p = 8;
    //char szBuffer[12];
    //szBuffer[11] = NULL;
 
    printf("Hello world!\n");
    return 0;
}
