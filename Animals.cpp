#include "Animals.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//Constructors
Animals::Animals() : name(""), type(""), gender("") {}
Animals::Animals(string nameIn, string typeIn, string genderIn) : name(nameIn), type(typeIn), gender(genderIn) {}
        
//Destructors
Animals::~Animals() {}

//Getters
string Animals::getName() const {return name; }
string Animals::getType() const {return type; }
string Animals::getGender() const {return gender; }

//print method
void Animals::print() const {cout << name << ", " << type << ", " << gender << "." << endl;}





//setRandom
void Animals::setRandomSnake(string namesArray[], string snakesArray[]) 
{
    //random variables to get a random name, snake, and gender
    int randomSnakeNum = rand() % SNAKES_LIST_SIZE;
    int randomNameNum = rand() % NAMES_LIST_SIZE;
    int randomGenderNum = rand() % 2;

    name = namesArray[randomNameNum];
    type = snakesArray[randomSnakeNum];

    if (randomGenderNum == 0)
    {
        gender = "F"; //female
    }
    else
    {
        gender = "M"; //male
    }
}
