//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_DISPATCHER_HPP
#define EX4_PA_DISPATCHER_HPP


#pragma once

#include <stdio.h>
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"


namespace pandemic
{
    class Dispatcher : public Player
    {
    public:
        Dispatcher(Board board, City city);
        // Returns Player's Role in the Game - has no use in Player
        string role() override;

        // Dispatcher can fly directly to where ever he wish
        // if there ia a research station in his current city
        Dispatcher& fly_direct(City city) override;
    };
}





#endif //EX4_PA_DISPATCHER_HPP
