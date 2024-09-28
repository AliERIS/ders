
#include "stdio.h"
int f(int x)
{
    //printf("%d",x); ikinci halinde böylesini soruyor
    if (x<9) f(x+1);
    printf("%d",x);
}

void main()
{
    f(1);
    printf("\n");
}

//normal çıktısı 123456789987654321