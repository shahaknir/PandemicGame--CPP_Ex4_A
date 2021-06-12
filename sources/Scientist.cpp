//
// Created by shahak on 12/06/2021.
//

#include "Scientist.hpp"

namespace pandemic{

    Scientist::Scientist(Board board, City city1, int num)
        : Player(board, city1), n(num){

    }

    string Scientist::role() {
        return Player::role();
    }

    void Scientist::discover_cure(Color color) {
        Player::discover_cure(color);
    }
}