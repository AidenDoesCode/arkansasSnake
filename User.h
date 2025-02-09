#ifndef USER_H
#define USER_H
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class User
{
    public:
        User(); //default constructor

        //getters
        string getName() const; 
        string getPersonality() const;
        string getSnake() const;

    private:
        string personality;
        string snakeAssigned;
        string name;
};

#endif