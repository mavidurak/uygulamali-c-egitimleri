/*
   12.02.2021
   C Pointers & Custom String Functions
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int xstrlen( char *p ) {

  int i = 0;

  while( *p != 0 ) {
    p++;
    i++;
  }
  return i;
}

void xstrconcat( char *t , char *s ) {

   short slen = xstrlen( t );
   int i = 0;
   while( s[i] != NULL ) {

      t[slen+i] = s[i];

      i++;
   }
}

void xstrrev( char *p ) {

   char temp;
   int si = 0;
   int ei = xstrlen(p)-1;
   while( ei >= si) {
      temp = p[si];
      p[si] = p[ei];
      p[ei] = temp;
      si++;
      ei--;
   }

}

int main()
{
    char szBuf1[100] = {"Merhaba Dunya"};

    char szBuf2[10] = {"TEST"};

    int len = xstrlen( szBuf1 );

    xstrconcat( szBuf1 , szBuf2 );

    printf("Uzunluk = %d  %s\n" , len , szBuf1 );
    printf("Yeni Buffer = %s\n" , szBuf1 );

    xstrrev( szBuf1 );
    printf("Ters Buffer = %s\n" , szBuf1 );

    return 0;
}
