//
// Created by shahak on 12/06/2021.
//

#include "Dispatcher.hpp"

using namespace std;
namespace pandemic{

    Dispatcher::Dispatcher(Board board, City city) : Player(board, city) {

    }

    // Returns Player's Role in the Game - has no use in Player
    string Dispatcher::role(){
        string dispatcherole;
        dispatcherole = "The Dispatcher can fly direct to any "
                        "destination if the city he currently in - "
                        "has a research station in it";
        return dispatcherole;
    }

    // Dispatcher can fly directly to where ever he wish
    // if there ia a research station in his current city
    Dispatcher& Dispatcher::fly_direct(City city){
//        Board _b = this->board;
//        City _c = this->currCity;
//        if(_b.citiesMapBoard.at(_c).RStationFlag){
//            this->currCity = city;
//        }
        return *this;
    }
}