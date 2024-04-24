#include "Board.hpp"

Board::Board() {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; i++) {
            board[i][j] = Tile();
        }
    }
}

bool Board::makeMove(const Move &move) {
    bool isValid = checkMove(move);

    if (!isValid) {
        return false;
    }

    for (auto block : move) {
        board[block.x][block.y].character = block.z;
    }

    return true;
}

bool Board::checkMove(const Move &move) {

}