//
// Created by shahak on 12/06/2021.
//

#include "OperationsExpert.hpp"
namespace pandemic{
    OperationsExpert::OperationsExpert(pandemic::Board b, City c) : Player(b, c) {

    }
    // Returns Player's Role in the Game - has no use in Player
    string OperationsExpert::role(){
        string oerole;
        oerole = "The Operations Expert can build a Research Station "
                 "in any city he is currently in - "
                 "without throwing any card";
        return oerole;
    }

    // can build a Research Station in any city he is currently in without throwing any card"
    OperationsExpert& OperationsExpert::build(){
//        City city = this->currCity;
//        Board& _board = this->board;
//        if(!_board.citiesMapBoard.at(city).RStationFlag) {
//            _board.citiesMapBoard.at(city).RStationFlag = true;
//        }
        return *this;
    }

}
