//
// Created by shahak on 12/06/2021.
//

#include "Researcher.hpp"

namespace pandemic{

    Researcher::Researcher(Board board, City city) : Player(board, city) {

    }

    // Returns Player's Role in the Game - has no use in Player
    string Researcher::role(){
        string researcher_role;
        researcher_role = "The Researcher can find cure to disease "
                          "even if there isn't a research station in the city "
                          "he is in";
        return researcher_role;
    }

    void Researcher::discover_cure(Color color) {

    }
}