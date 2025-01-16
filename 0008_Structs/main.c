#include <stdio.h>
#include <string.h>

// struct

void printPokemon(struct Pokemon yourPokemon)
{
    printf("\nName: %s\n", yourPokemon.name);
    printf("Level: %d\n", yourPokemon.level);
    printf("Type: %s\n", yourPokemon.type);
}

int main()
{
    struct Pokemon pikatchu;

    strcpy(pikatchu.name, "pikatchu");
    pikatchu.level = 10;
    strcpy(pikatchu.type, "Electric");
    printPokemon(pikatchu);

    struct Pokemon *myPokemon = &pikatchu;
    myPokemon->level = 42;
    printPokemon(pikatchu);

    return 0;
}