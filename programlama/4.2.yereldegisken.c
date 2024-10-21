#include <stdio.h>
//#include <conio.h>  I'm in linux so I donot need this but you


void fonksiyon1();
void fonksiyon2();
int i=5; //global değişken
int main(int argc, char const *argv[])
{
    int i =10;
    printf("Değer1=%d\n",i);
    fonksiyon1();  
    printf("Hangisini yazar %d\n",i);
    fonksiyon2();
    return 0;
}

void fonksiyon1()
{
    int i =15;
    printf("Değer2 = %d\n",i);
}

void fonksiyon2()
{

printf("hangisini yazar %d\n",i);  //şimdi sürprizli yer burası ben kardeşim bu mainden çağrılıyor mainde de inin değperi 10dur diyip 10 diye düşünebilirim ama hayır mainin içinde değiliz ve bu fonksiyon da parametre alan bir fonksiyon değil dışarıda da global değişken 5 i kullanırız



}