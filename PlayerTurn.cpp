#include <iostream>

void player_turn(field) {
    int x, y;
    std::cin >> x >> y;
    field[x][y] = 1;
    return field;
}