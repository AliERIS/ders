#include "stdio.h"
#include "string.h"

struct kayit{
char cinsiyet;
int yas;
float kilo;
char ad[50];

}ogrenci;




int main()

{
char selam [] = "Merhaba";
printf("%s",selam);

strcpy(ogrenci.ad,"ali");

ogrenci.yas=11;
ogrenci.kilo=44.2;
ogrenci.cinsiyet='e';

printf("Ad: %s\n", ogrenci.ad);
printf("Yaş: %d\n", ogrenci.yas);
printf("Kilo: %.1f\n", ogrenci.kilo);
printf("Cinsiyet: %c\n", ogrenci.cinsiyet);


}

