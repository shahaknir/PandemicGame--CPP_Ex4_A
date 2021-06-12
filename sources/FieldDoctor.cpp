//
// Created by shahak on 12/06/2021.
//

#include "FieldDoctor.hpp"

using namespace std;
namespace pandemic{

    FieldDoctor::FieldDoctor(Board board, City city) : Player(board, city) {

    }

    // Returns Player's Role in the Game - has no use in Player
    string FieldDoctor::role(){
        string fieldocrole;
        fieldocrole = "The fieldDoctor can treat any disease "
                      "not only in the city he is currently in - "
                      "he can treat the neighbor cities as well";
        return fieldocrole;
    }

    //FieldDoctor Ability to Treat Neighbor Cities
    FieldDoctor& FieldDoctor::treat(City city) {
//        City c_city = this->currCity;
//        Board& _board = this->board;
//        if(_board.citiesMapBoard.at(c_city).neighbors.at(city) != 0) {
//            _board.citiesMapBoard.at(city).diseaseLv -= 1;
//        }
        return *this;
    }

}