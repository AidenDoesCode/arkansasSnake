#include "User.h"

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//default constructor
User::User()
{
    name = "";
    for (int i = 0; i < PERSONALITY_MAX; i++)
    {
        personalityTraits[i] = "";
    }
    snakeAssigned = "";
}


//getter methods
string User::getName() const
{
    return name;
}

//prob doesnt work
string User::getPersonality() const
{
    for (int i = 0; i < PERSONALITY_MAX; i++)
    {
    }
}

string User::getSnake() const
{
    return snakeAssigned;
}