/*
  05.02.2021
  Fonksiyon Tanımlama & Pointers
*/
#include <stdio.h>
#include <stdlib.h>

int t = 0; //Global Degisken

int Test2(int v) {  // Formal Degisken
   return v * 5;
}

//recoursive fonsiyon (kendi içinde kendini çagıran fonksiyon)
int Test(int x,int y) {  // Formal Degisken
   int z = x + y + Test(6,9);   //z Local Degisken
   return z;
}

int main()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9 ,10 };
    int *b = &a[0];  //a dizisinin sifirinci elemaninin adresini b pointerine atama
    b += 5; // b pointerinin gosterdigi adresi 5 ileri alma
    *b = 16;  //b pointerinin gösterdiği adresteki veriye 16 sabit değerini atama
    
    printf("sizeof c = %d\n" , sizeof( a ) );
    printf("b adres = %d , b deger = %d\n" , b , *b );

    return 0;
}
