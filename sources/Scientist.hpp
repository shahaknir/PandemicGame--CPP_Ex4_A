//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_SCIENTIST_HPP
#define EX4_PA_SCIENTIST_HPP


#pragma once

#include <stdio.h>
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"


namespace pandemic
{
    class Scientist : public Player
    {
        int n;

    public:
        Scientist(Board board, City city, int num);
        // Returns Player's Role in the Game - has no use in Player
        string role() override;
        // Can discover cure with only n cards as given in the constructor
        void discover_cure(Color color) override;

    };
}





#endif //EX4_PA_SCIENTIST_HPP
