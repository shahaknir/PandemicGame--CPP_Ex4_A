//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_PLAYER_HPP
#define EX4_PA_PLAYER_HPP


#pragma once
#include <iostream>
#include <string>

#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <vector>

using std::string;
using std::vector;

namespace pandemic
{
    class Player{
        City _currCity;
        vector<City> _cards;

    public:

        Player(Board board, City city);

        vector<City> getCards();

        City getCity();

        Player& take_card(City city);

        string role();

        void discover_cure(Color color);

        Player& drive(City city);

        Player& fly_direct(City city);

        Player& fly_charter(City city);

        Player& fly_shuttle(City city);

        Player& build();

        Player& treat(City city);

    };


}



#endif //EX4_PA_PLAYER_HPP
