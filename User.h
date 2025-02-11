#ifndef USER_H
#define USER_H
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

static const int PERSONALITY_MAX = 5;

class User
{
    public:

        User(); //default constructor

        //getters
        string getName() const; 
        string getPersonality() const;
        string getSnake() const;

    private:
        string personalityTraits[PERSONALITY_MAX];
        string snakeAssigned;
        string name;
};

#endif