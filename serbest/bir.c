#include "stdio.h"

struct footballer
{
    char *isim;
    int age;
    int atk;
    int def;
};


//abi şimdi bu struct yapısını kavrayamazsam patates olacağım dönem boyunca 




struct footballer mesutozil;





 struct footballer ozellik_bastir(struct football *yapi)
{
    printf("İsim: %s\nYas: %d\nAtak: %d\nDefans: %d",yapi.isim,yapi.age,yapi.atk,yapi.def);


}




int main()

{


// tanımlama
mesutozil.isim = "Mesut Özil";
mesutozil.atk = 86;
mesutozil.def = 20;
mesutozil.age = 22; //kitap ayracını olduğun yere değil olmak istediğin yere koyacaksın

ozellik_bastir(mesutozil);



}