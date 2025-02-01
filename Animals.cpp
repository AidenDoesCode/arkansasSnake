#include "Animals.h"
#include <iomanip>

Animals::Animals() : name("Snake"), type("Cobra"), gender("M") {}
Animals::Animals(string nameIn, string typeIn, string genderIn) : name(nameIn), type(typeIn), gender(genderIn) {}
        


string Animals::getName() const {return name; }
string Animals::getType() const {return type; }
string Animals::getGender() const {return gender; }
        
void Animals::print() const {cout << name << ", " << type << ", " << gender << "." << endl;}

