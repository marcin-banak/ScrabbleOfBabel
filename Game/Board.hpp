#pragma once
#include "Tile.hpp"
#include "Move.hpp"

class Board {
public:
    Tile board[15][15];

    Board();
    bool makeMove(const Move &move);
private:
    bool checkMove(const Move &move);
};