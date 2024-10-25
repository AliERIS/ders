#include <stdio.h>
#include <string.h>
#include "character.h"

// Karakter yapılandırma fonksiyonu
void initialize_character(Character *character, const char *name, int health, int attack) {
    strncpy(character->name, name, sizeof(character->name) - 1);
    character->health = health;
    character->attack = attack;
}

// Karakter bilgilerini ekrana yazdırma fonksiyonu
void display_character(const Character *character) {
    printf("Karakter: %s\n", character->name);
    printf("Can: %d\n", character->health);
    printf("Saldırı Gücü: %d\n", character->attack);
}
