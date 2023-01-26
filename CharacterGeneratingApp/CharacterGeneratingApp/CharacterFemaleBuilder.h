#pragma once
#include "CharacterBuilder.h"

class CharacterFemaleBuilder : public CharacterBuilder
{
public:
    CharacterFemaleBuilder() : CharacterBuilder() {}
    void setHairstyle(string str);
    void setClothes(string str);
    void setTorso(string str);
    void setGender(string str);
    void setShoes(string str);
};

