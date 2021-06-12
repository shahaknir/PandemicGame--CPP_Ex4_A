//
// Created by shahak on 12/06/2021.
//

#ifndef EX4_PA_CITY_HPP
#define EX4_PA_CITY_HPP

#pragma once

#include <map>
#include <string>

using std::map;
using std::string;


enum City
{
    Algiers,
    Atlanta,
    Baghdad,
    Bangkok,
    Beijing,
    Bogota,
    BuenosAires,
    Cairo,
    Chennai,
    Chicago,
    Delhi,
    Essen,
    HoChiMinhCity,
    HongKong,
    Istanbul,
    Jakarta,
    Johannesburg,
    Karachi,
    Khartoum,
    Kinshasa,
    Kolkata,
    Lagos,
    Lima,
    London,
    LosAngeles,
    Madrid,
    Manila,
    MexicoCity,
    Miami,
    Milan,
    Montreal,
    Moscow,
    Mumbai,
    NewYork,
    Osaka,
    Paris,
    Riyadh,
    SanFrancisco,
    Santiago,
    SaoPaulo,
    Seoul,
    Shanghai,
    StPetersburg,
    Sydney,
    Taipei,
    Tehran,
    Tokyo,
    Washington
};

static map<string, City> cityEnumMap{{"Algiers",       City::Algiers},
                                     {"Atlanta",       City::Atlanta},
                                     {"Baghdad",       City::Baghdad},
                                     {"Bangkok",       City::Bangkok},
                                     {"Beijing",       City::Beijing},
                                     {"Beijing",       City::Beijing},
                                     {"Bogota",        City::Bogota},
                                     {"BuenosAires",   City::BuenosAires},
                                     {"Cairo",         City::Cairo},
                                     {"Chennai",       City::Chennai},
                                     {"Chicago",       City::Chicago},
                                     {"Delhi",         City::Delhi},
                                     {"Essen",         City::Essen},
                                     {"HoChiMinhCity", City::HoChiMinhCity},
                                     {"HongKong",      City::HongKong},
                                     {"Istanbul",      City::Istanbul},
                                     {"Jakarta",       City::Jakarta},
                                     {"Johannesburg",  City::Johannesburg},
                                     {"Karachi",       City::Karachi},
                                     {"Khartoum",      City::Khartoum},
                                     {"Kinshasa",      City::Kinshasa},
                                     {"Kolkata",       City::Kolkata},
                                     {"Lagos",         City::Lagos},
                                     {"Lima",          City::Lima},
                                     {"London",        City::London},
                                     {"LosAngeles",    City::LosAngeles},
                                     {"Madrid",        City::Madrid},
                                     {"Manila",        City::Manila},
                                     {"MexicoCity",    City::MexicoCity},
                                     {"Miami",         City::Miami},
                                     {"Milan",         City::Milan},
                                     {"Montreal",      City::Montreal},
                                     {"Moscow",        City::Moscow},
                                     {"Mumbai",        City::Mumbai},
                                     {"NewYork",       City::NewYork},
                                     {"Osaka",         City::Osaka},
                                     {"Paris",         City::Paris},
                                     {"Riyadh",        City::Riyadh},
                                     {"SanFrancisco",  City::SanFrancisco},
                                     {"Santiago",      City::Santiago},
                                     {"SaoPaulo",      City::SaoPaulo},
                                     {"Seoul",         City::Seoul},
                                     {"Shanghai",      City::Shanghai},
                                     {"StPetersburg",  City::StPetersburg},
                                     {"Sydney",        City::Sydney},
                                     {"Taipei",        City::Taipei},
                                     {"Tehran",        City::Tehran},
                                     {"Tokyo",         City::Tokyo},
                                     {"Washington",    City::Washington}
};


#endif //EX4_PA_CITY_HPP
