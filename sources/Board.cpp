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

void Board::remove_cures() {

}


citiesMap Board::get_cities_map(){
    return this->_citiesMap;
}

void Board::readCountries(){
    ifstream file("../cities_map.txt");
    string row;
    string word, cityStr, colorStr, neighbour;

    while (std::getline(file, row)) {
        istringstream iss(row);

        city_node cityNode;
        iss >> cityStr;

        iss >> colorStr;
        cityNode.color = colorEnumMap.at(colorStr);
        while(iss >> word) {
            iss >> neighbour;
            cityNode.neighbours.push_back(cityEnumMap.at(neighbour));
        }
        cityNode.infection_level = 0;
        this->_citiesMap[cityEnumMap.at(cityStr)] = cityNode;
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
        return _citiesMap.at(city).infection_level;
    }catch(const std::out_of_range& e) {
        _citiesMap[city].infection_level = 0;
        return _citiesMap.at(city).infection_level;
//            throw ("city dosen't exist");
    }
}

ostream &pandemic::operator<<(ostream &out, const Board &num) {
    return out;
}
