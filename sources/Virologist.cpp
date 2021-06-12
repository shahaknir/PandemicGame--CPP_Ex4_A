//
// Created by shahak on 12/06/2021.
//

#include "Virologist.hpp"

using namespace std;
namespace pandemic{

    Virologist::Virologist(Board board, City city) : Player(board, city) {

    }

    // Returns Player's Role in the Game - has no use in Player
    string Virologist::role(){
        string virole;
        virole = "The Virologist can treat disease "
                 "by only throwing the city's card";
        return virole;
    }

    Virologist &Virologist::treat(City city) {
        return Virologist::treat(city);
    }
}