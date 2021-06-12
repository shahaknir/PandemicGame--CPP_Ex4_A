//
// Created by shahak on 12/06/2021.
//

#include "Board.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


using namespace pandemic;

Board::Board() {
    readCountries();
}

void Board::readCountries(){
    ifstream file("../cities_map.txt");
    string row;
    string word, cityStr, colorStr, neighbour;

    while (std::getline(file, row)) {
        istringstream iss(row);

        cityInfo cityInfo;
        iss >> cityStr;

        iss >> colorStr;
        cityInfo.color = colorEnumMap.at(colorStr);
        while(iss >> word) {
            iss >> neighbour;
            cityInfo.neighbours.push_back(cityEnumMap.at(neighbour));
        }
        cityInfo.infectionLvl = 0;
        this->_citiesMap[cityEnumMap.at(cityStr)] = cityInfo;
    }
}


bool Board::is_clean() {
    return false;
}

bool Board::isBuilt(City city) {
    return false;
}

bool Board::isCured(Color color) {
    return false;
}

int &Board::operator[](City city) {
    try{
        return _citiesMap.at(city).infectionLvl;
    }catch(const std::out_of_range& e) {
        _citiesMap[city].infectionLvl = 0;
        return _citiesMap.at(city).infectionLvl;
//            throw ("city dosen't exist");
    }
}

ostream &pandemic::operator<<(ostream &out, const Board &num) {
    return out;
}





