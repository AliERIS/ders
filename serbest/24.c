//lets try to keep it simple

#include "stdio.h"
#include "stdlib.h"

struct pehlivan{
char name[10];
int health;
int atk;

};

void fight(struct pehlivan *p1, struct pehlivan *p2)  //struct pehlivan türünden fonksiyon tanımlamıştım ama şimdi anladım ki gerek yok
{

struct pehlivan *temp1, *temp2;
if(p1->atk>p2->atk)
{
    temp1 = p1; temp2 = p2;
}
else  
{
temp1 = p2;
temp2= p1;
}

printf("%s kazandı %s kaybetti \n",temp1->name,temp2->name);

}




int main()
{

struct pehlivan *pehlivan1 = (struct pehlivan *)malloc(sizeof(struct pehlivan));
struct pehlivan *pehlivan2= (struct pehlivan *)malloc(sizeof(struct pehlivan));

//pehlivan tanımlamaları  //kendimi yukardaki structa int lvl koymamak için zor tutuyorum

snprintf(pehlivan1->name, sizeof(pehlivan1->name), "GnuChan");
pehlivan1->atk = 10;
snprintf(pehlivan2->name, sizeof(pehlivan2->name), "ArchKubi");
pehlivan2->atk=15;

fight(pehlivan1,pehlivan2);
//printf("%s\n",pehlivan1->name);



}