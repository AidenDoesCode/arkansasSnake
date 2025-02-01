// Animals.h
#ifndef ANIMALS_H
#define ANIMALS_H

#include <string>
#include <cstdlib>
using namespace std;

int const SNAKES_LIST_SIZE = 37; //GLOBAL VARIABLE FOR snakes.txt SIZE
int const NAMES_LIST_SIZE = 4945;

class Animals {
public:
    Animals();  // Default constructor
    Animals(string nameIn, string typeIn, string genderIn);  // Parameterized constructor

    ~Animals(); //destructor

    string getName() const;
    string getType() const;
    string getGender() const;

    void setRandomSnake(string nameArray[], string snakesArray[]); //setter

    void print() const;

private:

    string name;
    string type;
    string gender;
};

#endif
