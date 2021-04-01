/*      30.03.2021
      Function pointers*/

#include <stdio.h>

int add_func( int x , int y) {
    printf("add_func = x + y = %d\n" , x + y );
    return x + y;
}

int sub_func(int x, int y) {
    printf("sub_func = x - y = %d\n", x - y);
    return x - y;
}

int mul_func(int x, int y) {
    printf("mul_func = x * y = %d\n", x * y);
    return x * y;
}

int div_func(int x, int y) {
    printf("div_func = x / y = %d\n", x / y);
    return x / y;
}

int main()
{
    int (*pFuncs[5])(int, int);
    pFuncs[0] = add_func;
    pFuncs[1] = sub_func;
    pFuncs[2] = mul_func;
    pFuncs[3] = div_func;
    pFuncs[4] = NULL;
    
    //opcode
    int cmd[10] = { 2 , 0 , 3 , 1 , 2 , 2 , -1 };

    int t1, t2;
    t1 = 70;
    t2 = 8;
    int n = 0;

    while (cmd[n] != -1) {

        /* Klasik Ardisik if denetimi*/
        /*
        if (cmd[n] == 0)
            add_func(t1, t2);
        else
        if (cmd[n] == 1)
            sub_func(t1, t2);
        else
        if (cmd[n] == 2)
            mul_func(t1, t2);
        else
        if (cmd[n] == 3)
            div_func(t1, t2);
        */

        /*Fonksiyon Pointeri ile çalışma Şekli*/
        pFuncs[cmd[n]]( t1, t2 );
        
        n++;
    }

    return 0;
}

