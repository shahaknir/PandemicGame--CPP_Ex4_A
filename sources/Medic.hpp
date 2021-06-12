//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_MEDIC_HPP
#define EX4_PA_MEDIC_HPP


#pragma once

#include <stdio.h>
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"


namespace pandemic
{
    class Medic : public Player
    {
    public:
        Medic(Board board, City city);
        // Returns Player's Role in the Game - has no use in Player
        string role() override;

        // When treating - get disease level to 0
        Medic& treat(City city) override;

        // If cure was discovered - get disease level to 0
        // to each city he is in
        Medic& drive(City city) override;
        Medic& fly_direct(City city) override;
        Medic& fly_charter(City city) override;
        Medic& fly_shuttle(City city) override;


    };
}




#endif //EX4_PA_MEDIC_HPP
