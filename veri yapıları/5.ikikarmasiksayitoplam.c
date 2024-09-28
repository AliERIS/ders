//iki karmasik sayinin toplamini bulan fonksiyon yazimi
#include "stdio.h"

struct kompleks
{
    int real;
    int sanal;
};



int topla(int a, int b)
{

return a+b;
}

struct kompleks kompleks_sum(struct kompleks s1, struct kompleks s2)
{

struct kompleks result;
result.real = s1.real + s2.real;
result.sanal =s1.sanal + s2.sanal;
return result;


}

int main()
{
    printf("program just started\n");
    //hoca bu kısımda bitiriyor ancak ben bu fonksiyon çalışıyor mu merak etmekteyim

    //aldım elime kumpası


    struct kompleks s1,s2,sonuc;

    s1.sanal = 8;
    s1.real = 3; //s1 = 3 + 8i

    s2.real = -1;
    s2.sanal = 4; //s2 = -1 + 4i
    //so lets do it 

    sonuc = kompleks_sum(s1,s2);
    printf("sonuc %d + %di ",sonuc.real,sonuc.sanal);  //3 + 8i  ile -1 + 4i nin toplamı olan 2 + 12i yi vermesi beklenir


}