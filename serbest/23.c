#include "stdio.h"
#include "stdlib.h"
//#include <stdbool.h> //tamam böyle varmış typedef ile ya da #define ile de yapılıyor 
#define PLAYER_COUNT 3
#define TEAM_COUNT 2
#define LEAGUE_COUNT 1
#define TOTAL_PLAYERS 6

struct footballer 
{   
    char name[12];
    int skill; //0-100
    int position; // 0-4 
    int attack;  //hahahahahaha c de bool yokmuş hahahahaha
    int value; //kafanı sikim senin defansif olanlar bedava mı?

}; //kendi kendime kendi kendim tek bağlı liste

char mevki(int pos)
{
    switch(pos)
    {
        case 0:
        return 'K';
        case 1:
        return 'D';
        case 2:
        return 'M';
        case 3:
        return 'F';
    }
}


struct footballer training(struct footballer footballer) //ee kardeşim sen antreamnı ağırlık çalışarak yaparsan böyle olur
{
    footballer.attack++; 
    return footballer;
}




struct team{
    char name[30];
    struct footballer players[PLAYER_COUNT]; //bak mesela hep yapılan hata felexible array member not at end of struct ama 
    int money;
    int reputation;
    int points;
};

struct league{

    char leaguename[30];
    struct  team teamlist[TEAM_COUNT]; // iyi de biz buradan istediğimiz kadar lig türetebileceğiz değil mi
    int matchnumber; //--TEAM_COUNT*2


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

snprintf(mesut.name, sizeof(mesut.name), "Mesut Özil"); //heh bunu copy paste yaptım ya benden adam olmaz
mesut.skill = 88;
mesut.position = 2; // 0-gk 1-def 2-mid 3-fwd
mesut.attack = 1;

struct footballer ronaldo, benzema, aguero, kaka, messi;
snprintf(ronaldo.name, sizeof(ronaldo.name), "Ronaldo");
ronaldo.skill = 99;
ronaldo.position = 3; //yani dönemi itibariyle 2 yazardım 
ronaldo.attack = 1;

snprintf(benzema.name, sizeof(benzema.name), "Benzema");
benzema.skill = 84;
benzema.position = 3;
benzema.attack = 1;

snprintf(aguero.name, sizeof(aguero.name), "Agüero");
aguero.skill = 98;
aguero.position = 3;
benzema.attack = 1;

snprintf(kaka.name, sizeof(kaka.name), "Kaka");
kaka.skill = 84;
kaka.position = 2;
kaka.attack =1 ;

snprintf(messi.name, sizeof(messi.name), "Messi");
messi.skill = 99; //messi skill 32596 fixed
messi.position = 3; //oratsahadan alır gider gol atar hangi sayı oluyor
messi.attack = 1;


struct team Anton;
struct team WcfBelediye;
struct team allteams[TEAM_COUNT] = {Anton , WcfBelediye};

Anton.money = 56;
Anton.reputation = 10;
WcfBelediye.money = 2;
WcfBelediye.reputation = 1;

//Anton.name = "Anton FC";
snprintf(Anton.name, sizeof(Anton.name), "Anton Wanko Hayranları");
snprintf(WcfBelediye.name, sizeof(WcfBelediye.name), "WcfBelediye"); //bok vardı tüm adı değişkene girecek wcf de geç
struct footballer allplayer[TOTAL_PLAYERS] = {ronaldo,benzema,aguero,kaka,mesut,messi};
Anton.players[0] = ronaldo;
Anton.players[1] = mesut;
Anton.players[2] = kaka;
WcfBelediye.players[0] = benzema;
WcfBelediye.players[1] = aguero ;
WcfBelediye.players[2] = messi; //evet messi de olsan wcfye girebilmek için wcf belediyede hünerlerini gösteriyor

//şunun bitmiş hali pythonda 60 satırdı be daha tanımlamaları bitiremedik lig sistemini yazamadık

struct league ligler[LEAGUE_COUNT] = {                //Diğer ligleri de buradan tanımlayacaksın
{" WCF Birinci Ligi", {Anton, WcfBelediye} ,2}};  

int secim;
while (1)
{
    //printf("%s",Anton.name); bişi denedim
    printf("\n1-)Oyuncu Özelliği gör\n");
    printf("2-)Takım Özelliği gör\n");
    printf("3-)Lig Özelliği gör\n");
    scanf("%d",&secim);

    printf("%s",allteams[0].name);
    switch(secim)
    {
        case 1:
            for(int i=0; i<TOTAL_PLAYERS; i++)
            {
                printf("%d-) %s \n",i+1,allplayer[i].name);
            }
            scanf("%d",&secim);
            printf("%s \n Skill: %d \n Mevki : %c \n ",allplayer[secim-1].name, allplayer[secim-1].skill, mevki(allplayer[secim-1].position));

            break;
        
        case 2:
            
            for(int i=0; i<TEAM_COUNT; i++)
            {
                printf("%d %s \n",i+1,allteams[0].name);
            }
            scanf("%d",&secim);
            printf("%s \n Money: %d \n Reputation : %d \n ",allteams[secim-1].name, allteams[secim-1].money, allteams[secim-1].reputation);


        break;

        case 3:
            printf("coming soon");
        break;


    }





}





}


