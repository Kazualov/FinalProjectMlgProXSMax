#pragma once
#include "CharacterBuilder.h"

class CharacterMaleBuilder : public CharacterBuilder
{
public:
	CharacterMaleBuilder() : CharacterBuilder(){}
    void setHairstyle(string str);
    void setClothes(string str);
    void setTorso(string str);
    void setGender(string str);
    void setShoes(string str);
};

