//
// Created by shahak on 12/06/2021.
//

#include "GeneSplicer.hpp"

using namespace std;
namespace pandemic{

    GeneSplicer::GeneSplicer(Board board, City city) : Player(board, city) {

    }
    // Returns Player's Role in the Game - has no use in Player
    string GeneSplicer::role(){
        string genesplicer_role;
        genesplicer_role = "The GeneSplicer can discover cure "
                           "with throwing any 5 cards he has in his hand";
        return genesplicer_role;
    }

    // Can find cure with any 5 cards
    void GeneSplicer::discover_cure(Color color){
//        Board& _b = this->board;
//        int index = 5;
//        for(auto card: this->cards){
//            index--;
//            if(index != 0){
//                cards.erase(cards.begin()+index);
//            }else{
//                break;
//            }
//        }
    }
}