//lets try to keep it simple

#include "stdio.h"
#include "stdlib.h"


struct pehlivan{
char name[10];
int health;
int atk;
int rep;

};

void fight(struct pehlivan *p1, struct pehlivan *p2)  //struct pehlivan türünden fonksiyon tanımlamıştım ama şimdi anladım ki gerek yok
{

struct pehlivan *temp1, *temp2;
if(p1->atk>p2->atk)
{
    temp1 = p1; temp2 = p2;
    p1->health++; //puan tanımlamamak için
}
else  
{
    p2->health++;
temp1 = p2;
temp2= p1;
}

printf("%s kazandı %s kaybetti \n",temp1->name,temp2->name);

}


void betterFight(struct pehlivan *p1, struct pehlivan *p2)
{
    //abi emin misin ? lig mi fight mı 

    //can i do recursion here for round1 remaining healt round 2 blbalba

    if(p1->health/p2->atk > p2->health/p1->atk)
    {
        printf("%s wins, %s lost\n",p1->name,p2->name);

    }
    else if (p2->health/p1->atk>p1->health/p2->atk)
    {
        printf("%s wins, %s lost\n",p2->name,p1->name);

    }


}










int main()
{

struct pehlivan *pehlivan1 = (struct pehlivan *)malloc(sizeof(struct pehlivan));
struct pehlivan *pehlivan2 = (struct pehlivan *)malloc(sizeof(struct pehlivan));

//pehlivan tanımlamaları  //kendimi yukardaki structa int lvl koymamak için zor tutuyorum

snprintf(pehlivan1->name, sizeof(pehlivan1->name), "GnuChan");
pehlivan1->atk = 10;
pehlivan1->health = 100;
pehlivan1->rep = 0; //at the start point
snprintf(pehlivan2->name, sizeof(pehlivan2->name), "ArchKubi");
pehlivan2->atk=15;
pehlivan2 -> health = 100;
pehlivan2 -> rep = 0;
struct pehlivan *pehlivanlist[2] = {pehlivan1,pehlivan2}; //ya madem böyle yapacaktın

//fight(pehlivan1,pehlivan2);
//printf("%s\n",pehlivan1->name);


int secim;
while(1)
{
    printf("1-)Kapıştır\n");
    printf("2-)Puanlara bak\n");
    printf("3-)Better Fight\n");
    scanf("%d",&secim);

    switch (secim)
    {
    case 1:
        fight(pehlivan1,pehlivan2); //neden böyle neden listeden 1.pehlivanı 2.pehlivanı seçmeli değil    
    break;

    
    case 2:  //he break bu dilde miydi hepsi borş oldu
        printf("\n%s puan: %d\n",pehlivan1->name,pehlivan1->health);
        printf("%s puan: %d\n"  ,pehlivan2->name,pehlivan2->health);
    break;

    case 3:
    betterFight(pehlivan1,pehlivan2);
    break;
    }


}






}