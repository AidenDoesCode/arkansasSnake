#include "User.h"

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//default constructor
User::User()
{
    name = "Aiden";
    personality = "Gemeni";
    snakeAssigned = "Billy";
}


//getter methods
string User:: getName() const
{
    return name;
}

string User::getPersonality() const
{
    return personality;
}

string User::getSnake() const
{
    return snakeAssigned;
}