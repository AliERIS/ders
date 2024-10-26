#include "stdio.h"
#include "stdlib.h"
//#include <stdbool.h> //tamam böyle varmış typedef ile ya da #define ile de yapılıyor 
#define PLAYER_COUNT 3


struct footballer 
{
    int skill; //0-100
    int position; // 0-4 
    int attack;  //hahahahahaha c de bool yokmuş hahahahaha
}; //kendi kendime kendi kendim tek bağlı liste


struct team{
    struct footballer players[PLAYER_COUNT]; //bak mesela hep yapılan hata felexible array member not at end of struct ama 
    int money;
    int reputation;
};


int main()
{

    
struct footballer mesut; //çok net anlamamışım onu ben 
//linked list özelinde bir şey zannediyordum kardeşim bellekte olmayan bir şey 
//hatta diyor ki sen yine bak belki bellek read olmadı nereden bileceksin bir kontrol et olmadıysa programı sonlandır
//la bu mallık sen pointer bilmiyorsun diye olmasın
//dümdüz oluştursan bence böyle bir durum yok
//demiştim pointer işini silince her şey düzeldi
//kardeşim sana ne pointerdan ya sen mi kurtarıcan bu rami


mesut.skill = 88;
mesut.position = 2; // 0-gk 1-def 2-mid 3-fwd
mesut.attack = 1;

struct footballer ronaldo, benzema, aguero, kaka;

ronaldo.skill = 99;
ronaldo.position = 3; //yani dönemi itibariyle 2 yazardım 
ronaldo.attack = 1;






printf("%d %d %d",mesut.skill,mesut.position,mesut.attack);


}


