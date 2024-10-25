#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "battle.h"

// Dövüşün mantığı: sırayla saldırılar yapılarak sağlık sıfırlanana kadar devam edilir
void start_battle(Character *player, Character *enemy) {
    printf("\nDövüş Başlıyor!\n");

    while (player->health > 0 && enemy->health > 0) {
        // Oyuncunun saldırısı
        printf("\n%s, %s'ye saldırıyor!\n", player->name, enemy->name);
        enemy->health -= player->attack;
        if (enemy->health <= 0) {
            printf("%s yendi!\n", player->name);
            break;
        }
        printf("%s'nin kalan canı: %d\n", enemy->name, enemy->health);

        // Düşmanın saldırısı
        printf("\n%s, %s'ye saldırıyor!\n", enemy->name, player->name);
        player->health -= enemy->attack;
        if (player->health <= 0) {
            printf("%s yendi!\n", enemy->name);
            break;
        }
        printf("%s'nin kalan canı: %d\n", player->name, player->health);
    }
}
