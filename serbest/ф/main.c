#include <stdio.h>  //gptye yazdırdım ama üşendim şimdi
#include "character.h"
#include "battle.h"

int main() {
    Character player;
    Character enemy;

    // Oyuncu ve düşman karakterlerini başlat
    initialize_character(&player, "Oyuncu", 100, 20);
    initialize_character(&enemy, "Düşman", 80, 15);

    // Karakter bilgilerini göster
    printf("Oyuncu Bilgileri:\n");
    display_character(&player);
    printf("\nDüşman Bilgileri:\n");
    display_character(&enemy);

    // Dövüşü başlat
    start_battle(&player, &enemy);

    return 0;
}
