#include <stdio.h>
#include <string.h>
#include "player.h"

// Initialize a player
void initPlayer(Player* p, const char* name) {
    strcpy(p->name, name);
    p->tileCount = 0;
    p->score = 0;
}

// Add a tile to the player's hand
void addTile(Player* p, Tile tile) {
    if (p->tileCount < MAX_TILES) {
        p->tiles[p->tileCount] = tile;
        p->tileCount++;
    } else {
        printf("Player %s has too many tiles!\n", p->name);
    }
}

// Remove a tile by index
void removeTile(Player* p, int index) {
    if (index < 0 || index >= p->tileCount) {
        printf("Invalid tile index.\n");
        return;
    }

    for (int i = index; i < p->tileCount - 1; i++) {
        p->tiles[i] = p->tiles[i + 1];
    }
    p->tileCount--;
}

// Display player's information
void displayPlayer(const Player* p) {
    printf("Player: %s\n", p->name);
    printf("Tiles (%d): ", p->tileCount);

    for (int i = 0; i < p->tileCount; i++) {
        printf("[%c%d] ", p->tiles[i].color, p->tiles[i].value);
    }
    printf("\n");
}

// Calculate player's score (sum of remaining tiles)
int calculateScore(const Player* p) {
    int sum = 0;
    for (int i = 0; i < p->tileCount; i++) {
        sum += p->tiles[i].value;
    }
    return sum;
}
