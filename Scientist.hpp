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
        Scientist(Board board1, City city1, Board board, City city, int num);
    };
}





#endif //EX4_PA_SCIENTIST_HPP
