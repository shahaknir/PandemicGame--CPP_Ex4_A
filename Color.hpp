//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_COLOR_HPP
#define EX4_PA_COLOR_HPP


#pragma once

#include <map>
#include <string>

using std::map;
using std::string;

enum Color{
    Black,
    Blue,
    Yellow,
    Red
};

static map<string, Color> colorEnumMap{
        {"Blue", Color::Blue},
        {"Black", Color::Black},
        {"Red", Color::Red},
        { "Yellow", Color::Yellow }
};



#endif //EX4_PA_COLOR_HPP
