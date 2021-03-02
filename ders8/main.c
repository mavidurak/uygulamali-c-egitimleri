/*
                        02.03.2021
  Dinamik Hafiza Tahsisi ile Array ve LinkedList Kullanim Örneði
*/


#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
#pragma pack(1)

typedef struct TESTNODE {
  char szAd[21];
  char szSoyad[21];
  void *pNext;
}TESTNODE;


/*
                  0           ->              1            ->            2
Linked List   TESTNODE | .............. | TESTNODE | ............. | TESTNODE

                  0          1         2
Array         TESTNODE | TESTNODE | TESTNODE

*/


TESTNODE *pRoot = NULL;

void* AddHeadItem( char *szAd , char *szSoyad ) {

   TESTNODE *pNew = malloc( sizeof( TESTNODE ) );
   if( pNew != NULL ) {

       memset( pNew , 0 , sizeof( TESTNODE ) );
       strncpy(pNew->szAd , szAd , 20 );
       strncpy(pNew->szSoyad , szSoyad , 20 );

       pNew->pNext = pRoot;
       pRoot = pNew;
   }

   return pNew;
}


/*
void* AddTailItem( char *szAd , char *szSoyad ) {
}
*/

void ClearList() {

   TESTNODE *pSel = pRoot;
   while( pSel != NULL ) {
      pRoot = pSel->pNext;
      free( pSel );
      pSel = pRoot;
   }
   return;
}



int main()
{
   //Linked List Örnegi
   AddHeadItem("Ahmet" , "SEZA");
   AddHeadItem("Mehmet" , "YAHYA");
   AddHeadItem("Cevdet" , "SARI");
   AddHeadItem("Arif" , "KARAKILIC");
   AddHeadItem("Alihan" , "SARAC");
   AddHeadItem("Sule" , "KOC");

   TESTNODE *pNode = pRoot;
   while( pNode != NULL ) {
     printf( "Ad Soyad : %s %s\n" , pNode->szAd , pNode->szSoyad );
     pNode = pNode->pNext;
   }

   ClearList();

    //Array Örnegi Random Access Erisimi
    /*
    TESTNODE *p = (TESTNODE *)malloc( sizeof( TESTNODE ) * 1000 );
    if( p != NULL ) {

      memset( p , 0 , sizeof( TESTNODE ) * 1000 );

      for( int i = 0; i < 800; i++ ) {
         sprintf( p[i].szAd , "Ad %d" ,  (i+1) );
         sprintf( p[i].szSoyad , "Soyad %d" ,  (i+1) );
      }

      for( int i = 80; i < 90; i++ ) {
         printf( "Ad Soyad : %s %s\n" , p[i].szAd , p[i].szSoyad );
      }

       free( p );
    }
    */

    printf("Sizeof TESTNODE = %d byte\n" , sizeof( TESTNODE ));
    return 0;
}
