#include "Move.hpp"

Move::Move() {}

Move::~Move() {}

Move::Move(const std::vector<Cords>& move) : std::vector<Cords>(move) {}

void Move::addMove(const Cords& cords) {
    this->push_back(cords);
}

void Move::addMove(const std::vector<Cords>& move) {
    this->insert(this->end(), move.begin(), move.end());
}

void Move::addMove(int x, int y, char piece) {
    this->emplace_back(x, y, piece);
}