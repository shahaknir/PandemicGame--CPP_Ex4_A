//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_GENESPLICER_HPP
#define EX4_PA_GENESPLICER_HPP


#pragma once

#include <stdio.h>
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"


namespace pandemic
{
    class GeneSplicer : public Player
    {
    public:
        GeneSplicer(Board board, City city);

        // Returns Player's Role in the Game - has no use in Player
        string role() override;

        // Can find cure with any 5 cards
        void discover_cure(Color color) override;

    };
}




#endif //EX4_PA_GENESPLICER_HPP
