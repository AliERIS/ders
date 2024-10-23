#include <stdio.h>


int main()
{


int x,y;
printf("birinci sayiyi giriniz");
scanf("%d",&x);
printf("ikinci sayiyi giriniz");
scanf("%d",&y);

if(x<y) printf("%d",x);
else if(x>y) printf("%d",y);
else
printf("eşit");




}