#pragma once
#include <iostream>
#include "CharacterGeneratingApp.cpp"

using namespace std;

class Character
{
    string gender;
    string torso;
    string clothes;
    string shoes;
    string hairstyle;
    string skin;
public:
    Character(){};
    void LoadToFile();

};

