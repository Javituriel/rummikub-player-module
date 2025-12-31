#ifndef PLAYER_H
#define PLAYER_H

#include <stdbool.h>

#define MAX_TILES 30   // Maximum number of tiles a player can have

// ---- Tile structure ----
typedef struct {
    int value;      // 1 to 13
    char color;     // R, B, G, Y (Red, Blue, Green, Yellow)
} Tile;

// ---- Player structure ----
typedef struct {
    char name[50];
    Tile tiles[MAX_TILES];
    int tileCount;
    int score;
} Player;

// ---- Player functions ----
void initPlayer(Player* p, const char* name);
void addTile(Player* p, Tile tile);
void removeTile(Player* p, int index);
void displayPlayer(const Player* p);
int calculateScore(const Player* p);

#endif
