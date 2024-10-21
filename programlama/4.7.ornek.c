#include <stdio.h>
int main()
{
    int say1,sayi2;
    printf("Birinci sayiyi giriniz");
    scanf("%d",&say1);
    printf("ikinci sayiyi giriniz");
    scanf("%d",&sayi2);


    if(say1>0 && sayi2>0)
    {
        printf("her iyi sayı pozitiftir");
    }
    else printf("iki sayıdan en az biri negatif");

printf("\n");



}