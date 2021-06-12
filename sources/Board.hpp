//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PB_BOARD_H
#define EX4_PB_BOARD_H


#pragma once

#include "City.hpp"
#include "Color.hpp"
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::ostream;
using std::string;
using std::map;
using std::vector;

typedef struct{
    int infection_level;
    vector<City> neighbours;
    Color color;
    bool research_station;
}city_node;

typedef map<City, city_node> citiesMap;


namespace pandemic {
    class Board {
    private:
        citiesMap _citiesMap;

        void readCountries();

        bool cures[4];

    public:

        Board();
        citiesMap get_cities_map();
        void remove_cures();
        bool is_clean();
        bool isBuilt(City city);
        bool isCured(Color color);
        int & operator[](City city);
        friend ostream& operator<< (ostream& out, const Board& num);
    };
}

#endif //EX4_PB_BOARD_H
