#include <stdio.h>
#include "player.h"

int main() {
    Player p1;
    initPlayer(&p1, "Alice");

    Tile t1 = {5, 'R'};
    Tile t2 = {10, 'B'};
    Tile t3 = {7, 'G'};

    addTile(&p1, t1);
    addTile(&p1, t2);
    addTile(&p1, t3);

    displayPlayer(&p1);

    printf("Score: %d\n", calculateScore(&p1));

    removeTile(&p1, 1); // remove second tile

    printf("\nAfter removing a tile:\n");
    displayPlayer(&p1);

    return 0;
}
