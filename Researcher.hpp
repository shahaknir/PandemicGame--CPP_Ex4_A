//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_RESEARCHER_HPP
#define EX4_PA_RESEARCHER_HPP


#pragma once

#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"


namespace pandemic
{
    class Researcher : public Player
    {
    public:
        Researcher(Board board, City city);

        // Returns Player's Role in the Game - has no use in Player
        string role() override;

        // Can find cure without having a research station
        void discover_cure(Color color) override;
    };
}




#endif //EX4_PA_RESEARCHER_HPP
