#ifndef CHARACTER_H
#define CHARACTER_H

typedef struct {
    char name[50];
    int health;
    int attack;
} Character;

void initialize_character(Character *character, const char *name, int health, int attack);
void display_character(const Character *character);

#endif // CHARACTER_H
