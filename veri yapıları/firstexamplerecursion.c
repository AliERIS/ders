//verilern bir sayının faktörüyelini hesaplayan rekürsif bir fonksiyonu C dilinde yaz 

#include "stdio.h"

int recursion(int b)
{
if(b==0)
{
    return 1;
}
else 
{
    return b*recursion(b-1);
}


}


int main()
{
int sonuc;
sonuc = recursion(5);
printf("%d\n",sonuc);


}