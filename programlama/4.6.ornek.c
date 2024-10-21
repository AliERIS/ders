#include "stdio.h"
int main()
{
int sayi;
printf("bir sayi giriniz");
scanf("%d",&sayi);

if(sayi<0)
printf("negatif sayi girdiniz");
else
printf("pozitif sayi girdiniz");
printf("\n");
printf("%d\n",sayi); //overflow ediyorum da yanlış anlamayın dilenci değilim o değeri görmek için 
//yani -555555555555555555555555 gibi bir değer girince yeniden sayıyı yazdırınca değer 0 oluyor 

}

