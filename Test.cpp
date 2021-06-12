//
// Created by shahak on 12/06/2021.
//
#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"



#include <vector>
#include <iostream>
#include <stdexcept>
#include <list>
#include <random>

using namespace std;
using namespace pandemic;

random_device random_engine;
int max_range = UINT16_MAX;
uniform_int_distribution<int> random_city_range(0, Washington);
uniform_int_distribution<int> random_color_range(0, Yellow);

Board board;

City getRndCity(){
    return static_cast<City>(random_city_range(random_engine));
}

Color getRndColor(){
    return static_cast<Color>(random_color_range(random_engine));
}

bool neighbor_cities(City& curr, City& dest){
    if(board.get_cities_map().at(curr).neighbours.at(dest)){
        return true;
    }
    return false;
}



Player player_list[8] = {
        Researcher(board , getRndCity()),
        Scientist(board , getRndCity(), 1),
        FieldDoctor(board , getRndCity()),
        GeneSplicer(board , getRndCity()),
        OperationsExpert(board , getRndCity()),
        Dispatcher(board , getRndCity()),
        Medic(board , getRndCity()),
        Virologist(board , getRndCity())
};

TEST_CASE("Researcher Abilities Test:"){
    auto researcher = player_list[0];
    City cur_city = player_list[0]. getCity();
    Color temp_col;
    if(!board.isBuilt(cur_city)){
        temp_col = board.get_cities_map().at(cur_city).color;
        CHECK_NOTHROW(player_list[0].discover_cure(temp_col));
    }else{
        vector<City> nei_vector = board.get_cities_map().at(cur_city).neighbours;
        player_list[0].drive(nei_vector.front());
        cur_city = player_list[0]. getCity();
        temp_col = board.get_cities_map().at(cur_city).color;
        CHECK_NOTHROW(player_list[0].discover_cure(temp_col));
    }
}




TEST_CASE("check operations not throw "){ // total 56 tests

    for(Player p: player_list){ // 7 test * 8 players
                CHECK_NOTHROW(p.drive(getRndCity()));
                CHECK_NOTHROW(p.fly_direct(getRndCity()));
                CHECK_NOTHROW(p.fly_shuttle(getRndCity()));
                CHECK_NOTHROW(p.fly_charter(getRndCity()));
                CHECK_NOTHROW(p.build());
                CHECK_NOTHROW(p.discover_cure(getRndColor()));
                CHECK_NOTHROW(p.treat(getRndCity()));
    }
}

TEST_CASE("check transportation"){ // total 32 tests
    for(Player p: player_list){ // 4 test * 8 players
        City city = getRndCity();
        p.drive(city);
                CHECK(p.drive(city).getCity() == city);

        city = getRndCity();
                CHECK(p.fly_direct(city).getCity() == city);

        city = getRndCity();
                CHECK(p.fly_shuttle(city).getCity() == city);

        city = getRndCity();
                CHECK(p.fly_charter(city).getCity() == city);

    }
}

TEST_CASE(" check player methods => build, discover_cure, treat"){
    for(Player p: player_list){ // 4 test * 8 players
        // check build research station
        p.build();
                CHECK(board.isBuilt(p.getCity()));

        // check discover cure card's cost
        int prevCardsSize = p.getCards().size();
        Color color = getRndColor();
        p.discover_cure(color);
        int cardsSize = p.getCards().size();
        if(board.isCured(color)){
            prevCardsSize-=5;
                    CHECK(cardsSize == prevCardsSize);
            p.discover_cure(color);
        }
                CHECK(cardsSize == prevCardsSize);

        // check treat
        City city = getRndCity();

        p.treat(city);

    }
}



