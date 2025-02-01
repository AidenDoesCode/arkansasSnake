#ifndef ANIMALS_H
#define ANIMALS_H

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Animals 
{
    public:
        Animals();
        Animals(string nameIn, string typeIn, string genderIn);
        
        string getRandomName() const;
        string getName() const;
        string getType() const;
        string getGender() const;
        string getRandomSnake() const;
        
        void print() const;
        
    private:
        string name;
        string type;
        string gender;
};

#endif
