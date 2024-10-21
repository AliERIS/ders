#include "stdio.h"


void fonksiyon1();

int i=5;
int main()
{
    printf("Deger1 =%d\n",i);
    fonksiyon1();



}


void fonksiyon1()
{

    i+=++i+5; //bakın bu mind fuck 
    printf("Değer2=%d\n",i);


}
