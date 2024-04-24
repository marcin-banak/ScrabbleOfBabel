#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../Game/Move.hpp"

TEST_CASE("Move class test", "[Move]") {
    SECTION("Empty constructor") {
        Move move;
        REQUIRE(move.empty());
    }

    SECTION("Constructor with parameters") {
        Move move(1, 2);
        REQUIRE(move.getX() == 1);
        REQUIRE(move.getY() == 2);
    }

    