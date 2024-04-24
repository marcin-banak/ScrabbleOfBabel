#pragma once

#include <vector>
#include "Cords.hpp"

class Move : public std::vector<Cords> {
public:
    Move();
    ~Move();

    Move(const std::vector<Cords>& move);

    void addMove(const Cords& cords);
    void addMove(const std::vector<Cords>& move);
    void addMove(int x, int y, char piece);
};
