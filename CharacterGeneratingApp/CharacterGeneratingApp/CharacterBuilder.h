#pragma once
#include <string>
#include"Character.h"
class CharacterBuilder
{
protected:
    shared_ptr<Character> character1;
public:
    CharacterBuilder() {};
    shared_ptr<Character> getCharacter()
    {
        return character1;
    }
    virtual void setHairstyle(string str) = 0;
    virtual void setClothes(string str) = 0;
    virtual void setTorso(string str) = 0;
    virtual void setGender(string str) = 0;
    virtual void setShoes(string str) = 0;
    virtual Character getResult() = 0;
};

