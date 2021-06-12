//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_VIROLOGIST_HPP
#define EX4_PA_VIROLOGIST_HPP


#pragma once

#include <stdio.h>
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"


namespace pandemic
{
    class Virologist : public Player
    {
    public:
        Virologist(Board board, City city);
    };
}




#endif //EX4_PA_VIROLOGIST_HPP
