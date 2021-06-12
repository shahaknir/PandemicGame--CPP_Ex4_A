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

    protected:
        City currCity;
        Board board = Board();
        vector<City> cards;

    public:

        Player(Board board, City city);

        virtual vector<City> getCards();

        virtual City getCity();

        virtual Player& take_card(City city);

        virtual string role();

        virtual void discover_cure(Color color);

        virtual Player& drive(City city);

        virtual Player& fly_direct(City city);

        virtual Player& fly_charter(City city);

        virtual Player& fly_shuttle(City city);

        virtual Player& build();

        virtual Player& treat(City city);

    };


}



#endif //EX4_PA_PLAYER_HPP
